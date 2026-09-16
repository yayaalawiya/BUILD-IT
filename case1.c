#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long angka;
    long jumlah = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%ld", &angka);
        jumlah += angka;
    }

    if (jumlah < 0) {
        jumlah = -jumlah;
    }

    printf("%ld\n", jumlah);
   
    return 0;
}
