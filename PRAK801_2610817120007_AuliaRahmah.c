#include <stdio.h>

int main() {
    int nilai;
    int *ptr;

    scanf("%d", &nilai);

    ptr = &nilai;

    printf("Nilai variabel = %d\n", nilai);
    printf("Alamat variabel = %p\n", (void *)&nilai);
    printf("Nilai melalui pointer = %d\n", *ptr);

    *ptr = *ptr * 2;

    printf("Nilai setelah diubah lewat pointer = %d\n", nilai);
    return 0;
}