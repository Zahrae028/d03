/* Imprime un tableau d'intérêts composés */

#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main() {
    int i, low_rate, num_years, year;
    double value[5];

    printf("Taux d'interet : ");
    scanf("%d", &low_rate);
    printf("Nombre d'annees : ");
    scanf("%d", &num_years);

    printf("\nAnnees");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d  ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (int month = 1; month <= 12; month++) {
                value[i] = value[i] + (low_rate+i)/1200.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}
