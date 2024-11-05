#include<stdio.h>

int main() {
    int counter;
    double sum;  // sum'u double olarak tanımlıyoruz
    counter = 1;
    sum = 0.0;

    loop: 
        sum = sum + (1.0 / counter);  // 1 yerine 1.0 yazarak double bölme sağlıyoruz
        counter = counter + 1;
        if(counter <= 100) {
            goto loop;
        }

    printf("Toplam = %f\n", sum);  // double çıktısını göstermek için %f formatını kullanıyoruz
    return 0;
}
