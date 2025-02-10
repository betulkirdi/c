#include<stdio.h>
#include<math.h>
int main(){
    double x,y,t,sum;
    printf("x=");
    scanf("%lf",&x);
    printf("y=");
    scanf("%lf",&y);
    printf("t=");
    scanf("%lf",&t);
    sum=0;
    for(int i=1;i<=50;i++){
        double term =((i*x)-(i+1)*y)/((i+3)*t);
        sum=sum+term;

    }
    printf("sum=%lf\n",sum);
    return 0;

}