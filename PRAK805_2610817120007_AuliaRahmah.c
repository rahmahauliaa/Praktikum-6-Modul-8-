#include <stdio.h>

struct Dompet {
    char nama[50];
    int saldo;
};

void topUp(struct Dompet *d, int jumlah) {
    d->saldo += jumlah;
    printf("Top up %d berhasil, saldo = %d\n", jumlah, d->saldo);
}

void bayar(struct Dompet *d, int jumlah) {
    if (d->saldo >= jumlah) {
        d->saldo -= jumlah;
        printf("Bayar %d berhasil, saldo = %d\n", jumlah, d->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", jumlah);
    }
}

int main() {
    struct Dompet d;
    int n, i, nominal;
    char jenis;

    scanf("%49s %d", d.nama, &d.saldo);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %c %d", &jenis, &nominal);
        if (jenis == 'T') {
            topUp(&d, nominal);
        } else if (jenis == 'B') {
            bayar(&d, nominal);
        }
    }

    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);

    return 0;
}