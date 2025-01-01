#include <cstdlib>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GL/glext.h>
#include "mouseControl.h"
#include "variable.h"
#include "buttons.h"
#include "tableRun.h"
#include "reset.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#pragma comment(lib, "glew32.lib")
using namespace std;
int width, height;
float R, G, B;
void savePartialScreenshot(int x1, int y1, int width, int height, const char *filename)
{
    unsigned char *pixels = new unsigned char[3 * width * height];
    glReadPixels(x1, y1, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
    unsigned char *flippedPixels = new unsigned char[3 * width * height];
    for (int i = 0; i < height; i++)
    {
        memcpy(flippedPixels + i * width * 3, pixels + (height - i - 1) * width * 3, width * 3);
    }
    stbi_write_png(filename, width, height, 3, flippedPixels, width * 3);
    delete[] pixels;
    delete[] flippedPixels;
    std::cout << "Partial screenshot saved as " << filename << std::endl;
}
void keyboard(unsigned char key, int x, int y)
{
    if (isTyping)
    {
        if (key == 8 && !currentText.text.empty())
        {
            currentText.text.pop_back();
        }
        else if (key == 13)
        {
            texts.push_back(currentText);
            currentText.text = "";
        }
        else if (key >= 32 && key <= 126)
        {
            currentText.text += key;
        }
        glutPostRedisplay();
    }
}
void drawScene(void)
{
    glClearColor(0.75, 0.75, 0.85, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    circleButton();
    squareButton();
    lineButton();
    triangleButton();
    ellipseButton();
    starButton();
    pencilButton();
    crayonButton();
    sprayButton();
    markerButton();
    eraserButton();
    resetButton();
    saveButton();
    textButton();
    SetToBackgroundColor();
    drawbord();
    if (selectedButton > 7 && selectedButton <= 11)
    {
        NarrowButton();
        NormalButton();
        BoldButton();
    };
    if (selectedButton == 12)
    {
        resetScreen();
    };
    drawRectangle(R, G, B);
    drawButtonslide(0, height - 715, 200, height - 705, 1.0, 0.0, 0.0);
    drawButtonslide(0, height - 740, 200, height - 730, 0.0, 1.0, .0);
    drawButtonslide(0, height - 765, 200, height - 755, 0.0, 0.0, 1.0);
    for (int i = 0; i < 3; i++)
    {
        drawCircle(circlePositions[i], height - (710 + i * 25), 10.0);
    }
    switch (shape)
    {
    case 0:
    {
        Line currentLine(lastClickedPoint, currentPoint);
        currentLine.setColor(R, G, B);
        currentLine.drawLine();
        break;
    }
    case 2:
    {
        Circle currentCircle(lastClickedPoint, currentPoint);
        currentCircle.setColor(R, G, B);
        currentCircle.drawCircle();
        break;
    }
    case 3:
    {
        Square currentSquare(lastClickedPoint, currentPoint);
        currentSquare.setColor(R, G, B);
        currentSquare.drawSquare();
        break;
    }
    case 4:
    {
        Triangle currenttriangle(lastClickedPoint, currentPoint);
        currenttriangle.setColor(R, G, B);
        currenttriangle.drawTriangle();
        break;
    }
    case 5:
    {
        Ellipse currenttellips(lastClickedPoint, currentPoint);
        currenttellips.setColor(R, G, B);
        currenttellips.drawEllipse();
        break;
    }
    case 6:
    {
        Star currenttstar(lastClickedPoint, currentPoint);
        currenttstar.setColor(R, G, B);
        currenttstar.drawStar();
        break;
    }
    case 7:
    {
        Pencil currenttpencil(lastClickedPoint, currentPoint);
        currenttpencil.setColor(R, G, B);
        currenttpencil.drawPencil();
        break;
    }
    case 8:
    {
        Crayon currenttcrayon(lastClickedPoint, currentPoint);
        currenttcrayon.setColor(R, G, B);
        currenttcrayon.drawCrayon();
        break;
    }
    case 9:
    {
        Marker currenttmarker(lastClickedPoint, currentPoint);
        currenttmarker.setColor(R, G, B);
        currenttmarker.drawMarker();
        break;
    }
    case 10:
    {
        Spray currenttspray(lastClickedPoint, currentPoint);
        currenttspray.setColor(R, G, B);
        currenttspray.drawSpray();
        break;
    }
    }
     tablechoise();
    if (save)
    {
        if (markers.empty() &&
            sprays.empty() &&
            crayons.empty() &&
            pencils.empty() &&
            stars.empty() &&
            ellipses.empty() &&
            squares.empty() &&
            circles.empty() &&
            lines.empty() &&
            texts.empty())
        {
            save = false;
        }
        else
        {
            savePartialScreenshot(130, height - 670, width - 260, height - 110, "paint.png");
            save = false;
        }
    };
    glFlush();
}
void setup(void)
{
    glClearColor(0.8, 0.8, 0.8, 0.0);
    glColor3f(0.8, 0.8, 0.8);
}
void resize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, w, 0.0, h, -1.0, 1.0);
    width = w;
    height = h;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
};
void welcome(void)
{
    cout << "Welcome to Pint Brash App" << endl;
}
int main(int argc, char **argv)
{
    welcome();
    glutInit(&argc, argv);
    glutInitContextVersion(4, 3);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(800, 700);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("PaintApp-karasfi");
    glutDisplayFunc(drawScene);
    glutReshapeFunc(resize);
    glutMouseFunc(mouseControl);
    glutKeyboardFunc(keyboard);
    glutMotionFunc(mouseMotion);
    glewInit();
    setup();
    glutMainLoop();
}