QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/bend/dao/daobuckets.cpp \
    src/bend/dao/daologinfo.cpp \
    src/bend/man/manbuckets.cpp \
    src/bend/man/mandb.cpp \
    src/bend/models/mybucket.cpp \
    src/fend/uicomm/breadwidget.cpp \
    src/fend/uicomm/mylineedit.cpp \
    src/fend/uicomm/pagewidget.cpp \
    src/fend/uidelegates/bucketdelegate.cpp \
    src/fend/uilogin/logindialog.cpp \
    src/fend/uimain/bucketswidget.cpp \
    src/fend/uimain/objectswidget.cpp \
    src/fend/uimain/toolbarwidget.cpp \
    src/fend/uimain/uimain.cpp \
    src/heleper/dbsqlite.cpp \
    src/heleper/fileheleper.cpp

HEADERS += \
    src/bend/dao/daobuckets.h \
    src/bend/dao/daologinfo.h \
    src/bend/man/manbuckets.h \
    src/bend/man/mandb.h \
    src/bend/models/dbmodels.h \
    src/bend/models/mybucket.h \
    src/config/config.h \
    src/fend/uicomm/breadwidget.h \
    src/fend/uicomm/mylineedit.h \
    src/fend/uicomm/pagewidget.h \
    src/fend/uidelegates/bucketdelegate.h \
    src/fend/uilogin/logindialog.h \
    src/fend/uimain/bucketswidget.h \
    src/fend/uimain/objectswidget.h \
    src/fend/uimain/toolbarwidget.h \
    src/fend/uimain/uimain.h \
    src/heleper/dbsqlite.h \
    src/heleper/fileheleper.h

FORMS += \
    src/fend/uicomm/breadwidget.ui \
    src/fend/uicomm/pagewidget.ui \
    src/fend/uilogin/logindialog.ui \
    src/fend/uimain/bucketswidget.ui \
    src/fend/uimain/objectswidget.ui \
    src/fend/uimain/toolbarwidget.ui \
    src/fend/uimain/uimain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MyProject.qrc
