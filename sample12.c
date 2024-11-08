#include<stdio.h>
#include<math.h>
int main(){
    double x,y,sum;
    int n;
    sum=0;
    printf("x=");
    scanf("%lf",&x);
    printf("y=");   
    scanf("%lf",&y);
    for(n=1;n<=20;n++){
        double term=(n*x+(n+1))/((n+2)*pow(y,2));
        sum=sum+term;
}
    printf("sum=%lf\n",sum);
    return 0;

}