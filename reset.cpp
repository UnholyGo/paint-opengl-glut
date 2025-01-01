#include "variable.h"
#include "reset.h"



void resetScreen(void)
{

    sprays.clear();
    sprays.shrink_to_fit();
    lines.clear();
    lines.shrink_to_fit();
    circles.clear();
    circles.shrink_to_fit();
    squares.clear();
    squares.shrink_to_fit();
    triangles.clear();
    triangles.shrink_to_fit();
    ellipses.clear();
    ellipses.shrink_to_fit();
    stars.clear();
    stars.shrink_to_fit();
    pencils.clear();
    pencils.shrink_to_fit();
    crayons.clear();
    crayons.shrink_to_fit();
    markers.clear();
    markers.shrink_to_fit();
    sprays.clear();
    sprays.shrink_to_fit();
    texts.clear();
    texts.shrink_to_fit();
    glutSwapBuffers();
};