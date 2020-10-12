#include <math.h>
#include <stdio.h>
//Function to convert Octal to Binary

long int OctToBin(int oct) 
{
    int dec = 0, i = 0;
    long int bin = 0;

    // converting octal to decimal
    while (oct != 0) 
    {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

   // converting decimal to binary
    while (dec != 0) 
    {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

//Driver code

int main() 
{
    long int oct;
    printf("Enter an octal number (0-377):\t ");
    scanf("%ld", &oct);
    if(oct >= 0 && oct <= 377)
    {
        long int b = OctToBin(oct);
        printf("\nBinary Number = %ld",b);
    }
    else
         printf("\n.......Enter valid number.......");

   
    return 0;
}
