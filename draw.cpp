#include <stdio.h>

void drawrect(int w, int h)
{
    int i, j;
    for (i = 0; i < w; i++)
	putchar('x');
    putchar('\n');
    for (i = 2; i < h; i++)
    {
        putchar('x');
        for (j = 2; j < w; j++)
	    putchar(' ');
	putchar('x');
	putchar('\n');
    }
    for (i = 0; i < w; i++)
	putchar('x');
    putchar('\n');
}

int main()
{
    drawrect(20,15);
}
