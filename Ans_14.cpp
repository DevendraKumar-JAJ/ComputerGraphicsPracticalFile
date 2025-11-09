// 14. WAP to fill the Colors in a Pictures or Objects.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(600, 400, "Color Fill in Objects");

  // Set border color
  setcolor(WHITE);

  // --------------------
  // Rectangle
  rectangle(50, 50, 200, 150);
  setfillstyle(SOLID_FILL, LIGHTBLUE); // Fill style + color
  floodfill(60, 60, WHITE);            // Start point inside rectangle

  // --------------------
  // Circle
  circle(350, 100, 50);
  setfillstyle(SOLID_FILL, LIGHTGREEN);
  floodfill(350, 100, WHITE);

  // --------------------
  // Triangle
  int tri[8] = {450, 200, 550, 200, 500, 100, 450, 200}; // closed triangle
  drawpoly(4, tri);
  setfillstyle(SOLID_FILL, RED);
  floodfill(500, 150, WHITE);


  getch();
  closegraph();
  return 0;
}
