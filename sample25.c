#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int sayi,a=1;
    while(a<=10)
    {
        sayi=rand()%21+5;
        printf("rastgele sayi = %d\n",sayi);
        a++;
        


    }
    getchar();
    return 0;
}