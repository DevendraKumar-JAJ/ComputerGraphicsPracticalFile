// 10.  WAP in C for creating various types of text and fonts.
#include <graphics.h>
#include <conio.h>

int main()
{
  initwindow(600, 500, "Various Text and Fonts");

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
  outtextxy(150, 30, (char *)"Different Text Styles and Fonts");

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
  outtextxy(100, 100, (char *)"1. DEFAULT_FONT");

  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
  outtextxy(100, 140, (char *)"2. TRIPLEX_FONT");

  settextstyle(SMALL_FONT, HORIZ_DIR, 5);
  outtextxy(100, 180, (char *)"3. SMALL_FONT");

  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
  outtextxy(100, 220, (char *)"4. SANS_SERIF_FONT");

  settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
  outtextxy(100, 260, (char *)"5. GOTHIC_FONT");

  settextstyle(TRIPLEX_FONT, VERT_DIR, 2);
  outtextxy(500, 250, (char *)"VERTICAL");

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
  outtextxy(180, 350, (char *)"Press any key to exit...");

  getch();
  closegraph();
  return 0;
}
