QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
=======
    loginform.cpp \
    main.cpp \
    mainwindow.cpp \
    registerform.cpp

HEADERS += \
    loginform.h \
    mainwindow.h \
    registerform.h

FORMS += \
    loginform.ui \
    mainwindow.ui \
    registerform.ui
>>>>>>> 2a075950ec568790498d733509d86f2976ad24dc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
<<<<<<< HEAD

RESOURCES += \
    resources.qrc
=======
>>>>>>> 2a075950ec568790498d733509d86f2976ad24dc
