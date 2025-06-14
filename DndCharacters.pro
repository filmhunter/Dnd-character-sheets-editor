QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 debug_and_config
DESTDIR = ../_bin
RESOURCES += ../_qrc/dndcs.qrc

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CharacterSheet.cpp \
    DiceThrow.cpp \
    main.cpp \
    DndCharacters.cpp

HEADERS += \
    CharacterData.h \
    CharacterSheet.h \
    DiceThrow.h \
    DndCharacters.h

FORMS += \
    CharacterSheet.ui \
    DiceThrow.ui \
    DndCharacters.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
