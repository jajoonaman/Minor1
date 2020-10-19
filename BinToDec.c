#include <math.h>
#include <stdio.h>

long int BinToDec(long int n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int main()
{
    long int n;
    printf("Enter the binary number(0 and 1):\t");
    scanf("%ld",&n);
    printf("Decimal Number = %ld", BinToDec(n));
}
