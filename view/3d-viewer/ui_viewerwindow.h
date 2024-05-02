/********************************************************************************
** Form generated from reading UI file 'viewerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERWINDOW_H
#define UI_VIEWERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ViewerWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *button_load;
    QSlider *slider_rotate_x;
    QSlider *slider_rotate_z;
    QSlider *slider_rotate_y;
    QTabWidget *tab_options;
    QWidget *tab_vertex;
    QPushButton *button_vertex_color;
    QLabel *label_14;
    QSlider *slider_size;
    QFrame *line_2;
    QLabel *label_15;
    QRadioButton *type_none;
    QRadioButton *type_circle;
    QRadioButton *type_square;
    QWidget *tab_edge;
    QPushButton *button_edge_color;
    QSlider *slider_thickness;
    QLabel *label_12;
    QRadioButton *type_solid;
    QRadioButton *type_dotted;
    QLabel *label_13;
    QFrame *line;
    QWidget *bg;
    QPushButton *button_bg_color;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QPushButton *button_save;
    QPushButton *button_gif;
    GLWidget *view;
    QLabel *label_file;
    QFrame *line_8;
    QFrame *line_9;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_vertexes_amount;
    QLabel *label_edges_amount;
    QFrame *line_10;
    QLabel *label_19;
    QFrame *line_11;
    QRadioButton *proj_type_parallel;
    QRadioButton *proj_type_central;
    QLabel *label_note;
    QPushButton *move_x_neg;
    QPushButton *move_x_pos;
    QPushButton *move_y_neg;
    QPushButton *move_y_pos;
    QPushButton *move_z_neg;
    QPushButton *move_z_pos;
    QPushButton *scale_pos;
    QPushButton *scale_neg;
    QPushButton *button_save_bmp;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *ViewerWindow)
    {
        if (ViewerWindow->objectName().isEmpty())
            ViewerWindow->setObjectName(QString::fromUtf8("ViewerWindow"));
        ViewerWindow->resize(885, 605);
        ViewerWindow->setMinimumSize(QSize(885, 605));
        ViewerWindow->setMaximumSize(QSize(885, 605));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(153, 193, 241, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(204, 224, 248, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(76, 96, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(102, 129, 161, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        ViewerWindow->setPalette(palette);
        ViewerWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(ViewerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(680, 405, 16, 17));
        QFont font;
        font.setPointSize(12);
        label_10->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(680, 570, 16, 17));
        label_9->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(680, 430, 16, 17));
        label_8->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(680, 455, 16, 17));
        label_7->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(680, 545, 16, 17));
        label_6->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(680, 520, 16, 17));
        label_5->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(645, 495, 231, 20));
        QFont font1;
        font1.setPointSize(13);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 380, 241, 20));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(645, 315, 231, 20));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        button_load = new QPushButton(centralwidget);
        button_load->setObjectName(QString::fromUtf8("button_load"));
        button_load->setGeometry(QRect(705, 0, 46, 41));
        slider_rotate_x = new QSlider(centralwidget);
        slider_rotate_x->setObjectName(QString::fromUtf8("slider_rotate_x"));
        slider_rotate_x->setGeometry(QRect(700, 405, 121, 20));
        QPalette palette1;
        QBrush brush8(QColor(28, 113, 216, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        QBrush brush9(QColor(145, 145, 145, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush9);
        slider_rotate_x->setPalette(palette1);
        slider_rotate_x->setOrientation(Qt::Horizontal);
        slider_rotate_z = new QSlider(centralwidget);
        slider_rotate_z->setObjectName(QString::fromUtf8("slider_rotate_z"));
        slider_rotate_z->setGeometry(QRect(700, 455, 121, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush9);
        slider_rotate_z->setPalette(palette2);
        slider_rotate_z->setOrientation(Qt::Horizontal);
        slider_rotate_y = new QSlider(centralwidget);
        slider_rotate_y->setObjectName(QString::fromUtf8("slider_rotate_y"));
        slider_rotate_y->setGeometry(QRect(700, 430, 121, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush9);
        slider_rotate_y->setPalette(palette3);
        slider_rotate_y->setOrientation(Qt::Horizontal);
        tab_options = new QTabWidget(centralwidget);
        tab_options->setObjectName(QString::fromUtf8("tab_options"));
        tab_options->setGeometry(QRect(640, 90, 235, 131));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_options->sizePolicy().hasHeightForWidth());
        tab_options->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        tab_options->setPalette(palette4);
        tab_options->setTabsClosable(false);
        tab_vertex = new QWidget();
        tab_vertex->setObjectName(QString::fromUtf8("tab_vertex"));
        button_vertex_color = new QPushButton(tab_vertex);
        button_vertex_color->setObjectName(QString::fromUtf8("button_vertex_color"));
        button_vertex_color->setGeometry(QRect(5, 5, 61, 25));
        label_14 = new QLabel(tab_vertex);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(80, 10, 31, 17));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_14->setFont(font2);
        slider_size = new QSlider(tab_vertex);
        slider_size->setObjectName(QString::fromUtf8("slider_size"));
        slider_size->setGeometry(QRect(130, 10, 91, 20));
        slider_size->setOrientation(Qt::Horizontal);
        line_2 = new QFrame(tab_vertex);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 28, 230, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(tab_vertex);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(90, 45, 40, 15));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_15->setFont(font3);
        type_none = new QRadioButton(tab_vertex);
        type_none->setObjectName(QString::fromUtf8("type_none"));
        type_none->setGeometry(QRect(10, 70, 61, 23));
        type_none->setChecked(false);
        type_circle = new QRadioButton(tab_vertex);
        type_circle->setObjectName(QString::fromUtf8("type_circle"));
        type_circle->setGeometry(QRect(80, 70, 71, 23));
        type_circle->setChecked(false);
        type_square = new QRadioButton(tab_vertex);
        type_square->setObjectName(QString::fromUtf8("type_square"));
        type_square->setGeometry(QRect(150, 70, 71, 23));
        type_square->setChecked(false);
        tab_options->addTab(tab_vertex, QString());
        tab_edge = new QWidget();
        tab_edge->setObjectName(QString::fromUtf8("tab_edge"));
        button_edge_color = new QPushButton(tab_edge);
        button_edge_color->setObjectName(QString::fromUtf8("button_edge_color"));
        button_edge_color->setGeometry(QRect(165, 60, 61, 25));
        slider_thickness = new QSlider(tab_edge);
        slider_thickness->setObjectName(QString::fromUtf8("slider_thickness"));
        slider_thickness->setGeometry(QRect(130, 10, 91, 20));
        slider_thickness->setOrientation(Qt::Horizontal);
        label_12 = new QLabel(tab_edge);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 10, 71, 17));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        label_12->setFont(font4);
        type_solid = new QRadioButton(tab_edge);
        type_solid->setObjectName(QString::fromUtf8("type_solid"));
        type_solid->setGeometry(QRect(5, 70, 61, 23));
        type_solid->setChecked(false);
        type_dotted = new QRadioButton(tab_edge);
        type_dotted->setObjectName(QString::fromUtf8("type_dotted"));
        type_dotted->setGeometry(QRect(65, 70, 71, 23));
        type_dotted->setChecked(false);
        label_13 = new QLabel(tab_edge);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 45, 40, 20));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_13->setFont(font5);
        line = new QFrame(tab_edge);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 28, 230, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line->setPalette(palette5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tab_options->addTab(tab_edge, QString());
        bg = new QWidget();
        bg->setObjectName(QString::fromUtf8("bg"));
        button_bg_color = new QPushButton(bg);
        button_bg_color->setObjectName(QString::fromUtf8("button_bg_color"));
        button_bg_color->setGeometry(QRect(165, 60, 61, 25));
        button_bg_color->setBaseSize(QSize(3, 0));
        tab_options->addTab(bg, QString());
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(631, 91, 20, 507));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_3->setPalette(palette6);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(640, 360, 235, 16));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_4->setPalette(palette7);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(640, 475, 234, 16));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_5->setPalette(palette8);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(640, 590, 234, 16));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_6->setPalette(palette9);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(865, 91, 20, 507));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_7->setPalette(palette10);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        button_save = new QPushButton(centralwidget);
        button_save->setObjectName(QString::fromUtf8("button_save"));
        button_save->setGeometry(QRect(750, 0, 46, 41));
        button_gif = new QPushButton(centralwidget);
        button_gif->setObjectName(QString::fromUtf8("button_gif"));
        button_gif->setGeometry(QRect(840, 0, 46, 41));
        view = new GLWidget(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(10, 77, 611, 521));
        label_file = new QLabel(centralwidget);
        label_file->setObjectName(QString::fromUtf8("label_file"));
        label_file->setGeometry(QRect(59, 10, 620, 21));
        label_file->setMaximumSize(QSize(620, 16777215));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(false);
        font6.setWeight(50);
        label_file->setFont(font6);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(640, 213, 235, 16));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_8->setPalette(palette11);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(640, 83, 235, 16));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_9->setPalette(palette12);
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 10, 67, 21));
        label_16->setFont(font4);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(40, 50, 71, 21));
        label_17->setFont(font4);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(360, 50, 51, 21));
        label_18->setFont(font4);
        label_vertexes_amount = new QLabel(centralwidget);
        label_vertexes_amount->setObjectName(QString::fromUtf8("label_vertexes_amount"));
        label_vertexes_amount->setGeometry(QRect(156, 50, 141, 21));
        label_vertexes_amount->setFont(font);
        label_edges_amount = new QLabel(centralwidget);
        label_edges_amount->setObjectName(QString::fromUtf8("label_edges_amount"));
        label_edges_amount->setGeometry(QRect(466, 50, 151, 21));
        label_edges_amount->setFont(font);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(0, 32, 706, 16));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_10->setPalette(palette13);
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(650, 230, 221, 20));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(640, 295, 235, 16));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_11->setPalette(palette14);
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        proj_type_parallel = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(ViewerWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(proj_type_parallel);
        proj_type_parallel->setObjectName(QString::fromUtf8("proj_type_parallel"));
        proj_type_parallel->setGeometry(QRect(660, 260, 81, 23));
        proj_type_central = new QRadioButton(centralwidget);
        buttonGroup->addButton(proj_type_central);
        proj_type_central->setObjectName(QString::fromUtf8("proj_type_central"));
        proj_type_central->setGeometry(QRect(790, 260, 71, 23));
        label_note = new QLabel(centralwidget);
        label_note->setObjectName(QString::fromUtf8("label_note"));
        label_note->setGeometry(QRect(656, 50, 211, 21));
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        font7.setWeight(75);
        label_note->setFont(font7);
        label_note->setAlignment(Qt::AlignCenter);
        move_x_neg = new QPushButton(centralwidget);
        move_x_neg->setObjectName(QString::fromUtf8("move_x_neg"));
        move_x_neg->setGeometry(QRect(705, 520, 51, 16));
        move_x_pos = new QPushButton(centralwidget);
        move_x_pos->setObjectName(QString::fromUtf8("move_x_pos"));
        move_x_pos->setGeometry(QRect(765, 520, 51, 16));
        move_y_neg = new QPushButton(centralwidget);
        move_y_neg->setObjectName(QString::fromUtf8("move_y_neg"));
        move_y_neg->setGeometry(QRect(705, 545, 51, 16));
        move_y_pos = new QPushButton(centralwidget);
        move_y_pos->setObjectName(QString::fromUtf8("move_y_pos"));
        move_y_pos->setGeometry(QRect(765, 545, 51, 16));
        move_z_neg = new QPushButton(centralwidget);
        move_z_neg->setObjectName(QString::fromUtf8("move_z_neg"));
        move_z_neg->setGeometry(QRect(705, 570, 51, 16));
        move_z_pos = new QPushButton(centralwidget);
        move_z_pos->setObjectName(QString::fromUtf8("move_z_pos"));
        move_z_pos->setGeometry(QRect(765, 570, 51, 16));
        scale_pos = new QPushButton(centralwidget);
        scale_pos->setObjectName(QString::fromUtf8("scale_pos"));
        scale_pos->setGeometry(QRect(760, 340, 51, 16));
        scale_neg = new QPushButton(centralwidget);
        scale_neg->setObjectName(QString::fromUtf8("scale_neg"));
        scale_neg->setGeometry(QRect(700, 340, 51, 16));
        button_save_bmp = new QPushButton(centralwidget);
        button_save_bmp->setObjectName(QString::fromUtf8("button_save_bmp"));
        button_save_bmp->setGeometry(QRect(795, 0, 46, 41));
        ViewerWindow->setCentralWidget(centralwidget);

        retranslateUi(ViewerWindow);

        tab_options->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ViewerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ViewerWindow)
    {
        ViewerWindow->setWindowTitle(QCoreApplication::translate("ViewerWindow", "3D-Viewer", nullptr));
        label_10->setText(QCoreApplication::translate("ViewerWindow", "x", nullptr));
        label_9->setText(QCoreApplication::translate("ViewerWindow", "z", nullptr));
        label_8->setText(QCoreApplication::translate("ViewerWindow", "y", nullptr));
        label_7->setText(QCoreApplication::translate("ViewerWindow", "z", nullptr));
        label_6->setText(QCoreApplication::translate("ViewerWindow", "y", nullptr));
        label_5->setText(QCoreApplication::translate("ViewerWindow", "x", nullptr));
        label_3->setText(QCoreApplication::translate("ViewerWindow", "Move", nullptr));
        label_2->setText(QCoreApplication::translate("ViewerWindow", "Rotate", nullptr));
        label->setText(QCoreApplication::translate("ViewerWindow", "Scale", nullptr));
        button_load->setText(QCoreApplication::translate("ViewerWindow", "Load", nullptr));
        button_vertex_color->setText(QCoreApplication::translate("ViewerWindow", "Color", nullptr));
        label_14->setText(QCoreApplication::translate("ViewerWindow", "Size", nullptr));
        label_15->setText(QCoreApplication::translate("ViewerWindow", "Type", nullptr));
        type_none->setText(QCoreApplication::translate("ViewerWindow", "None", nullptr));
        type_circle->setText(QCoreApplication::translate("ViewerWindow", "Circle", nullptr));
        type_square->setText(QCoreApplication::translate("ViewerWindow", "Square", nullptr));
        tab_options->setTabText(tab_options->indexOf(tab_vertex), QCoreApplication::translate("ViewerWindow", "Vertex", nullptr));
        button_edge_color->setText(QCoreApplication::translate("ViewerWindow", "Color", nullptr));
        label_12->setText(QCoreApplication::translate("ViewerWindow", "Thickness", nullptr));
        type_solid->setText(QCoreApplication::translate("ViewerWindow", "Solid", nullptr));
        type_dotted->setText(QCoreApplication::translate("ViewerWindow", "Dotted", nullptr));
        label_13->setText(QCoreApplication::translate("ViewerWindow", "Type", nullptr));
        tab_options->setTabText(tab_options->indexOf(tab_edge), QCoreApplication::translate("ViewerWindow", "Edge", nullptr));
        button_bg_color->setText(QCoreApplication::translate("ViewerWindow", "Color", nullptr));
        tab_options->setTabText(tab_options->indexOf(bg), QCoreApplication::translate("ViewerWindow", "Background", nullptr));
        button_save->setText(QCoreApplication::translate("ViewerWindow", "Jpeg", nullptr));
        button_gif->setText(QCoreApplication::translate("ViewerWindow", "Gif", nullptr));
        label_file->setText(QString());
        label_16->setText(QCoreApplication::translate("ViewerWindow", "File:", nullptr));
        label_17->setText(QCoreApplication::translate("ViewerWindow", "Vertexes:", nullptr));
        label_18->setText(QCoreApplication::translate("ViewerWindow", "Edges:", nullptr));
        label_vertexes_amount->setText(QCoreApplication::translate("ViewerWindow", "0", nullptr));
        label_edges_amount->setText(QCoreApplication::translate("ViewerWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("ViewerWindow", "Projection type", nullptr));
        proj_type_parallel->setText(QCoreApplication::translate("ViewerWindow", "Parallel", nullptr));
        proj_type_central->setText(QCoreApplication::translate("ViewerWindow", "Central", nullptr));
        label_note->setText(QString());
        move_x_neg->setText(QCoreApplication::translate("ViewerWindow", "<", nullptr));
        move_x_pos->setText(QCoreApplication::translate("ViewerWindow", ">", nullptr));
        move_y_neg->setText(QCoreApplication::translate("ViewerWindow", "<", nullptr));
        move_y_pos->setText(QCoreApplication::translate("ViewerWindow", ">", nullptr));
        move_z_neg->setText(QCoreApplication::translate("ViewerWindow", "<", nullptr));
        move_z_pos->setText(QCoreApplication::translate("ViewerWindow", ">", nullptr));
        scale_pos->setText(QCoreApplication::translate("ViewerWindow", "+", nullptr));
        scale_neg->setText(QCoreApplication::translate("ViewerWindow", "-", nullptr));
        button_save_bmp->setText(QCoreApplication::translate("ViewerWindow", "Bmp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerWindow: public Ui_ViewerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERWINDOW_H
