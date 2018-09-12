#include "shapes/Cube.h"

Cube::Cube() : Shape() { }

void Cube::paint()
{
    float size = float(scale_);

    // front
    glBegin(GL_QUADS);
        glColor3f ( 0.0f,  0.0f,  1.0f);
        glVertex3f(-size,  size,  size);
        glVertex3f(-size, -size,  size);
        glVertex3f( size, -size,  size);
        glVertex3f( size,  size,  size);
    glEnd();

    // back
    glBegin(GL_QUADS);
        glColor3f ( 0.0f,  1.0f,  0.0f);
        glVertex3f( size, -size, -size);
        glVertex3f( size,  size, -size);
        glVertex3f(-size,  size, -size);
        glVertex3f(-size, -size, -size);
    glEnd();

    // left
    glBegin(GL_QUADS);
        glColor3f ( 0.0f,  1.0f,  1.0f);
        glVertex3f(-size, -size,  size);
        glVertex3f(-size,  size,  size);
        glVertex3f(-size,  size, -size);
        glVertex3f(-size, -size, -size);
    glEnd();

    // right
    glBegin(GL_QUADS);
        glColor3f ( 1.0f,  0.0f,  0.0f);
        glVertex3f( size, -size, -size);
        glVertex3f( size,  size, -size);
        glVertex3f( size,  size,  size);
        glVertex3f( size, -size,  size);
    glEnd();

    // bottom
    glBegin(GL_QUADS);
        glColor3f ( 1.0f,  0.0f,  1.0f);
        glVertex3f( size, -size, -size);
        glVertex3f( size, -size,  size);
        glVertex3f(-size, -size,  size);
        glVertex3f(-size, -size, -size);
    glEnd();

    // top
    glBegin(GL_QUADS);
        glColor3f ( 1.0f,  1.0f,  0.0f);
        glVertex3f( size,  size,  size);
        glVertex3f( size,  size, -size);
        glVertex3f(-size,  size, -size);
        glVertex3f(-size,  size,  size);
    glEnd();
}
