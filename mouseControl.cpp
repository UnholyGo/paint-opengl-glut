#include <GL/freeglut.h>
#include <iostream>
#include "mouseControl.h"
#include "variable.h"
Pencil pencil(lastClickedPoint, currentPoint);
Crayon crayon(lastClickedPoint, currentPoint);
Marker marker(lastClickedPoint, currentPoint);
Spray spray(lastClickedPoint, currentPoint);
Line line(lastClickedPoint, currentPoint);
void mouseControl(int button, int state, int x, int y)
{
    int viewportY = height - y;
    Circle circle(lastClickedPoint, currentPoint);
    Square square(lastClickedPoint, currentPoint);
    Triangle triangle(lastClickedPoint, currentPoint);
    Ellipse ellipse(lastClickedPoint, currentPoint);
    Star star(lastClickedPoint, currentPoint);
    Line line(lastClickedPoint, currentPoint);
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 10 && viewportY >= height - 50)
    {
        shape = 0;
        isTyping = false;
        selectedButton = 0;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 60 && viewportY >= height - 100)
    {
        shape = 2;
        selectedButton = 2;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 110 && viewportY >= height - 150)
    {
        shape = 3;
        selectedButton = 3;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 160 && viewportY >= height - 200)
    {
        shape = 4;
        selectedButton = 4;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 210 && viewportY >= height - 250)
    {
        shape = 5;
        selectedButton = 5;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 260 && viewportY >= height - 300)
    {
        shape = 6;
        selectedButton = 6;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 310 && viewportY >= height - 350)
    {
        shape = 7;
        selectedButton = 7;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 360 && viewportY >= height - 400)
    {
        shape = 8;
        selectedButton = 8;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 410 && viewportY >= height - 450)
    {
        shape = 9;
        selectedButton = 9;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 460 && viewportY >= height - 500)
    {
        shape = 10;
        selectedButton = 10;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 510 && viewportY >= height - 550)
    {
        shape = 11;
        selectedButton = 11;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 560 && viewportY >= height - 600)
    {
        shape = 12;
        selectedButton = 12;
        isTyping = false;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 610 && viewportY >= height - 650)
    {
        selectedButton = 13;
        shape = 13;
        isTyping = true;
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 10 && x <= 110 && viewportY <= height - 660 && viewportY >= height - 700)
    {
        selectedButton = 14;
        isTyping = false;
        save = true;
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 290 && x <= 480 && viewportY <= height - 735 && viewportY >= height - 770)
    {
        selectedButton = 15;
        isTyping = false;
        backgroundR = R;
        backgroundG = G;
        backgroundB = B;
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 0 && x <= 200 && viewportY <= height - 700 && viewportY >= height - 780)
    {
        for (int i = 0; i < 3; i++)
        {
            float circleX = circlePositions[i];
            float circleY = height - (705 + i * 25);
            float dist = sqrt(pow(x - circleX, 2) + pow(viewportY - circleY, 2));
            if (dist <= 10.0)
            {
                dragging[i] = true;
                break;
            }
        }
        return;
    }
    if (button == GLUT_LEFT_BUTTON && selectedButton > 7 && selectedButton <= 11 && state == GLUT_DOWN && x >= width - 110 && x <= width - 10 && viewportY <= height - 10 && viewportY >= height - 40)
    {
        selectedButtonsize = 1;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && selectedButton > 7 && selectedButton <= 11 && state == GLUT_DOWN && x >= width - 110 && x <= width - 10 && viewportY <= height - 50 && viewportY >= height - 80)
    {
        selectedButtonsize = 2;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    if (button == GLUT_LEFT_BUTTON && selectedButton > 7 && selectedButton <= 11 && state == GLUT_DOWN && x >= width - 110 && x <= width - 10 && viewportY <= height - 90 && viewportY >= height - 120)
    {
        selectedButtonsize = 3;
        lastClickedPoint.setCoords(0, 0);
        currentPoint.setCoords(0, 0);
        glutPostRedisplay();
        return;
    }
    else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 130 && x <= width - 130 && viewportY <= height - 10 && viewportY >= height - 660)
    {
        lastClickedPoint.setCoords(x, height - y);
        currentPoint = Point(x, height - y);
        switch (shape)
        {
        case 0:
            line.setColor(R, G, B);
            lines.push_back(line);
            break;
        case 1:
            points.push_back(currentPoint);
            break;
        case 2:
            circle.setColor(R, G, B);
            circles.push_back(circle);
            break;
        case 3:
            square.setColor(R, G, B);
            squares.push_back(square);
            break;
        case 4:
            triangle.setColor(R, G, B);
            triangles.push_back(triangle);
            break;
        case 5:
            ellipse.setColor(R, G, B);
            ellipses.push_back(ellipse);
            break;
        case 6:
            star.setColor(R, G, B);
            stars.push_back(star);
            break;
        case 7:
            pencil.setColor(R, G, B);
            pencils.push_back(pencil);
            break;
        case 8:
            crayon.setColor(R, G, B);
            crayon.startDrawing(x, viewportY);
            break;
        case 9:
            marker.setColor(R, G, B);
            marker.startDrawing(x, viewportY);
            break;
        case 10:
            spray.setColor(R, G, B);
            spray.startDrawing(x, viewportY);
            break;
        case 11:
            marker.setColor(backgroundR, backgroundG, backgroundB);
            marker.startDrawing(x, viewportY);
            break;
        case 13:
            currentText.text = "";
            currentText.x = x;
            currentText.y = viewportY;
            currentText.r = R;
            currentText.g = G;
            currentText.b = B;
            texts.push_back(currentText);
            glutPostRedisplay();
            break;
        }
        switch (selectedButtonsize)
        {
        case 1:
            spray.setThickness(5.0f);
            marker.setThickness(12.0f);
            crayon.setThickness(8.0f);
            break;
        case 2:
            spray.setThickness(10.0f);
            marker.setThickness(20.0f);
            crayon.setThickness(15.0f);
            break;
        case 3:
            spray.setThickness(15.0f);
            marker.setThickness(40.0f);
            crayon.setThickness(25.0f);
            break;
        }
        glutPostRedisplay();
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
    {
        for (int i = 0; i < 3; i++)
        {
            dragging[i] = false;
        }
        if (x >= 130 && x <= width - 130 && viewportY <= height - 10 && viewportY >= height - 66)
        {
            switch (shape)
            {
            case 0:
                line.setColor(R, G, B);
                lines.push_back(line);
                break;
            case 1:
                points.push_back(currentPoint);
                break;
            case 2:
                circle.setColor(R, G, B);
                circles.push_back(circle);
                break;
            case 3:
                square.setColor(R, G, B);
                squares.push_back(square);
                break;
            case 4:
                triangle.setColor(R, G, B);
                triangles.push_back(triangle);
                break;
            case 5:
                ellipse.setColor(R, G, B);
                ellipses.push_back(ellipse);
                break;
            case 6:
                star.setColor(R, G, B);
                stars.push_back(star);
                break;
            case 7:
                pencil.setColor(R, G, B);
                pencils.push_back(pencil);
                break;
            case 8:
                crayon.setColor(R, G, B);
                crayon.stopDrawing();
                break;
            case 9:
                marker.setColor(R, G, B);
                marker.stopDrawing();
                break;
            case 10:
                spray.setColor(R, G, B);
                spray.stopDrawing();
                break;
            case 11:
                marker.setColor(backgroundR, backgroundG, backgroundB);
                marker.startDrawing(x, viewportY);
                break;
            case 13:
                currentText.text = "";
                currentText.x = x;
                currentText.y = viewportY;
                currentText.r = R;
                currentText.g = G;
                currentText.b = B;
                texts.push_back(currentText);
                glutPostRedisplay();
                break;
            }
        }
        switch (selectedButtonsize)
        {
        case 1:
            spray.setThickness(5.0f);
            marker.setThickness(12.0f);
            crayon.setThickness(8.0f);
            break;
        case 2:
            spray.setThickness(10.0f);
            marker.setThickness(20.0f);
            crayon.setThickness(15.0f);
            break;
        case 3:
            spray.setThickness(15.0f);
            marker.setThickness(40.0f);
            crayon.setThickness(25.0f);
            break;
        }
        glutPostRedisplay();
    }
}
void mouseMotion(int x, int y)
{
    int viewportY = height - y;
    for (int i = 0; i < 3; i++)
    {
        if (dragging[i])
        {
            if (x >= 0 && x <= 200)
            {
                circlePositions[i] = x;
                float ratio = (x - 0) / 200.0f;
                if (i == 0)
                    R = ratio;
                if (i == 1)
                    G = ratio;
                if (i == 2)
                    B = ratio;
            }
            glutPostRedisplay();
        }
    }
    if (x >= 130 && x <= width - 130 && viewportY <= height - 10 && viewportY >= height - 660)
    {
        currentPoint.setCoords(x, height - y);
        if (shape == 7)
        {
            Line line(lastClickedPoint, currentPoint);
            line.setColor(R, G, B);
            lines.push_back(line);
            lastClickedPoint = currentPoint;
        }
        if (shape == 8)
        {
            crayon.continueDrawing(x, height - y);
            crayons.push_back(crayon);
        }
        if (shape == 9 || shape == 11)
        {
            marker.continueDrawing(x, height - y);
            markers.push_back(marker);
        }
        if (shape == 10)
        {
            spray.continueDrawing(x, height - y);
            sprays.push_back(spray);
        }
        else
        {
            Line line(lastClickedPoint, currentPoint);
        }
    }
    glutPostRedisplay();
}