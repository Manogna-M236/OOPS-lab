#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(200, 200, 50);         // Draws a circle
    rectangle(150, 150, 250, 250); // Draws a square/rectangle
    line(100, 300, 300, 300);      // Draws a line

    getch();
    closegraph();
    return 0;
}
