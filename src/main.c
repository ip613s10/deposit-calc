#include <stdio.h>
#include "deposit.h"
#include "deposit2.h"

int main() {
    int d, p;  // d - deposit, p - period of time

    printf ("Enter the deposit amount and the period of time\n");

    do {
        scanf ("%d %d", &d, &p);
    } while (Check(d,p), printf("Data is incorrect"));

    printf ("d:%d p:%d\n", d, p);
  
    printf ("\nProfit=%d\n", Profit(d, p));

    return 0;
}
