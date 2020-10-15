#include<stdio.h>
#include<math.h>

long int OctToDec(long int oct)
{  
   //Variable to store decimal number
    long int dec = 0;
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


int main()
{
	
    long int oct = 0;
    printf("Enter the Octal Number : ");
    scanf("%ld",&oct);
    
    long int dec = OctToDec(oct);
    long int hex = DecToHex(dec);
    return 0;
}






