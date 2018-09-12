#ifndef SCENE_H
#define SCENE_H

#include <QOpenGLWidget>

#include "shapes/Shape.h"

class Scene : public QOpenGLWidget
{
public:
    explicit Scene(Shape& shape, QWidget* parent = nullptr);

protected:
    virtual void initializeGL();
    virtual void resizeGL(int width, int height);
    virtual void paintGL();

    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);
    virtual void wheelEvent(QWheelEvent* event);

private:
    QPoint* position_;

    QVector2D* rotate_;

    Shape* shape_;
};

#endif // SCENE_H
