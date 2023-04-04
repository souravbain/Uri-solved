#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
double    t=a*c/2.0;
    printf("TRIANGULO: %.3lf\n",t);
   double s=c*c*3.14159;
    printf("CIRCULO: %.3lf\n",s);
  double  r=(a+b)*c/2.0;
    printf("TRAPEZIO: %.3lf\n",r);
  double  p=b*b;
    printf("QUADRADO: %.3lf\n",p);
  double  q=a*b;
    printf("RETANGULO: %.3lf\n",q);
    return 0;



}
