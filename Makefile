CC=gcc 
CFLAGS=-Werror -Wextra -Werror --std=c++17 -lstdc++


TEST_FLAGS=-lgtest -lpthread -lm
TEST_SRC=test/test_main.cc test/test_parser.cc \
	model/parser.cc model/affine.cc test/test_affine.cc
TEST_EXEC=gtest

NAME=3d-viewer


all: clean $(NAME)


$(NAME):
	make -C view/3d-viewer
	mv view/3d-viewer/$(NAME) .


$(TEST_EXEC):
	$(CC) -o $(TEST_EXEC) $(TEST_SRC) $(CFLAGS) $(TEST_FLAGS) -g

tests: clean $(TEST_EXEC)
	./$(TEST_EXEC)

gcov_report : clean
	$(CC) -o $(TEST_EXEC) $(TEST_SRC)  $(CFLAGS) $(TEST_FLAGS) --coverage
	./$(TEST_EXEC)
	lcov -t "$(TEST_EXEC)" -o 3d_viewer_gcov.info -c -d .
	genhtml -o report 3d_viewer_gcov.info
	open report/index.html
	google-chrome report/index.html

install: uninstall
	make clean
	make
	mkdir ../build
	mv $(NAME) ../build

uninstall:
	rm -rf ../build

dist: all
	tar -cf $(NAME).tar $(NAME) README.md

dvi:
	open README.md

clang:
	cp ../materials/linters/.clang-format .
	clang-format -n controller/controller.h model/*.h model/*.cc test/test_*.cc test/test_*.h \
					view/3d-viewer/*.cpp view/3d-viewer/*.h
	rm -f .clang-format


clean:
	rm -rf $(TEST_EXEC) a.out $(TEST_EXEC).tar 
	rm -rf $(NAME).tar $(NAME)
	rm -rf ./*.gcno ./*.gcda report *.info *.o
	rm -rf view/3d-viewer/*.o
