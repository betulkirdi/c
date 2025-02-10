#include<stdio.h>
#include<time.h>

int main()
{
    time_t end,start;

    time(&start);

    printf("bir tuşa basınız\n");

    getchar();

    time(&end);

    printf("geçen süre %2lf  saniye sürdü.\n",difftime(end,start));

    return 0;

}