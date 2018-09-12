#ifndef SHAPE_H
#define SHAPE_H

#include <QOpenGLFunctions>

class Shape : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double scale READ scale WRITE setScale)

public:
    explicit Shape(double scale = 1.0, QObject* parent = nullptr);

    virtual void paint() = 0;

protected:
    double scale();

    void setScale(double scale);

    double scale_;
};

#endif // SHAPE_H
