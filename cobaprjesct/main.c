#include <stdio.h>
#include <stdlib.h>

int main()
{

int pilihan,pil;
float sisi, luas, r, L, t, p, volume, ta, tp, k ;

    mulai:
    printf("=== PROGRAM MENGHITUNG LUAS DAN VOLUME ===\n");
    printf("\n1. Menghitung Luas Kubus\n");
    printf("2. Menghitung Luas Bola\n");
    printf("3. Menghitung Luas Prisma\n");
    printf("4. Menghitung Luas Limas\n");
    printf("5. Menghitung Volume Limas\n");
    printf("\nSilahkan Masukkan Pilihan Anda : ");
    scanf("%d", &pilihan);


    switch(pilihan)
    {
    case 1 :
        printf("\nMENGHITUNG LUAS KUBUS\n");
        printf("=======================\n");
        printf("\nMasukkan Nilai Sisi Kubus : ");
        scanf("%f", &sisi);
        luas=( 6 * sisi * sisi);
        printf("Luas Kubus = %.2f\n",luas);
        break;

    case 2 :
        printf("\nMENGHITUNG LUAS BOLA\n");
        printf("=======================\n");
        printf("\nMasukkan Jari-Jari : ");
        scanf("%f", &r);
        luas =(4 * 3.14 * r * r);
        printf("Luas Bola = %.2f\n",luas);
        break;

    case 3 :
        printf("\nMENGHITUNG LUAS PRISMA\n");
        printf("=======================\n");
        printf("\nMasukkan Luas Alas Prisma : ");
        scanf("%f", &L);
        printf("Masukkan Keliling Alas : ");
        scanf("%f", &k);
        printf("Masukkan Tinggi Prisma : ");
        scanf("%f", &tp);
        luas = (2 * L) + (k * tp);
        printf("Luas Permukaan Prisma Segitiga = %.2f\n",luas);
        break;

    case 4 :
        printf("\nMENGHITUNG LUAS LIMAS\n");
        printf("=======================\n");
        printf("\nMasukkan Tinggi Limas : ");
        scanf("%f", &t);
        printf("Masukkan Panjang Sisi Limas : ");
        scanf("%f", &p);
        luas=(p * p)+(4 * 0.5 * p * t);
        printf("Luas Limas = %.2f\n",luas);
        break;

    case 5 :
        printf("\nMENGHITUNG VOLUME LIMAS\n");
        printf("========================\n");
        printf("\nMasukkan Tinggi Limas : ");
        scanf("%f", &t);
        printf("Masukkan Panjang Sisi Limas : ");
        scanf("%f", &p);
        volume=(p*p*t)/3;
        printf("Volume Limas = %.2f\n",volume);
        break;
    }
    return 0;
}
