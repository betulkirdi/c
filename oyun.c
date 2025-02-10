#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAS 1
#define KAGİT 2
#define MAKAS 3

void kural()
{
    printf("TAŞ KAĞIT MAKAS OYUNU\n");
    printf("1: Taş\n 2:Kağıt\n 3:Makas\n");

}
int bilgisayarSecim()
{
    return rand()%3+1;

}
const char *secimAdi(int secim)
{
    switch(secim)
    {
        case TAS:
            return "Taş";
        case KAGİT:
            return "Kağit";
        case MAKAS:
            return "Makas";
        default:
            return "Geçersiz";
    }
}

void sonuc(int oyuncu ,int bilgisayar)
{
    printf("Oyuncu:%s\n",secimAdi(oyuncu));
    printf("Bilgisayar:%s\n",secimAdi(bilgisayar));

    if(oyuncu==bilgisayar)
    {
        printf("Berabere\n");

    }
    else if((oyuncu==TAS && bilgisayar==MAKAS) || (oyuncu==KAGİT && bilgisayar==TAS) || (oyuncu==MAKAS && bilgisayar==KAGİT))
    {
        printf("Oyuncu Kazandı.\n");

    }
    else {
        
    
        printf("Bilgisayar Kazandı.\n");

    }
}

int main()
{
    int oyuncu;
    srand(time(0));
    kural();

    while(1)
    {
        printf("Seçiminiz yapınız: 1:TAŞ 2:KAĞIT 3:MAKAS 0:Çıkış\n");
        scanf("%d",&oyuncu);
        if(oyuncu==0)
        {
            printf("Oyun Bitti\n");
            break;
        }
        if(oyuncu<1|| oyuncu>3){

            printf("Geçersiz Seçim.\n");
            continue;
        }
        int bilgisayar=bilgisayarSecim();
        sonuc(oyuncu,bilgisayar);


    }

return 0;
}


