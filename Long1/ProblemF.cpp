#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int cas, k;
    double result, Tarea, r1, r2, r3, a, b, c, angleA, angleB, angleC, area1, area2, area3, s;
    scanf(" %d", &cas);
    for(k = 1; k <= cas; k++)
    {
        scanf(" %lf %lf %lf",&r1,&r2,&r3);
        a = r1+r2; //making 3 side of internal triangle..
        b = r1+r3;
        c = r2+r3;
        angleA = acos((b*b + c*c - a*a) / (2*b*c)) * 180.0/PI; //3 angle from the center of 3 circle..
        angleB = acos((a*a + c*c - b*b) / (2*a*c)) * 180.0/PI;
        angleC = acos((b*b + a*a - c*c) / (2*b*a)) * 180.0/PI;
        area1 = 0.5 * (r1*r1) * (angleC * (PI/180.0));  //for 360 --- area pi * radius * radius..
        area2 = 0.5 * (r2*r2) * (angleB * (PI/180.0));  //for angleA---area (pi*r*r) / andleA..
        area3 = 0.5 * (r3*r3) * (angleA * (PI/180.0));
        s = (a+b+c) / 2.0;
        Tarea = sqrt(s * (s-a) * (s-b) * (s-c));
        result = Tarea - (area1 + area2 + area3);
        printf("Case %d: %lf\n", k, result);
    }
    return 0;
}