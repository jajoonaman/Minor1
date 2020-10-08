#include <stdio.h>

// function to convert decimal to binary
long int DecToBin(long int n)
{
    // array to store binary number
    int binaryNum[100];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    printf("\nBinary Number = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

// Driver program to test above function
int main()
{
    int n;
    printf("Enter the decimal number (0-255):\n");
    scanf("%d",&n);
    if (n>=0 && n<=255)
    {
        DecToBin(n);
    }
    else
        printf("\n.......Enter valid number.......");
    return 0;
}
