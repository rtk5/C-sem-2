// Write a c program to print a table of degree to radian conversion for every 10 degree upto 360 degree.
#include<stdio.h>
#include<math.h>
int main() {
    int d=0;
    float r=0.0;
    for(d=0;d<=360;d+=10) {
        r = d* M_PI /180;
        printf("Degree %d = radian is %.3f\n",d,r);

    }

    return 0;
}
