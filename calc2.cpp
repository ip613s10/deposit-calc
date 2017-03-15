#include <stdio.h>
#include <stdlib.h>

int main() {
int d, p;  // d - deposit, p - period

printf ("Enter the deposit amount and the period\n");

scanf ("%d %d", &d, &p);

printf ("d:%d p:%d\n", d, p);
  
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

printf ("\nprofit=%d\n", d);
system("pause");
return 0;
}
