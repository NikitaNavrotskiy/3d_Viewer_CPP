STATUS_OK="File updated successfully"
STATUS_FAIL="Something has gone wrong"
HELP="Mini tool for changing dots to commas (for doubles in different systems)\n
	Usage: dots2commas.sh [filename]"

if [ $# != 1 ]
then
	echo "$HELP"
	exit 1
fi


sed -i 's/\./\,/g' $1

if [ $? = 0 ]
then 
	echo "$STATUS_OK"
	exit 0
else
	echo "$STATUS_FAIL"
	exit 1
fi
