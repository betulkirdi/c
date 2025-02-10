#include<stdio.h>

int main(
    {
        int k,m,n,i,j;
        float toplam,matris[50][50];
        toplam=0;
        printf("k=");
        scanf("%d",&k);
        printf("m=");
        scanf("%d",&m);
        printf("n=");
        scanf("%d",&n);
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++)
                {
                    printf("matris[%d][%d]=",i,j);
                    scanf("%f",&matris[i][j]);
                   
                }
        }
    }
)