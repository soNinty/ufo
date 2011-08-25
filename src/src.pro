######################################################################
# Automatically generated by qmake (2.01a) czw. sie 25 23:48:26 2011
######################################################################

TEMPLATE = app
TARGET =
DEPENDPATH += . importer
INCLUDEPATH += . importer

# Input
HEADERS += citybuilding.h \
           cityitem.h \
           citymap.h \
           gfx.h \
           logger.h \
           mouse.h \
           screen.h \
           shaderprogram.h \
           timer.h \
           utils.h \
           importer/palette.h \
           importer/bitmap.h \
           importer/tabfile.h
SOURCES += citybuilding.cpp \
           cityitem.cpp \
           citymap.cpp \
           gfx.cpp \
           logger.cpp \
           main.cpp \
           mouse.cpp \
           screen.cpp \
           shaderprogram.cpp \
           timer.cpp \
           utils.cpp \
           importer/palette.cpp \
           importer/tabfile.cpp \
           importer/bitmap.cpp

LIBS+= -lSDL -lGL -lGLEW -lSDL_image -lboost_filesystem
