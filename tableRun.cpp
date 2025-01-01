#include <iostream>
#include <cmath>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GL/glext.h>
#include "mouseControl.h"
#include "variable.h"
#include "buttons.h"
#include "tableRun.h"
void linetable(void)
{
    linesIterator = lines.begin();
    while (linesIterator != lines.end())
    {
        linesIterator->drawLine();
        linesIterator++;
    }
};
void pointtable(void)
{
    pointsIterator = points.begin();
    while (pointsIterator != points.end())
    {
        pointsIterator->drawPoint();
        pointsIterator++;
    }
};
void circletable(void)
{
    circleIterator = circles.begin();
    while (circleIterator != circles.end())
    {
        circleIterator->drawCircle();
        circleIterator++;
    }
};
void squaretable(void)
{
    squareIterator = squares.begin();
    while (squareIterator != squares.end())
    {
        squareIterator->drawSquare();
        squareIterator++;
    }
};
void triangletable(void)
{
    triangleIterator = triangles.begin();
    while (triangleIterator != triangles.end())
    {
        triangleIterator->drawTriangle();
        triangleIterator++;
    }
};
void ellipsetable(void)
{
    ellipseIterator = ellipses.begin();
    while (ellipseIterator != ellipses.end())
    {
        ellipseIterator->drawEllipse();
        ellipseIterator++;
    }
};
void startable(void)
{
    starIterator = stars.begin();
    while (starIterator != stars.end())
    {
        starIterator->drawStar();
        starIterator++;
    }
};
void penciltable(void)
{
    pencilIterator = pencils.begin();
    while (pencilIterator != pencils.end())
    {
        pencilIterator->drawPencil();
        pencilIterator++;
    }
};
void crayontable(void)
{
    crayonIterator = crayons.begin();
    while (crayonIterator != crayons.end())
    {
        crayonIterator->drawCrayon();
        crayonIterator++;
    }
};
void spraytable(void)
{
    sprayIterator = sprays.begin();
    while (sprayIterator != sprays.end())
    {
        sprayIterator->drawSpray();
        sprayIterator++;
    }
};
void markertable(void)
{
    markerIterator = markers.begin();
    while (markerIterator != markers.end())
    {
        markerIterator->drawMarker();
        markerIterator++;
    }
};
void texttable(void)
{
    for (const auto &textObj : texts)
    {
        textObj.draw();
    }
    currentText.draw();
};
void tablechoise(void)
{
    switch (shape)
    {
    case 0:
        pointtable();
        circletable();
        squaretable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        linetable();
        break;
    case 1:
        linetable();
        pointtable();
        circletable();
        squaretable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        pointtable();
        break;
    case 2:
        pointtable();
        linetable();
        squaretable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        circletable();
        break;
    case 3:
        pointtable();
        linetable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        circletable();
        texttable();
        squaretable();
        break;
    case 4:
        pointtable();
        linetable();
        circletable();
        squaretable();
        ellipsetable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        triangletable();
        break;
    case 5:
        pointtable();
        linetable();
        circletable();
        triangletable();
        squaretable();
        startable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        ellipsetable();
        break;
    case 6:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        squaretable();
        penciltable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        startable();
        break;
    case 7:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        squaretable();
        crayontable();
        spraytable();
        markertable();
        texttable();
        penciltable();
        break;
    case 8:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        squaretable();
        spraytable();
        markertable();
        texttable();
        crayontable();
        break;
    case 9:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        squaretable();
        crayontable();
        spraytable();
        texttable();
        markertable();
        break;
    case 10:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        squaretable();
        crayontable();
        markertable();
        texttable();
        spraytable();
        break;
    case 11:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        squaretable();
        crayontable();
        spraytable();
        texttable();
        markertable();
        break;
    case 13:
        pointtable();
        linetable();
        circletable();
        triangletable();
        ellipsetable();
        startable();
        penciltable();
        squaretable();
        crayontable();
        spraytable();
        markertable();
        texttable();

        break;
    }
};