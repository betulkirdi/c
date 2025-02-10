#include<stdio.h>
#include<time.h>

int main()
{
    time_t zaman;
    char cdizi[100];
    struct tm *time_detay;
     zaman=time(NULL);
     time_detay=localtime(&zaman);
     printf("yerel zaman: %s\n",asctime(time_detay));
     strftime(cdizi,100,"%d %B %Y %A %X",time_detay);

     printf("%s\n",cdizi);
    return 0;



}