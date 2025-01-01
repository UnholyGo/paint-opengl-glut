#include <GL/freeglut.h>
#include <iostream>
#include "buttons.h"
#include "variable.h"
void lineButton(void)
{
    if (selectedButton == 0)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 10);
    glVertex2f(110, height - 10);
    glVertex2f(110, height - 50);
    glVertex2f(10, height - 50);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 30);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Line");
}
void circleButton(void)
{
    if (selectedButton == 2)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 60);
    glVertex2f(110, height - 60);
    glVertex2f(110, height - 100);
    glVertex2f(10, height - 100);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 80);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Circle");
}
void squareButton(void)
{
    if (selectedButton == 3)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 110);
    glVertex2f(110, height - 110);
    glVertex2f(110, height - 150);
    glVertex2f(10, height - 150);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 130);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Square");
}
void triangleButton(void)
{
    if (selectedButton == 4)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 160);
    glVertex2f(110, height - 160);
    glVertex2f(110, height - 200);
    glVertex2f(10, height - 200);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 180);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Triangle");
}
void ellipseButton(void)
{
    if (selectedButton == 5)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 210);
    glVertex2f(110, height - 210);
    glVertex2f(110, height - 250);
    glVertex2f(10, height - 250);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 230);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Elipse");
}
void starButton(void)
{
    if (selectedButton == 6)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 260);
    glVertex2f(110, height - 260);
    glVertex2f(110, height - 300);
    glVertex2f(10, height - 300);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 280);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Star");
}
void pencilButton(void)
{
    if (selectedButton == 7)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 310);
    glVertex2f(110, height - 310);
    glVertex2f(110, height - 350);
    glVertex2f(10, height - 350);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 330);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Pencil");
}
void crayonButton(void)
{
    if (selectedButton == 8)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 360);
    glVertex2f(110, height - 360);
    glVertex2f(110, height - 400);
    glVertex2f(10, height - 400);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 380);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Crayon");
}
void markerButton(void)
{
    if (selectedButton == 9)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 410);
    glVertex2f(110, height - 410);
    glVertex2f(110, height - 450);
    glVertex2f(10, height - 450);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 430);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Marker");
}
void sprayButton(void)
{
    if (selectedButton == 10)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 460);
    glVertex2f(110, height - 460);
    glVertex2f(110, height - 500);
    glVertex2f(10, height - 500);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 480);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Spray");
}
void eraserButton(void)
{
    if (selectedButton == 11)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 510);
    glVertex2f(110, height - 510);
    glVertex2f(110, height - 550);
    glVertex2f(10, height - 550);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 530);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Eraser");
}
void resetButton(void)
{
    if (selectedButton == 12)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 560);
    glVertex2f(110, height - 560);
    glVertex2f(110, height - 600);
    glVertex2f(10, height - 600);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 580);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Trash");
}
void textButton(void)
{
    if (selectedButton == 13)
        glColor3f(0.902, 0.282, 0.200);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 610);
    glVertex2f(110, height - 610);
    glVertex2f(110, height - 650);
    glVertex2f(10, height - 650);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 630);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Text");
}
void saveButton(void)
{
    if (selectedButton == 14)
    {
        glColor3f(0.0, 0.0, 0.0);
        glRasterPos2f(115, height - 690);
        if (markers.empty() &&
            sprays.empty() &&
            crayons.empty() &&
            pencils.empty() &&
            stars.empty() &&
            ellipses.empty() &&
            squares.empty() &&
            circles.empty() &&
            lines.empty() &&
            texts.empty() )
        {
            glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Error!!! There is nothing on the page");
        }
        else
        {
            glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Your painting has been saved as paint.png");
        }
        glColor3f(0.0, 0.7, 0);
    }
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(10, height - 660);
    glVertex2f(110, height - 660);
    glVertex2f(110, height - 700);
    glVertex2f(10, height - 700);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(20, height - 680);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Save");
}
void NarrowButton(void)
{
    if (selectedButtonsize == 1)
        glColor3f(0.914, 0.502, 0.455);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(width - 10, height - 10);
    glVertex2f(width - 110, height - 10);
    glVertex2f(width - 110, height - 40);
    glVertex2f(width - 10, height - 40);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(width - 100, height - 30);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Narrow");
}
void NormalButton(void)
{
    if (selectedButtonsize == 2)
        glColor3f(0.914, 0.502, 0.455);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(width - 10, height - 50);
    glVertex2f(width - 110, height - 50);
    glVertex2f(width - 110, height - 80);
    glVertex2f(width - 10, height - 80);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(width - 100, height - 70);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Normal");
}
void BoldButton(void)
{
    if (selectedButtonsize == 3)
        glColor3f(0.914, 0.502, 0.455);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(width - 10, height - 90);
    glVertex2f(width - 110, height - 90);
    glVertex2f(width - 110, height - 120);
    glVertex2f(width - 10, height - 120);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(width - 100, height - 110);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Bold");
}
void drawRectangle(float r, float g, float b)
{
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(210, height - 700);
    glVertex2f(280, height - 700);
    glVertex2f(280, height - 770);
    glVertex2f(210, height - 770);
    glEnd();
}
void drawButtonslide(float x1, float y1, float x2, float y2, float r, float g, float b)
{
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}
void drawCircle(float cx, float cy, float radius)
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * M_PI * i / 100;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}
void drawbord(void)
{
    glColor3f(backgroundR, backgroundG, backgroundB);
    glBegin(GL_QUADS);
    glVertex2f(130, height - 10);
    glVertex2f(width - 130, height - 10);
    glVertex2f(width - 130, height - 670);
    glVertex2f(130, height - 670);
    glEnd();
}
void SetToBackgroundColor(void)
{
    if (selectedButton == 15)
         glColor3f(0.0, 0.7, 0);
    else
        glColor3f(0.239, 0.322, 0.627);
    glBegin(GL_QUADS);
    glVertex2f(290, height - 735);
    glVertex2f(480, height - 735);
    glVertex2f(480, height - 770);
    glVertex2f(290, height - 770);;
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(300, height - 755);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, (const unsigned char *)"Set as background color ===>");
}