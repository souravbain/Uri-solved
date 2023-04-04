#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,result;
    scanf("%d%d%f%d%d%f",&a,&b,&e,&c,&d,&f);
     result=(b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2f\n",result );
    return 0;


}
