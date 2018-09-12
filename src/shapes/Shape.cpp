#include "shapes/Shape.h"

Shape::Shape(double scale, QObject* parent) : QObject(parent), scale_(scale) { }

double Shape::scale()
{
    return scale_;
}

void Shape::setScale(double scale)
{
    scale_ = scale;
}
