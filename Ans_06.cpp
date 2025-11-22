// 6. WAP to create the hut in Computer Graphics.
#include <graphics.h>
#include <conio.h>

    int main()
{
  initwindow(600,500,"HUT");
  // Ground
  line(50, 400, 550, 400);

  // Hut base
  rectangle(150, 250, 400, 400);

  // Roof
  line(150, 250, 275, 150);
  line(400, 250, 275, 150);

  // Door
  rectangle(240, 320, 310, 400);

  // Windows
  rectangle(170, 290, 210, 330);
  rectangle(340, 290, 380, 330);

  // Sun
  circle(480, 100, 30);

  // Tree
  rectangle(80, 300, 95, 400); // trunk
  circle(87, 270, 25);         // top

  getch();
  closegraph();
  return 0;
}
