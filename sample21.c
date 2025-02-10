#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

 bool guvenliMi(int *rapor,int uzunluk)
 {

    for (int i=0;i<uzunluk-1;i++)
    {
        int fark=rapor[i+1]-rapor[i];
        if(fark<-3 || fark >3 || fark==0){

            return false;
        }

    }
     bool artiyor=rapor[1]>rapor[0];
     for(int i=0;i<uzunluk-1;i++)
     {
        if(artiyor && rapor[i+1]<rapor[i]|| (!artiyor&& rapor[i+1]>rapor[i]))
        {
            return false;
        }
     }
    return true;

 }
  int guvenliRaporSayisi(char veri[][50],int satirSayisi)
    

  {
    int guvenliSayisi=0;
    for(int i=0;i<satirSayisi;i++)
    {
        int rapor[50],uzunluk=0;
        char *parca=strtok(veri[i]," ");
         while (parca!=NULL){
            rapor[uzunluk++]=atoi(parca);
            parca=strtok(NULL," ");
         }
         if(guvenliMi(rapor,uzunluk))
         {
            guvenliSayisi++;
         }
    }
    return guvenliSayisi;




  }
  int main() 
  
  {
    char veri[][50]={
        "1 2 3 4 5 ",
        "6 7 5 4 3",
        "9 8 7 6 5",
        "-2 -1 0 1 ",
        "8 6 4 4 1",
        "1 3 6 7 9 "
    };
     int satirSayisi=sizeof(veri)/sizeof(veri[0]);
     int guvenliSayisi=guvenliRaporSayisi(veri,satirSayisi);
     printf("güvenli rapor sayısı:%d\n",guvenliSayisi);


return 0;

  }
    
 
 