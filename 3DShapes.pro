TEMPLATE = app

QT += opengl

HEADERS += \
    inc/Scene.h \
    inc/shapes/Shape.h \
    inc/shapes/Pyramid.h \
    inc/shapes/Cube.h

SOURCES += \
    src/main.cpp \
    src/Scene.cpp \
    src/shapes/Shape.cpp \
    src/shapes/Pyramid.cpp \
    src/shapes/Cube.cpp

INCLUDEPATH += inc
