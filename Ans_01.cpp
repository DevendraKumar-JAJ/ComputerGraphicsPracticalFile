// 1. WAP to draw a line in Computer Graphics using C Function.
#include <graphics.h>
#include <stdio.h>

int main()
{
  int x1, y1, x2, y2;

  printf("Enter the coordinates of first point (x1 y1): ");
  scanf("%d %d", &x1, &y1);

  printf("Enter the coordinates of second point (x2 y2): ");
  scanf("%d %d", &x2, &y2);

  // create a graphics window of 500x500 pixels
  initwindow(500, 500, "Draw Line - Computer Graphics");

  // set color to white
  setcolor(WHITE);

  // draw line from (x1, y1) to (x2, y2)
  line(x1, y1, x2, y2);

  // wait for user key press
  getch();

  // close the graphics window
  closegraph();
  return 0;
}
