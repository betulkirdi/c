#include<stdio.h>
#include<time.h>

int main()
{
    time_t zaman;
    struct tm *time_detay;
    zaman=time(NULL);
     printf("YEREL ZAMAN: %s\n",ctime(&zaman));
    printf("local zaman: %s\n",asctime(localtime(&zaman)));
    time_detay=gmtime(&zaman);
    printf("utc zamanı: %s\n",asctime(time_detay));
    return 0;


}