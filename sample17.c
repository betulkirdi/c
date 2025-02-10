#include<stdio.h>
double sum ,counter,a;

double fact(double a){
double f=1;
for(int i=1;i<=a;i++){
    f=f*i;
    return f;
}
}
int main()
{
    printf("bir sayi girin: ");
    scanf("%lf",&a);
    sum=0;
    for(counter=1;counter<=a;counter++){
        sum=sum+1/fact(counter);
    }
    printf("e=%lf\n",sum);
    return 0;
}