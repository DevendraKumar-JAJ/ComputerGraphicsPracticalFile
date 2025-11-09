// 11.  WAP in C for creating Two Dimension Objects like Square, Triangle.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(600, 400, "2D Objects - Square & Triangle");

  setcolor(WHITE);

  // Square
  rectangle(50, 50, 150, 150);
  outtextxy(70, 160, (char *)"Square");

  // Triangle (closed)
  int tri[8] = {250, 150, 300, 50, 350, 150, 250, 150}; // repeat first point
  drawpoly(4, tri);
  outtextxy(270, 160, (char *)"Triangle");

  // Rectangle
  rectangle(400, 50, 500, 150);
  outtextxy(410, 160, (char *)"Rectangle");

  // Pentagon (closed)
  int pent[12] = {150, 250, 200, 220, 250, 250, 230, 300, 170, 300, 150, 250}; // repeat first point
  drawpoly(6, pent);
  outtextxy(180, 310, (char *)"Pentagon");

  getch();
  closegraph();
  return 0;
}
