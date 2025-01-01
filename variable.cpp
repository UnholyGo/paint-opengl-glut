#include "variable.h"
#include "mouseControl.h"
int selectedButton = -1;
int selectedButtonsize = 2;
bool isDragging = false;
int selectedSlider = -1;
float circlePositions[3] = {0.0, 0.0, 0.0}; 
bool dragging[3] = {false, false, false}; 
bool isTyping = false;
bool save = false ;
int shape = -1;
float backgroundR =1;
float backgroundG = 1;  
float backgroundB=1;

TextObject currentText("", 50.0f, 100.0f, 1.0f, 0.0f, 0.0f);
std::vector<TextObject> texts;
std::vector<Triangle> triangles;
std::vector<Line> lines;
std::vector<Point> points;
std::vector<Circle> circles;
std::vector<Square> squares;
std::vector<Ellipse> ellipses;
std::vector<Star> stars;
std::vector<Pencil> pencils;
std::vector<Crayon> crayons;
std::vector<Marker> markers;
std::vector<Spray> sprays;

std::vector<Line>::iterator linesIterator;
std::vector<Point>::iterator pointsIterator;
std::vector<Circle>::iterator circleIterator;
std::vector<Square>::iterator squareIterator;
std::vector<Triangle>::iterator triangleIterator;
std::vector<Ellipse>::iterator ellipseIterator;
std::vector<Star>::iterator starIterator;
std::vector<Pencil>::iterator pencilIterator;
std::vector<Crayon>::iterator crayonIterator;
std::vector<Marker>::iterator markerIterator;
std::vector<Spray>::iterator sprayIterator;


Point currentPoint;
Point lastClickedPoint;