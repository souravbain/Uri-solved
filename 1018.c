#include<stdio.h>
int main()
{
    int a[7]={100, 50, 20, 10, 5, 2 ,1} ;
    int i,n,r[7];
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<7;i++){
        r[i]=n/a[i];
        n=n%a[i];

    }
    for(i=0;i<7;i++){
        printf("%d nota(s) de R$ %d,00\n",r[i],a[i]);


    }
    return 0;



}
