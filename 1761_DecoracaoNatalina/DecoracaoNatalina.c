#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double ang, dist, hElfo, hTeodolito=0, hTotal=0;

    while(scanf("%lf %lf %lf", &ang, &dist, &hElfo) != EOF){
        hTeodolito = 0;
        hTotal = 0;
        ang = (ang * 3.141592654)/180;
        hTeodolito = tan(ang) * dist;
        hTotal = hTeodolito + hElfo;
        hTotal *= 5;
        printf("%.2lf\n", hTotal);

    }
        return 0;
        
}
