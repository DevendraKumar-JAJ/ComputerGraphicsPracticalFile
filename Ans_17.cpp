// 17.  WAP to create a Car in Computer Graphics.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(600, 400, "Car Drawing");

  setcolor(WHITE);

  // -------------------
  // Car Body (rectangle)
  rectangle(150, 250, 450, 300); // Main body
  rectangle(200, 200, 400, 250); // Cabin/roof

  // -------------------
  // Wheels (circles)
  circle(200, 310, 25); // Left wheel
  circle(400, 310, 25); // Right wheel

  // Fill wheels
  setfillstyle(SOLID_FILL, WHITE);
  floodfill(200, 310, WHITE);
  floodfill(400, 310, WHITE);

  // -------------------
  // Windows (rectangles inside cabin)
  rectangle(210, 210, 270, 245); // Left window
  rectangle(330, 210, 390, 245); // Right window

  // -------------------
  // Headlights (circles)
  circle(460, 265, 10); // Right headlight
  circle(140, 265, 10); // Left headlight

  getch();
  closegraph();
  return 0;
}
