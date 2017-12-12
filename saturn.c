#include <stdio.h>
#include <math.h>

int main()
{
    int inR, outR;
    double w, s, pi = 3.14159265358979323846;
    
    scanf(" %d %d", &inR, &outR);
    w = (double)outR - inR;
    s = pi * (pow(outR, 2) - pow(inR, 2));
    s = s / 100;
    printf("%.0lf %.2lf", w, s);
    printf("\n");
    return 0;
}
