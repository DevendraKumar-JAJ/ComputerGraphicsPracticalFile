// 15.  WAP to demonstrate Two Dimension Transformations like Translation and Scaling
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

// Function to draw a rectangle given bottom-left and top-right coordinates
void drawRectangle(int x1, int y1, int x2, int y2)
{
  rectangle(x1, y1, x2, y2);
}

int main()
{
  initwindow(600, 400, "2D Transformations: Translation & Scaling");

  setcolor(WHITE);

  // Original Rectangle
  drawRectangle(100, 100, 200, 200);
  outtextxy(100, 210, (char *)"Original");

  // --------------------------
  // Translation
  int tx = 150; // translation in x
  int ty = 50;  // translation in y
  drawRectangle(100 + tx, 100 + ty, 200 + tx, 200 + ty);
  outtextxy(260, 260, (char *)"Translated");

  // --------------------------
  // Scaling
  float sx = 1.5; // scaling factor in x
  float sy = 0.8; // scaling factor in y
  int x1 = 100, y1 = 100, x2 = 200, y2 = 200;

  int scaledX1 = x1 * sx;
  int scaledY1 = y1 * sy;
  int scaledX2 = x2 * sx;
  int scaledY2 = y2 * sy;

  drawRectangle(scaledX1, scaledY1, scaledX2, scaledY2);
  outtextxy(scaledX1, scaledY2 + 10, (char *)"Scaled");

  getch();
  closegraph();
  return 0;
}
