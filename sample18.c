#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sayim;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayim);
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i*sayim);
        i++;
    }

    return 0;
}