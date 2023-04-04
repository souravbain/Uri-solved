#include<stdio.h>
int main()
{
    char name[100];
    double salary,sell,profit;
    scanf("%s%lf%lf",name,&salary,&sell);
    profit=salary+(sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",profit);
    return 0;




}
