#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007LL

int bandingkan(const void *x, const void *y) {
    long a = *(const long *)x;
    long b = *(const long *)y;

    if (a < b) {
        return -1;
    } else if (a > b) {
        return 1;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    long *a = malloc(n * sizeof(long));

    for (int i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }

    qsort(a, n, sizeof(long), bandingkan);

    long totalPasangan =
        ((long)n * (n - 1) / 2) % MOD;

    long pasanganSama = 0;

    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && a[j] == a[i]) {
            j++;
        }

        long frekuensi = j - i;

        pasanganSama =
            (pasanganSama +
             (frekuensi * (frekuensi - 1) / 2) % MOD) % MOD;

        i = j;
    }

    long jawaban =
        (totalPasangan - pasanganSama + MOD) % MOD;

    printf("%ld\n", jawaban);
    return 0;
}