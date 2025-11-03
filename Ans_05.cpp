// WAP to create a man - like structure using a Line and a Circle.
#include <graphics.h>
#include <stdio.h>

int main()
{

  initwindow(500,500,"Man Like shape");
  // Draw the head (circle)
  circle(250, 100, 30); // (x, y, radius)

  // Draw the body (line)
  line(250, 130, 250, 250);

  // Draw arms (lines)
  line(250, 150, 200, 200); // Left arm
  line(250, 150, 300, 200); // Right arm

  // Draw legs (lines)
  line(250, 250, 200, 320); // Left leg
  line(250, 250, 300, 320); // Right leg

  // Optional: Draw ground line
  line(150, 320, 350, 320);

  // Display text on screen
  const char *text = "Man-like structure using Line and Circle";
  outtextxy(120, 340, (char *)text);

  getch();
  closegraph();
  return 0;
}
