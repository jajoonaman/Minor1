#include<stdio.h>

// function to convert decimal to hexadecimal
long int DecToHex(long int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal number array
    int i = 0;
    while(n!=0)
    {
        // temporary variable to store remainder
        int temp  = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n/16;
    }

    // printing hexadecimal number array in reverse order
    printf("\nHexadecimal Number = ");
    for(int j=i-1; j>=0; j--)
        printf("%c", hexaDeciNum[j]);
}

// Driver program to test above function
int main()
{
    int n;
    printf("Enter the decimal number (0-255):\t");
    scanf("%d",&n);
    DecToHex(n);
    /*if (n>=0 && n<=255)
    {
        DecToHex(n);
    }
    else
        printf("\n.......Enter valid number.......");*/


    return 0;
}
