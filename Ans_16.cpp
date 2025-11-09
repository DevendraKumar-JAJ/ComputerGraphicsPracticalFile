// 16.  WAP in C to implement the Reflection and Rotation of a Triangle.
#include <graphics.h>
#include <conio.h>
#include <math.h>

// Function to draw a triangle given three points
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
  int pts[8] = {x1, y1, x2, y2, x3, y3, x1, y1}; // close the triangle
  drawpoly(4, pts);
}

int main()
{
  initwindow(600, 400, "Triangle: Reflection & Rotation");

  int x1 = 200, y1 = 200;
  int x2 = 300, y2 = 200;
  int x3 = 250, y3 = 100;

  setcolor(WHITE);
  drawTriangle(x1, y1, x2, y2, x3, y3);
  outtextxy(x1, y3 - 20, (char *)"Original");

  // --------------------------
  // Reflection across X-axis (horizontal axis)
  int ry1 = getmaxy() - y1;
  int ry2 = getmaxy() - y2;
  int ry3 = getmaxy() - y3;

  setcolor(RED);
  drawTriangle(x1, ry1, x2, ry2, x3, ry3);
  outtextxy(x1, ry3 - 20, (char *)"Reflected");

  // --------------------------
  // Rotation around centroid by 45 degrees
  float angle = 45 * 3.14159 / 180.0; // convert to radians

  // Centroid of triangle
  float cx = (x1 + x2 + x3) / 3.0;
  float cy = (y1 + y2 + y3) / 3.0;

  int rx1 = cx + (x1 - cx) * cos(angle) - (y1 - cy) * sin(angle);
  int ry1_rot = cy + (x1 - cx) * sin(angle) + (y1 - cy) * cos(angle);

  int rx2 = cx + (x2 - cx) * cos(angle) - (y2 - cy) * sin(angle);
  int ry2_rot = cy + (x2 - cx) * sin(angle) + (y2 - cy) * cos(angle);

  int rx3 = cx + (x3 - cx) * cos(angle) - (y3 - cy) * sin(angle);
  int ry3_rot = cy + (x3 - cx) * sin(angle) + (y3 - cy) * cos(angle);

  setcolor(GREEN);
  drawTriangle(rx1, ry1_rot, rx2, ry2_rot, rx3, ry3_rot);
  outtextxy(cx - 20, cy - 100, (char *)"Rotated 45 deg");

  getch();
  closegraph();
  return 0;
}
