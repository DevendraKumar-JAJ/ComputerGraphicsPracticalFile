// 8. WAP to implement the Midpoint Circle Drawing Algorithm.
#include <graphics.h>
#include <conio.h>

void drawCirclePoints(int xc, int yc, int x, int y)
{
  putpixel(xc + x, yc + y, WHITE);
  putpixel(xc - x, yc + y, WHITE);
  putpixel(xc + x, yc - y, WHITE);
  putpixel(xc - x, yc - y, WHITE);
  putpixel(xc + y, yc + x, WHITE);
  putpixel(xc - y, yc + x, WHITE);
  putpixel(xc + y, yc - x, WHITE);
  putpixel(xc - y, yc - x, WHITE);
}

int main()
{
  initwindow(500, 500, "Midpoint Circle Drawing Algorithm");

  int xc = 250, yc = 250, r = 100; // Circle center and radius
  int x = 0, y = r;
  int p = 1 - r; // Initial decision parameter

  // Draw initial points
  drawCirclePoints(xc, yc, x, y);

  while (x <= y)
  {
    x++;
    if (p < 0)
      p += 2 * x + 1;
    else
    {
      y--;
      p += 2 * (x - y) + 1;
    }
    drawCirclePoints(xc, yc, x, y);
  }

  getch();
  closegraph();
  return 0;
}
