#include "shapes/Pyramid.h"

Pyramid::Pyramid() : Shape() { }

void Pyramid::paint()
{
    float size = float(scale_);

    glBegin(GL_TRIANGLE_FAN);
        glColor3f ( 0.0f,  0.0f,  1.0f);
        glVertex3f( 0.0f,  size,  0.0f);
        glVertex3f(-size, -size,  size);
        glVertex3f( size, -size,  size);

        glColor3f ( 0.0f,  1.0f,  0.0f);
        glVertex3f( size, -size, -size);

        glColor3f ( 0.0f,  1.0f,  1.0f);
        glVertex3f(-size, -size, -size);

        glColor3f ( 1.0f,  0.0f,  0.0f);
        glVertex3f(-size, -size,  size);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f ( 1.0f,  0.0f,  1.0f);
        glVertex3f(-size, -size,  size);
        glVertex3f( size, -size,  size);
        glVertex3f( size, -size, -size);
        glVertex3f(-size, -size, -size);
    glEnd();
}
