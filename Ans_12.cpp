// 12.  WAP in C to Clip Line using Cohen-Sutherland Algorithm.
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

#define INSIDE 0 // 0000
#define LEFT 1   // 0001
#define RIGHT 2  // 0010
#define BOTTOM 4 // 0100
#define TOP 8    // 1000

int xmin = 100, ymin = 100, xmax = 400, ymax = 300;

// Function to compute region code for a point (x, y)
int computeCode(int x, int y)
{
  int code = INSIDE;
  if (x < xmin)
    code |= LEFT;
  else if (x > xmax)
    code |= RIGHT;
  if (y < ymin)
    code |= BOTTOM;
  else if (y > ymax)
    code |= TOP;
  return code;
}

// Cohen-Sutherland clipping algorithm
void cohenSutherlandClip(int x0, int y0, int x1, int y1)
{
  int code0 = computeCode(x0, y0);
  int code1 = computeCode(x1, y1);
  int accept = 0;

  while (1)
  {
    if ((code0 | code1) == 0)
    { // Trivially accept
      accept = 1;
      break;
    }
    else if (code0 & code1)
    { // Trivially reject
      break;
    }
    else
    {
      int code_out;
      int x, y;
      // At least one endpoint is outside
      code_out = code0 ? code0 : code1;

      if (code_out & TOP)
      {
        x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
        y = ymax;
      }
      else if (code_out & BOTTOM)
      {
        x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
        y = ymin;
      }
      else if (code_out & RIGHT)
      {
        y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
        x = xmax;
      }
      else if (code_out & LEFT)
      {
        y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
        x = xmin;
      }

      // Replace outside point with intersection point
      if (code_out == code0)
      {
        x0 = x;
        y0 = y;
        code0 = computeCode(x0, y0);
      }
      else
      {
        x1 = x;
        y1 = y;
        code1 = computeCode(x1, y1);
      }
    }
  }

  if (accept)
  {
    setcolor(WHITE);
    line(x0, y0, x1, y1);
  }
}

int main()
{
  initwindow(500, 400, "Cohen-Sutherland Line Clipping");

  // Draw clipping rectangle
  rectangle(xmin, ymin, xmax, ymax);

  // Original lines (some inside, some outside)
  setcolor(WHITE);
  line(50, 50, 450, 350);   // partially outside
  line(150, 150, 350, 250); // fully inside
  line(50, 200, 120, 350);  // partially outside

  // Clip lines
  cohenSutherlandClip(50, 50, 450, 350);
  cohenSutherlandClip(150, 150, 350, 250);
  cohenSutherlandClip(50, 200, 120, 350);

  getch();
  closegraph();
  return 0;
}
