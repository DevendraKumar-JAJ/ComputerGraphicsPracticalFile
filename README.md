# 🎨 Computer Graphics Practical File (C Programs)

This repository contains **Computer Graphics Practical Programs** written in **C language** using the **BGI Graphics Library (graphics.h)**.  
Each program demonstrates a fundamental concept in **computer graphics**, including line and circle drawing algorithms, transformations, clipping, and object creation.

---

## 🧾 Contents

| No. | Program Title | Description |
|-----|----------------|-------------|
| 1. | Draw a Line | Simple line drawing using `line()` function |
| 2. | Draw a Circle | Draws a circle using `circle()` function |
| 3. | DDA Line Drawing Algorithm | Implements the **Digital Differential Analyzer (DDA)** algorithm |
| 4. | Bresenham’s Line Drawing Algorithm | Draws a line using **Bresenham’s integer-based** algorithm |
| 5. | Man-like Structure | Creates a simple **stick figure (man)** using lines and a circle |
| 6. | Hut Drawing | Draws a **hut** using multiple lines, rectangles, and triangles |
| 7. | Night Scene | Creates a **scene with stars and a moon** using loops and circles |
| 8. | Midpoint Circle Algorithm | Implements **Midpoint Circle Drawing** step-by-step |
| 9. | Bresenham’s Circle Algorithm | Implements **Bresenham’s Circle Drawing** using integer arithmetic |
| 10. | Text and Fonts | Demonstrates **different text styles and fonts** using `settextstyle()` |
| 11. | 2D Objects | Draws **2D shapes** like squares and triangles |
| 12. | Line Clipping (Cohen-Sutherland) | Implements **Cohen–Sutherland Line Clipping Algorithm** |
| 13. | Simple Scene | Creates a **scene with a glass on a table** |
| 14. | Color Fill | Demonstrates **color filling** in objects using `floodfill()` |
| 15. | 2D Transformations | Shows **Translation and Scaling** on 2D objects |
| 16. | Reflection & Rotation | Demonstrates **Reflection and Rotation** of a triangle |
| 17. | Car Drawing | Draws a simple **car** using basic shapes |

---

## ⚙️ Requirements

- **Turbo C++** or **Code::Blocks** (with WinBGIm graphics support)
- **BGI Graphics Library**
  - Include the following libraries during compilation:
    ```
    -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
    ```

---

## 🧩 Setup Instructions

### 🔹 For Turbo C++
1. Copy the `graphics.h`, `egavga.bgi`, and `libbgi.a` files into your Turbo C++ `BGI` folder.
2. Save each `.c` file inside your Turbo C++ `BIN` or `PROJECTS` directory.
3. Compile and run directly in Turbo C++.

### 🔹 For Code::Blocks (Recommended)
1. Install **WinBGIm** library.
2. Add linker options:
3. Include header:
```c
#include <graphics.h>

