#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int rakkam[10]={48,49,50,51,52,53,54,55,56,57};
char sharf[10][6]={"sıfır","bir","iki","üç","dört","beş","altı","yedi","sekiz","dokuz"};
char onlar[10][6]={"on","yirmi","otuz","kırk","elli","altmış","yetmiş","seksen","doksan"};
char sayi[5];

int main()
{
    int i,uzunluk;
    printf("3 basamaklı bir sayı giriniz.\n");
    scanf("%s",sayi);
    uzunluk=strlen(sayi);
    if(uzunluk<1 || uzunluk>3){
        printf("Hatalı giriş yaptınız.\n");
        return 1;

    }
    for(i=0;i<uzunluk;i++)
    {
        if(sayi[i]<'0'|| sayi[i]>'9')
        {
            printf("Hatalı giriş yaptınız.\n");
            return 1;


        }
    }
    if(uzunluk==3)
    {
        for(i=0;i<10;i++)
        {
            if((int)(sayi[0]==rakkam[i]))
            {
                if(i!=0)
                {
                    printf(" %s yuz ",sharf[i]);
                }
            }
            

        }

    }
    if(uzunluk>=2)
    {
        for(i=1;i<10;i++)
        {
            if((int)sayi[uzunluk-2]==rakkam[i])
            {
                printf("%s",onlar[i-1]);
            }
        }

    }
    for(i=0;i<10;i++)
    {
        if((int)sayi[uzunluk-1]==rakkam[i])
        {
            if(!(uzunluk==1 && i==0))
            {
                printf("%s",sharf[i]);
            }
        }
    }
 printf("\n");
    return 0;      


}
