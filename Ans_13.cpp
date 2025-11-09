// 13.  WAP to draw a simple seeded scene consisting of a glass on a table.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(600, 400, "Glass on Table");

  setcolor(WHITE);

  // Draw Table
  rectangle(50, 300, 550, 350); // Table top
  line(50, 300, 50, 380);       // Left leg
  line(550, 300, 550, 380);     // Right leg

  // Draw Glass (simple cylinder)
  int glassTopX = 250, glassTopY = 200;
  int glassWidth = 100, glassHeight = 100;

  // Top ellipse
  ellipse(glassTopX, glassTopY, 0, 360, glassWidth / 2, 20);

  // Vertical sides
  line(glassTopX - glassWidth / 2, glassTopY, glassTopX - glassWidth / 2, glassTopY + glassHeight);
  line(glassTopX + glassWidth / 2, glassTopY, glassTopX + glassWidth / 2, glassTopY + glassHeight);

  // Bottom ellipse (smaller for perspective)
  ellipse(glassTopX, glassTopY + glassHeight, 0, 360, glassWidth / 2, 10);

  // Optional: Contents inside glass (water)
  setfillstyle(SOLID_FILL, WHITE);
  floodfill(glassTopX, glassTopY + 50, WHITE);

  getch();
  closegraph();
  return 0;
}
