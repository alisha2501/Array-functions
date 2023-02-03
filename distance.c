//distance measured in terms of x and y coordinates//
#include<stdio.h>
#include<math.h>
int distance(int x[], int y[]);
int main()
{
    int x[]={5,4};
    int y[]={6,8};
    distance(x,y);
    return 0;
}
int distance(int x[], int y[]){
    int x_diff, y_diff;
    float dist;
    x_diff=x[1]-x[0];
    y_diff=y[1]-y[0];
    dist=sqrt(pow(x_diff, 2))+sqrt(pow(y_diff, 2));
    printf("Distance : %.2f \n", dist);
}

