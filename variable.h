#ifndef SHAPES_H
#define SHAPES_H
#include <cmath> 
#include <GL/glut.h>
#include <vector>
#include <queue>
#define PI 3.141592653589793
class Point
{
public:
    Point(int x, int y) : xVal(x), yVal(y), R(0.0f), G(0.0f), B(0.0f) {}
    Point() : xVal(0), yVal(0), R(0.0f), G(0.0f), B(0.0f) {}
    void setCoords(int x, int y)
    {
        xVal = x;
        yVal = y;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawPoint()
    {
        glColor3f(R, G, B);
        glPointSize(size);
        glBegin(GL_POINTS);
        glVertex3f(xVal, yVal, 0.0f);
        glEnd();
    }
    int getCoordsX() const { return xVal; }
    int getCoordsY() const { return yVal; }
private:
    int xVal, yVal; 
    float R, G, B;  
    float size;     
};
class Line
{
public:
    Line(Point p1, Point p2) : p1(p1), p2(p2), R(0.0f), G(0.0f), B(0.0f), thickness(1) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void setThickness(float t)
    {
        thickness = t;
    }
    void drawLine()
    {
        glLineWidth(thickness); 
        glBegin(GL_LINES);
        glColor3f(R, G, B);
        glVertex2f(p1.getCoordsX(), p1.getCoordsY());
        glVertex2f(p2.getCoordsX(), p2.getCoordsY());
        glEnd();
        glFlush();
    }
private:
    Point p1, p2;
    float R, G, B;   
    float thickness; 
};
class Circle
{
public:
    Circle(Point p1, Point p2) : p1(p1), p2(p2), R(0.0f), G(0.0f), B(0.0f) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawCircle()
    {
        float t = 0;
        float radius = sqrt(pow(p2.getCoordsX() - p1.getCoordsX(), 2) + pow(p2.getCoordsY() - p1.getCoordsY(), 2));
        glBegin(GL_LINE_LOOP);
        glColor3f(R, G, B);
        for (int i = 0; i < numVertices; ++i)
        {
            glVertex3f(p1.getCoordsX() + radius * cos(t), p1.getCoordsY() + radius * sin(t), 0.0f);
            t += 2 * PI / numVertices;
        }
        glEnd();
        glFlush();
    }
private:
    Point p1, p2;
    float R, G, B;                      
    static const int numVertices = 100; 
};
class Square
{
public:
    Square(Point p1, Point p2) : p1(p1), p2(p2), R(0.0f), G(0.0f), B(0.0f) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawSquare()
    {
        glBegin(GL_LINE_LOOP);
        glColor3f(R, G, B);
        glVertex2f(p1.getCoordsX(), p1.getCoordsY());
        glVertex2f(p1.getCoordsX(), p2.getCoordsY());
        glVertex2f(p2.getCoordsX(), p2.getCoordsY());
        glVertex2f(p2.getCoordsX(), p1.getCoordsY());
        glEnd();
        glFlush();
    }
private:
    Point p1, p2;
    float R, G, B; 
};
class Triangle
{
public:
    Triangle(Point p1, Point p2) : p1(p1), p2(p2), R(0.0f), G(0.0f), B(0.0f) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawTriangle()
    {
        float sideLength = sqrt(pow(p2.getCoordsX() - p1.getCoordsX(), 2) + pow(p2.getCoordsY() - p1.getCoordsY(), 2));
        float baseCenterX = (p1.getCoordsX() + p2.getCoordsX()) / 2.0;
        float baseCenterY = (p1.getCoordsY() + p2.getCoordsY()) / 2.0;
        float height = sqrt(3) / 2 * sideLength;
        float x3 = baseCenterX - height * (p1.getCoordsY() - p2.getCoordsY()) / sideLength;
        float y3 = baseCenterY - height * (p2.getCoordsX() - p1.getCoordsX()) / sideLength;
        glBegin(GL_LINE_LOOP);
        glColor3f(R, G, B);
        glVertex2f(p1.getCoordsX(), p1.getCoordsY());
        glVertex2f(p2.getCoordsX(), p2.getCoordsY());
        glVertex2f(x3, y3); 
        glEnd();
        glFlush();
    }
private:
    Point p1, p2;
    float R, G, B; 
};
class Ellipse
{
public:
    Ellipse(Point p1, Point p2) : p1(p1), p2(p2), R(0.0f), G(0.0f), B(0.0f) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawEllipse()
    {
        float centerX = (p1.getCoordsX() + p2.getCoordsX()) / 2.0f;
        float centerY = (p1.getCoordsY() + p2.getCoordsY()) / 2.0f;
        float majorRadius = fabs(p2.getCoordsX() - p1.getCoordsX()) / 2.0f; 
        float minorRadius = fabs(p2.getCoordsY() - p1.getCoordsY()) / 2.0f; 
        const int numVertices = 100;
        float theta = 2.0f * M_PI / numVertices;
        glBegin(GL_LINE_LOOP);
        glColor3f(R, G, B);
        for (int i = 0; i < numVertices; ++i)
        {
            float x = centerX + majorRadius * cos(theta * i); 
            float y = centerY + minorRadius * sin(theta * i); 
            glVertex2f(x, y);
        }
        glEnd();
        glFlush();
    };
private:
    Point p1, p2;  
    float R, G, B; 
    int numPoints;
};
class Star
{
public:
    Star(Point p1, Point p2) : p1(p1), p2(p2), numPoints(5), R(0.0f), G(0.0f), B(0.0f) {}
    void setPoints(Point p1, Point p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void drawStar()
    {
        float centerX = (p1.getCoordsX() + p2.getCoordsX()) / 2.0f;
        float centerY = (p1.getCoordsY() + p2.getCoordsY()) / 2.0f;
        float outerRadius = fabs(p2.getCoordsX() - p1.getCoordsX()) / 2.0f; 
        float innerRadius = fabs(p2.getCoordsY() - p1.getCoordsY()) / 4.0f; 
        const float angleStep = 2.0f * M_PI / numPoints;
        glBegin(GL_LINE_LOOP);
        glColor3f(R, G, B);
        for (int i = 0; i < numPoints; ++i)
        {
            float angle = angleStep * i;
            float xOuter = centerX + outerRadius * cos(angle);
            float yOuter = centerY + outerRadius * sin(angle);
            float xInner = centerX + innerRadius * cos(angle + angleStep / 2); 
            float yInner = centerY + innerRadius * sin(angle + angleStep / 2);
            glVertex2f(xOuter, yOuter);
            glVertex2f(xInner, yInner);
        }
        glEnd();
        glFlush();
    }
private:
    Point p1, p2;  
    float R, G, B; 
    int numPoints; 
};
class Pencil
{
public:
    Pencil(Point p1, Point p2) : R(0.0f), G(0.0f), B(0.0f), thickness(20.0f), isDrawing(false) {}
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void setThickness(float t)
    {
        thickness = t;
    }
    void startDrawing(int x, int y)
    {
        isDrawing = true;
        points.clear();                
        points.push_back(Point(x, y)); 
    }
    void continueDrawing(int x, int y)
    {
        if (isDrawing)
        {
            points.push_back(Point(x, y)); 
        }
    }
    void stopDrawing()
    {
        isDrawing = false;
    }
    void drawPencil()
    {
        if (points.size() < 2)
            return; 
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(R, G, B, 0.9f); 
        glLineWidth(thickness); 
        glBegin(GL_LINE_STRIP); 
        for (const auto &p : points)
        {
            glVertex2f(p.getCoordsX(), p.getCoordsY()); 
        }
        glEnd();
        glDisable(GL_BLEND);
    }
private:
    std::vector<Point> points; 
    float R, G, B;             
    float thickness;           
    bool isDrawing;            
};
class Crayon
{
public:
    Crayon(Point p1, Point p2) : R(1.0f), G(0.0f), B(0.0f), thickness(10.0f), isDrawing(false) {}
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void setThickness(float t)
    {
        thickness = t;
    }
    void startDrawing(int x, int y)
    {
        isDrawing = true;
        points.clear();                
        points.push_back(Point(x, y)); 
        drawCirclesAroundPoint(x, y);
    }
    void continueDrawing(int x, int y)
    {
        if (isDrawing)
        {
            points.push_back(Point(x, y)); 
            drawCirclesAroundPoint(x, y);
        }
    }
    void stopDrawing()
    {
        isDrawing = false;
    }
    void drawCrayon()
    {
        if (points.empty())
            return;
        for (auto &point : points)
        {
            drawCirclesAroundPoint(point.getCoordsX(), point.getCoordsY());
        }
    }
private:
    void drawCirclesAroundPoint(float cx, float cy)
    {
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        int numCircles = 20;             
        float radius = thickness / 4.0f; 
        float maxDistance = thickness;   
        for (int i = 0; i < numCircles; ++i)
        {
            float angle = (i / float(numCircles)) * 2.0f * 3.14159f;
            float distance = maxDistance * (rand() / float(RAND_MAX));
            float dx = cos(angle) * distance;
            float dy = sin(angle) * distance;
            float alpha = 0.05f + (1.0f - (distance / maxDistance)) * 0.05f; 
            glColor4f(R, G, B, alpha);
            drawCircle(cx + dx, cy + dy, radius);
        }
        glDisable(GL_BLEND);
    }
    void drawCircle(float cx, float cy, float radius)
    {
        glBegin(GL_POLYGON);
        int numSegments = 32; 
        for (int i = 0; i < numSegments; ++i)
        {
            float angle = (i / float(numSegments)) * 2.0f * 3.14159f;
            float dx = cos(angle) * radius;
            float dy = sin(angle) * radius;
            glVertex2f(cx + dx, cy + dy);
        }
        glEnd();
    }
    std::vector<Point> points; 
    float R, G, B;             
    float thickness;           
    bool isDrawing;            
};
class Spray
{
public:
    Spray(Point p1, Point p2) : R(1.0f), G(0.0f), B(0.0f), thickness(5.0f), isDrawing(false) {}
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void setThickness(float t)
    {
        thickness = t;
    }
    void startDrawing(int x, int y)
    {
        isDrawing = true;
        points.clear();       
        addSprayPoints(x, y); 
    }
    void continueDrawing(int x, int y)
    {
        if (isDrawing)
        {
            addSprayPoints(x, y); 
        }
    }
    void stopDrawing()
    {
        isDrawing = false;
    }
    void drawSpray()
    {
        if (points.empty())
            return; 
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(R, G, B, 0.3f); 
        for (size_t i = 0; i < points.size(); ++i)
        {
            auto &p = points[i];
            drawCircle(p.getCoordsX(), p.getCoordsY(), thickness / 6.0f); 
        }
        glDisable(GL_BLEND);
    }
private:
    void addSprayPoints(int x, int y)
    {
        int numSprayPoints = 20; 
        for (int i = 0; i < numSprayPoints; ++i)
        {
            float angle = rand() % 360;                     
            float distance = (rand() % int(thickness * 3)); 
            float dx = cos(angle) * distance;
            float dy = sin(angle) * distance;
            float r = R * (0.8f + rand() % 20 / 100.0f);
            float g = G * (0.8f + rand() % 20 / 100.0f);
            float b = B * (0.8f + rand() % 20 / 100.0f);
            points.push_back(Point(x + dx, y + dy));
        }
    }
    void drawCircle(float cx, float cy, float radius)
    {
        glBegin(GL_POLYGON);
        int numSegments = 30; 
        for (int i = 0; i < numSegments; ++i)
        {
            float angle = (i / float(numSegments)) * 2.0f * 3.14159f;
            float dx = cos(angle) * radius;
            float dy = sin(angle) * radius;
            glVertex2f(cx + dx, cy + dy);
        }
        glEnd();
    }
    std::vector<Point> points; 
    float R, G, B;             
    float thickness;           
    bool isDrawing;            
};
class Marker
{
public:
    Marker(Point p1, Point p2) : R(1.0f), G(0.0f), B(0.0f), thickness(10.0f), isDrawing(false) {}
    void setColor(float r, float g, float b)
    {
        R = r;
        G = g;
        B = b;
    }
    void setThickness(float t)
    {
        thickness = t;
    }
    void startDrawing(int x, int y)
    {
        isDrawing = true;
        points.clear();                
        points.push_back(Point(x, y)); 
    }
    void continueDrawing(int x, int y)
    {
        if (isDrawing)
        {
            points.push_back(Point(x, y)); 
        }
    }
    void stopDrawing()
    {
        isDrawing = false;
    }
    void drawMarker()
    {
        if (points.size() < 2)
            return; 
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        if (R== 0 && G == 0 && B == 0)
        {
            glColor3f(R, G, B);
        }
        else
        {
            glColor4f(R, G, B, 0.9f);
        }
        for (size_t i = 0; i < points.size(); ++i)
        {
            auto &p = points[i];
            drawCircle(p.getCoordsX(), p.getCoordsY(), thickness / 2.0f); 
        }
        glDisable(GL_BLEND);
    }
private:
    void drawCircle(float cx, float cy, float radius)
    {
        glBegin(GL_POLYGON);
        int numSegments = 30; 
        for (int i = 0; i < numSegments; ++i)
        {
            float angle = (i / float(numSegments)) * 2.0f * 3.14159f;
            float dx = cos(angle) * radius;
            float dy = sin(angle) * radius;
            glVertex2f(cx + dx, cy + dy);
        }
        glEnd();
    }
    std::vector<Point> points; 
    float R, G, B;             
    float thickness;           
    bool isDrawing;            
};
class TextObject {
public:
    std::string text;    
    float x, y;          
    float r, g, b;       
    TextObject(std::string t, float xPos, float yPos, float red, float green, float blue)
        : text(t), x(xPos), y(yPos), r(red), g(green), b(blue) {}
    void draw() const {
        glColor3f(r, g, b);
        glRasterPos2f(x, y);
        for (char c : text) {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
        }
    }
};
extern int height;
extern int shape;
extern float R, G, B;
extern float backgroundR , backgroundG , backgroundB ;
extern std::vector<Line> lines;
extern std::vector<Point> points;
extern std::vector<Circle> circles;
extern std::vector<Square> squares;
extern std::vector<Triangle> triangles;
extern std::vector<Ellipse> ellipses;
extern std::vector<Star> stars;
extern std::vector<Pencil> pencils;
extern std::vector<Crayon> crayons;
extern std::vector<Marker> markers;
extern std::vector<Spray> sprays;
extern std::vector<Point>::iterator pointsIterator;
extern std::vector<Line>::iterator linesIterator;
extern std::vector<Circle>::iterator circleIterator;
extern std::vector<Square>::iterator squareIterator;
extern std::vector<Triangle>::iterator triangleIterator;
extern std::vector<Ellipse>::iterator ellipseIterator;
extern std::vector<Star>::iterator starIterator;
extern std::vector<Pencil>::iterator pencilIterator;
extern std::vector<Crayon>::iterator crayonIterator;
extern std::vector<Marker>::iterator markerIterator;
extern std::vector<Spray>::iterator sprayIterator;
extern std::vector<TextObject> texts;
extern Point currentPoint;
extern Point lastClickedPoint;
extern int width, height;
extern bool save;
extern int selectedButton;
extern int selectedButtonsize;
extern float red , green, blue ;
extern float redSlider , greenSlider , blueSlider ;
extern int selectedSlider ;
extern float circlePositions[3]; 
extern bool dragging[3] ; 
extern TextObject currentText;
extern bool isTyping ;
#endif