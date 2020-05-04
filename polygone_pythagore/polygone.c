#include "structure.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calcul(float x1, float y1, float x2, float y2, float peri)
{
    float mvx = x2 - x1;
    float mvy = y2 - y1;
    float value = 0;

    if (mvx == 0)
    {
        peri = mvy;
    }
    if (mvy == 0)
    {
        peri = mvx;
    }
    else
    {
        value=(mvx*mvx)+(mvy*mvy);
        peri=sqrt(value);
    }
    return (peri);
}
int calc(struct Coord c)
{

    float peri=0;

    peri+=calcul(c.x1, c.y1, c.x2, c.y2, peri);
    peri+=calcul(c.x2, c.y2, c.x3, c.y3, peri);
    peri+=calcul(c.x3, c.y3, c.x4, c.y4, peri);
    peri+=calcul(c.x4, c.y4, c.x5, c.y5, peri);
    peri+=calcul(c.x5, c.y5, c.x6, c.y6, peri);
    peri+=calcul(c.x6, c.y6, c.x1, c.y1, peri);

    printf("%.2f", peri);
    return (peri);
}

int main(int argc, char *argv[])
{
    struct Coord c = {};

    c.x1=2;
    c.y1=0;
    c.x2=6;
    c.y2=0;
    c.x3=10;
    c.y3=2;
    c.x4=8;
    c.y4=6;
    c.x5=2;
    c.y5=8;
    c.x6=0;
    c.y6=4;
    calc(c);
}
