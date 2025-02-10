#include<stdio.h>

char str[100];

int hesap()
{
int i;
i=0;
while(str[i]!=NULL)
{
    i++;
    return i;
}
}
int main()

{
    int uzunluk;
    printf("bir kelime girin: ");
    scanf("%s",str);
    uzunluk=hesap();
    printf("kelimenin uzunluğu:%d\n",uzunluk);

return 0;

}

