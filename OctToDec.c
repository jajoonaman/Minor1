#include <stdio.h>
#include <math.h>

//function to convert Octal to Decimal
long int OctToDec(long int oct)
{  
   //Variable to store decimal number
    long int dec = 0
    int i = 0;

    while(oct != 0)
    {
        dec+= (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }
    
    i = 1;
   
    //returning the converted number
    return dec;
}

//Driver code

int main()
{
    int OctNum;
    printf("Enter the Octal Number:\t");
    scanf("%d",&OctNum);

    int a = OctToDec(OctNum);
    printf("\nDecimal Number = %ld ",a);
   
    return 0;
}
