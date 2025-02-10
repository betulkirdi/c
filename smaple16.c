#include<stdio.h>
 long carpim(int a,int b)
 {
    long z;
    z=(long)a*b;
    return z;

 }
int main()
    {
        int sonuc=carpim(10,5);
        printf("sonuc=%ld\n",sonuc);
        return 0;
    }
