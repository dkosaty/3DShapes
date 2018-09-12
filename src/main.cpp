#include <QApplication>

#include "Scene.h"
#include "shapes/Pyramid.h"
#include "shapes/Cube.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Cube cube;
    Pyramid pyramid;

    Scene scene(cube);
//    Scene scene(pyramid);
    scene.resize(640, 480);
    scene.show();

    return app.exec();
}
