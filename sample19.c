#include<stdio.h>
#include<stdlib.h>

int karsilastir(const void *a,const void *b)

{
    return (*(int *)a-*(int*)b);

} 
int toplamMesafeHesapla(int *sol,int *sağ,int boyut)
{
    qsort(sol,boyut,sizeof(int),karsilastir);
    qsort(sağ,boyut,sizeof(int),karsilastir);
     int toplamMesafe=0;
     for(int i=0;i<boyut;i++)
     {
        toplamMesafe+= abs(sol[i]-sağ[i]);
        

     }
        return toplamMesafe;
}
    int main()
    {
        int sol[]={3,4,2,1,3,3};
        int sag[]={4,3,5,3,9,3};
        int boyut=sizeof(sol)/sizeof(sol[0]);
        int toplamMesafe=toplamMesafeHesapla(sol,sag,boyut);

        printf("Toplam Mesafe:%d\n",toplamMesafe);



return 0;

    }   
    