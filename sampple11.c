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
        sum=sum+((i*x-(i+1)*y)/((i+3)*t));

    }
    printf("sum=%lf\n",sum);
    return 0;


}
