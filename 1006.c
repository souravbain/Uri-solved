#include<stdio.h>
int main ()
{
   double A;
   double B;
   double C;
   scanf("%lf%lf%lf",&A,&B,&C);
   double MEDIA;
   MEDIA = (A*2+B*3+C*5)/10;
   printf("MEDIA = %.1lf\n",MEDIA);
   return 0;

}
