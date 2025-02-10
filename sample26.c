#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int i,n,zar;
   srand(time(NULL));
   printf("kaç kez zar atılsın:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    zar=rand()%6+1;
    printf("%d.atış =%d\n",i,zar);
   }
    getchar();
    return 0;
}