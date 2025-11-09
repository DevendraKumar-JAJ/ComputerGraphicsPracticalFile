// 7. WAP to create a scene with many Stars and moons.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(500,500,"Scene With stars");
  // Background rectangle (sky boundary)
  rectangle(0, 0, getmaxx(), getmaxy());

  // Moon
  circle(450, 80, 40);
  setfillstyle(SOLID_FILL, WHITE);
  floodfill(450, 80, WHITE);

  // Stars (randomly scattered)
  for (int i = 0; i < 40; i++)
  {
    int x = rand() % getmaxx();
    int y = rand() % 200; // upper region only
    putpixel(x, y, WHITE);
  }

  // Ground line
  line(0, getmaxy() - 100, getmaxx(), getmaxy() - 100);

  // Simple hut for scenery (optional)
  rectangle(200, 300, 350, 400);
  line(200, 300, 275, 230);
  line(350, 300, 275, 230);

  getch();
  closegraph();
  return 0;
}
