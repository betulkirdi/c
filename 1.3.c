#include<stdio.h>
//#include<stdafx.h>
int main(){
    int counter,sum;
    sum=0;
    counter=1;
    loop:sum+=counter;
    counter=counter+2;
    if(counter<100) goto loop;
    printf("toplam=%d\n",&sum);


    return 0;
}
