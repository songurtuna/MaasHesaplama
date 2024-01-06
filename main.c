#include <stdio.h>

int main() {
    float saatlik_ucret, calisma_saati, maas;

    printf("Saatlik ücreti girin: ");
    scanf("%f", &saatlik_ucret);

    printf("Çalışma saatini girin: ");
    scanf("%f", &calisma_saati);

    // Çalışma saatleri normal çalışma saatini aştıysa fazla çalışma ücreti hesapla
    if (calisma_saati > 40) {
        maas = 40 * saatlik_ucret + (calisma_saati - 40) * saatlik_ucret * 1.5;
    } else {
        maas = calisma_saati * saatlik_ucret;
    }

    printf("Maaşınız: %.2f\n", maas);

    return 0;
}
