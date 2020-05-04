#include "structure.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void calc(struct coord *tabC)
{
    float peri = 0;
    int j = 1;

    for(int i = 0; i < 6; i++)
    {
        if(j == 6)
            j = 0;
        peri = sqrt(pow(tabC[j].x - tabC[i].x, 2) + pow(tabC[j].y - tabC[i].y, 2)) + peri;
        j++;
    }
    printf("%.2f\n", peri);
}

int main()
{
    struct coord tabC[6]=
    {
        {2,0},
        {6,0},
        {10,2},
        {8,6},
        {2,8},
        {0,4},
    };
    calc(tabC);
    return(0);
}
