#include<stdio.h>
#include<math.h>
int main(){
    double x,counter,sum;
    while(1){

    printf("x=");
    scanf("%lf",&x);
    counter=2;
    sum=x;
    while(counter<=10){
        sum=sum+pow(x,counter)/counter;
        counter++;
    }
    printf("sum=%lf\n",sum);
    char choice;
    printf("do you want to continue? (y/n)");
    scanf("%c",&choice);
    if(choice=='n'){
        break;
    }
    }
    return 0;



}