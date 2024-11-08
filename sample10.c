#include<stdio.h>
#include<math.h>
int main(){ 
        double x,counter,sum;
        printf("x=");
        scanf("%lf",&x);
        counter=2;
        sum=0;
        while(counter <=10){
            sum=sum+(counter+1)*pow(x,counter)/(counter+2);
            counter++;

        }
        printf("sum=%lf\n",sum);
        return 0;


}