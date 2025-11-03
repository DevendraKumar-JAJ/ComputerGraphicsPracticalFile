// WAP to implement Bresanham’s Line Drawing using C.
#include <stdio.h>
#include <graphics.h>
#include <math.h>
void bresenhamLine(int x1, int y1, int x2, int y2)
{
  int dx, dy, p, x, y;

  dx = x2 - x1;
  dy = y2 - y1;
  x = x1;
  y = y1;

  p = 2 * dy - dx;

  putpixel(x, y, WHITE);

  while (x < x2)
  {
    if (p >= 0)
    {
      putpixel(x, y, WHITE);
      y++;
      p = p + 2 * dy - 2 * dx;
    }
    else
    {
      putpixel(x, y, WHITE);
      p = p + 2 * dy;
    }
    x++;
    delay(10);
  }
}

int main()
{
  int x1, y1, x2, y2;
  
  printf("Enter the coordinates of first point (x1, y1): ");
  scanf("%d %d", &x1, &y1);
  printf("Enter the coordinates of second point (x2, y2): ");
  scanf("%d %d", &x2, &y2);
  
  initwindow(500, 500, "Bresanham’s Line Drawing Algorithm");
  bresenhamLine(x1, y1, x2, y2);

  getch();
  closegraph();
  return 0;
}
