#include <stdio.h>

struct Peserta {
    char nama[50];
    int umur;
    int skor;
};

int main() {
    struct Peserta data[10];
    int n, i, idxMax = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%49s %d %d", data[i].nama, &data[i].umur, &data[i].skor);
    }

    for (i = 1; i < n; i++) {
        if (data[i].skor > data[idxMax].skor) {
            idxMax = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           data[idxMax].nama, data[idxMax].skor);

    return 0;
}