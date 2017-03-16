#include <stdio.h>
#include <stdlib.h>

int Check (int d, int p) {
    if (d < 10000) {
        printf ("\n deposit is incorrect \n");
        return 1;
    }
    if (p <= 0 || p > 365) {
        printf ("\n period is incorrect \n");
        return 1;  
    }
    return 0;
};

void Profit (int d, int p) {
    if (d > 100000) {
        if (p <= 30)
            d = d - d / 10;
    if (p > 30 && p <= 120) 
        d = 1.03 * d;
    if (p > 120 && p <= 240)
        d = 1.08 * d;
    if (p > 240 && p <= 365)
        d = 1.15 * d;
    }

    if (d <= 100000) {
        if (p <= 30)
            d = d - d / 10;
    if (p > 30 && p <= 120) 
        d = 1.02 * d;
    if (p > 120 && p <= 240)
        d = 1.06 * d;
    if (p > 240 && p <= 365)
        d = 1.12 * d;
    }

printf ("\nProfit=%d\n", d);   
};
    
int main() {
    int d, p;  // d - deposit, p - period

    printf ("Enter the deposit amount and the period\n");

    do {
        scanf ("%d %d", &d, &p);
    } while (Check (d,p));

    printf ("d:%d p:%d\n", d, p);
  
    Profit (d, p);

    return 0;
}
