#include <stdio.h>
#include <math.h>
int main()
{

    int x =5; 
    int y=6;//or float y=6 that way i don't add the (float) to ligne 10
    int add = x+y;

    float z= x/ (float)y;
    printf("%f\n",z);

    x++;
    y--;
    printf("%d\n",x);
    printf("%d\n",y);

    x+=5;
    printf("%d\n",x);
    x/=5;
    printf("%d\n",x);
    return 0;
}

