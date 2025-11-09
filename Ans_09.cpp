// 9. WAP to implement Bresenham’s Circle Drawing Algorithm.
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
  initwindow(500, 500, "Bresenham's Circle Drawing Algorithm");

  int xc = 250, yc = 250, r = 100;
  int x = 0, y = r;
  int d = 3 - 2 * r; // Initial decision parameter

  while (x <= y)
  {
    drawCirclePoints(xc, yc, x, y);

    if (d < 0)
      d = d + 4 * x + 6;
    else
    {
      d = d + 4 * (x - y) + 10;
      y--;
    }
    x++;
  }

  getch();
  closegraph();
  return 0;
}
