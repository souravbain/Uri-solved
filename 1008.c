#include<stdio.h>
int main()
{
    int num,hr;
    float SALARY;
    scanf("%d%d%f",&num,&hr,&SALARY);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",hr*SALARY);
    return 0;

}
