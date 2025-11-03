// 2. WAP to drew a circle in Computer Graphics using C Function.
#include <graphics.h>
#include <stdio.h>

    int main()
{
  int x, y, r;

  printf("Enter center coordinates (x, y): ");
  scanf("%d %d", &x, &y);
  printf("Enter radius: ");
  scanf("%d", &r);

  // Initialize graphics window (500x500)
  initwindow(500, 500, "Draw Circle - Computer Graphics");

  // Draw circle
  setcolor(WHITE);
  circle(x, y, r);

  // Wait for keypress
  getch();
  closegraph();
  return 0;
}
