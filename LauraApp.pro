QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS


TEMPLATE = subdirs



SUBDIRS = \
          #LauraCore      \
          LauraUtils     \
          LauraGeometry  \
          LauraGUI       \
          LauraMaterials
          #LauraStudy

# build must be last:
CONFIG += ordered
SUBDIRS += AppMi





