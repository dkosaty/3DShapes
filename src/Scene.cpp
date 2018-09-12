#include <QMouseEvent>
#include <QWheelEvent>
#include <QVector2D>

#include "Scene.h"

Scene::Scene(Shape& shape, QWidget* parent) : QOpenGLWidget(parent)
{
    position_ = new QPoint;

    rotate_ = new QVector2D;

    shape_ = &shape;
}

void Scene::initializeGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glEnable(GL_DEPTH_TEST);

    glShadeModel(GL_FLAT);
}

void Scene::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 10.0);
}

void Scene::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    glTranslatef(0.0f, 0.0f, -5.0f);

    glRotatef(rotate_->x(), 1.0f, 0.0f, 0.0f);

    glRotatef(rotate_->y(), 0.0f, 1.0f, 0.0f);

    shape_->paint();
}

void Scene::mousePressEvent(QMouseEvent* event)
{
    *position_ = event->pos();
}

void Scene::mouseMoveEvent(QMouseEvent* event)
{
    float scale = shape_->property("scale").toFloat();

    float x = 180.0f / scale * (event->y() - position_->y()) / height(),
          y = 180.0f / scale * (event->x() - position_->x()) / width();

    *rotate_ += QVector2D(x, y);

    update();

    *position_ = event->pos();
}

void Scene::wheelEvent(QWheelEvent* event)
{
    double scale = shape_->property("scale").toDouble();

    if ((event->delta()) > 0)
        shape_->setProperty("scale", scale * 1.1);
    else if ((event->delta()) < 0)
        shape_->setProperty("scale", scale / 1.1);

    update();
}
