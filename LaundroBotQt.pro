#-------------------------------------------------
#
# Project created by QtCreator 2017-10-07T10:36:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LaundroBotQt
TEMPLATE = app

INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_features2d -lopencv_ml -lopencv_flann -lopencv_imgproc -lopencv_photo

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    segmentation.cpp

HEADERS  += mainwindow.h \
    segmentation.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -P
#QMAKE_CXXFLAGS_RELEASE += -P
#QMAKE_CXXFLAGS_DEBUG += -E
#QMAKE_CXXFLAGS += -E
