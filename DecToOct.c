#include <stdio.h>

// function to convert decimal to octal
long int DecToOct(long int n)
{

    // array to store octal number
    int octalNum[100];

    // counter for octal number array
    int i = 0;
    while (n != 0) {

        // storing remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    // printing octal number array in reverse order
    printf("\nOctal Number = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

// Driver Code
int main()
{
    long int n;
    printf("Enter the positive decimal number:\t");
    scanf("%ld",&n);
    if (n<0)
    {
        printf("........Please Enter the positive value........");
    }
    else
        DecToOct(n);
    return 0;
}
