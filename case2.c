#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long a, b, c;
    long kecil, sedang, besar;
    long ronde;

    scanf("%ld %ld %ld", &a, &b, &c);
    if (a > b) {
        long temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        long temp = a;
        a = c;
        c = temp;
         }
    if (b > c) {
        long temp = b;
        b = c;
        c = temp;
    }
    kecil = a;
    sedang = b;
    besar = c;
    ronde = sedang - kecil;

    if (besar - sedang < ronde) {
        ronde = besar - sedang;
    }
    printf("%ld\n", ronde);
       
    return 0;
}