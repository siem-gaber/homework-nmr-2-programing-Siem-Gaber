#include <stdio.h>

int compare_low_to_high(const void* a, const void* b)
{
    if (*(double*)a > *(double*)b) return 1;
    else if (*(double*)a < *(double*)b) return -1;
    else return 0;
}

int compare_high_to_low(const void* a, const void* b)
{
    if (*(double*)a < *(double*)b) return 1;
    else if (*(double*)a > *(double*)b) return -1;
    else return 0;
}

int main()
{
    double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
    int n;

    printf("Before sorting the list its: \n");
    for (n = 0; n < 13; n++)
    {
        printf("%.1f ", data[n]);
    }

    printf("\n\n");

    qsort(data, 13, sizeof(double), compare_low_to_high);

    printf("\nAfter sorting the list low to high its: \n");
    for (n = 0; n < 13; n++)
    {
        printf("%.1f ", data[n]);
    }

    printf("\n\n");

    qsort(data, 13, sizeof(double), compare_high_to_low);

    printf("\nAfter sorting the list high to low its: \n");
    for (n = 0; n < 13; n++)
    {
        printf("%.1f ", data[n]);
    }
    printf("\n\n");

    return(0);
}

/*Du har en statisk array döpt data nedan, innehållande ett flertal flyttal.
int main(void)
{
double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
return 0;
}
a) Sortera arrayens innehåll i fallande ordning, så att det största talet ligger längst fram och det minsta talet längst bak.
b) Skriv ut arrayens innehåll i terminalen.
c) Sortera arrayens innehåll i stigande ordning, så att det minsta talet ligger längst fram och det största talet längst bak.
d) Skriv återigen ut arrayens innehåll i terminalen.*/
