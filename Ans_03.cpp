// WAP to implement Line Drawing Algorithm (DDA) using C.
#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
  int x1, y1, x2, y2;
  float dx, dy, steps, xInc, yInc, x, y;

  printf("Enter the coordinates of first point (x1 y1): ");
  scanf("%d %d", &x1, &y1);
  printf("Enter the coordinates of second point (x2 y2): ");
  scanf("%d %d", &x2, &y2);

  // Initialize graphics window
  initwindow(600, 600, "DDA Line Drawing Algorithm");

  dx = x2 - x1;
  dy = y2 - y1;

  // Calculate steps
  if (abs(dx) > abs(dy))
    steps = abs(dx);
  else
    steps = abs(dy);

  // Calculate increment values
  xInc = dx / steps;
  yInc = dy / steps;

  // Start from first point
  x = x1;
  y = y1;

  // Draw initial pixel
  putpixel(x, y, WHITE);

  // Draw line using DDA algorithm
  for (int i = 0; i <= steps; i++)
  {
    putpixel(round(x), round(y), WHITE);
    x += xInc;
    y += yInc;
    delay(1); // slow for visualization
  }

  getch();
  closegraph();
  return 0;
}
