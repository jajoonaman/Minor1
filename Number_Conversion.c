#include<stdio.h>
#include<math.h>
#include<string.h>

unsigned long BinToDec(unsigned long n)
{
    int dec = 0, c = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, c);
        ++c;
    }
    return dec;
}

long int BinToHex(long int n)

{

    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long int binary = n, tempBinary;
    char hex[20];
    int index, i, digit;

    /* Copy binary number to temp variable */
    tempBinary = binary;
    index = 0;

    /* Find hexadecimal of binary number */
    while(tempBinary!=0)
    {
        /* Group binary to last four digits */
        digit = tempBinary % 10000;

        /* Find hexadecimal equivalent of last four digit */
        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                    /* 0-9 integer constant */
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    /* A-F character constant */
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

        /* Remove the last 4 digits as it is processed */
        tempBinary /= 10000;
    }
    hex[index] = '\0';

    /* Reverse the hex digits */
    return (strrev(hex));

}

int BinToOct(long long bin)
{
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

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
    printf("\n\n");
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
    printf("\n\n");
}

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
    printf("\n\n");
}

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

long long int hex_to_bin(char hex[])
{
    long long int bin, place;
    int i = 0, rem, val;

    bin = 0ll;
    place = 0ll;

    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;

        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            printf("Invalid hexadecimal input.\n\n");
        }

        place = 10000;
    }

    return bin;
}
static int i1, len, dotPos;
int HexToDecY(char hex[20])
{
    int dec=0, rem;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=90)
            rem = rem-55;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit\n\n");
            return 0;
        }
        dec = dec + (rem*pow(16, i1));
        len--;
        i1++;
    }
    return dec;
}
float HexToDecN(char hex[20])
{
    int dec1=0, rem, lenTemp;
    float dec2=0;
    lenTemp = dotPos-1;
    while(lenTemp>=0)
    {
        rem = hex[lenTemp];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=90)
            rem = rem-55;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit\n");
            return 0;
        }
        dec1 = dec1 + (rem*pow(16, i1));
        lenTemp--;
        i1++;
    }
    lenTemp = dotPos+1;
    i1=-1;
    while(lenTemp<=len)
    {
        rem = hex[lenTemp];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=90)
            rem = rem-55;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit\n\n");
            return 0;
        }
        dec2 = dec2 + (rem*pow(16, i1));
        lenTemp++;
        i1--;
    }
    dec2 = dec1+dec2;
    return dec2;
}

long long int hex_to_oct(char hex[])
{
    long long int octal, bin;

    // convert HexaDecimal to Binary
    bin = hex_to_bin(hex);

    // convert Binary to Octal
    octal = BinToOct(bin);

    return octal;
}


int main()
{
    int i,input,n,decnumInt;
    long int oct,n1,n2,n3,n4,n5;
    long long int binary;
    long long bin,octal;
    char hexNum[20];
    float decnumFlt;
    char hexnum1[20];
    char hexNum2[20];
    do{
        printf("Choose the desired option\n 1 - Binary to Decimal\n 2 - Binary to Hexadecimal\n 3 - Binary to Octal\n 4 - Decimal to Binary\n 5 - Decimal to Hexadecimal\n 6 - Decimal to Octal\n 7 - Octal to Binary\n 8 - Octal to Decimal\n 9 - Octal to Hexadecimal\n 10 - Hexadecimal to Binary\n 11 - Hexadecimal to Decimal\n 12 - Hexadecimal to Octal\n 13 - Exit\n ");
        scanf("%d",&input);

        switch(input)
            {
            case 1:
                printf("Enter the binary number(0 and 1):\t");
                scanf("%ld",&n1);
                printf("Decimal Number = %ld\n\n", BinToDec(n1));
                break;

            case 2:
                printf("Enter binary number (0 and 1): ");
                scanf("%ld", &n2);
                printf("Hexadecimal Number = %ld\n\n", BinToHex(n2));
                break;

            case 3:
                printf("Enter a Binary number:\t");
                scanf("%lld", &bin);
                int c = BinToOct(bin);
                printf("\nOctal Number = %d\n\n",c);
                break;

            case 4:
                printf("Enter the positive decimal number:\t");
                scanf("%ld",&n3);
                if (n3<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToBin(n3);
                break;

            case 5:
                printf("Enter the positive decimal number:\t");
                scanf("%ld",&n4);
                if (n4<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToHex(n4);
                break;

            case 6:
                printf("Enter the positive decimal number:\t");
                scanf("%ld",&n5);
                if (n5<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToOct(n5);
                break;

            case 7:
                printf("Enter an octal number:\t ");
                scanf("%ld", &oct);
                long int b = OctToBin(oct);
                printf("\nBinary Number = %ld\n\n",b);
                break;

            case 8:
                printf("Enter the Octal Number:\t");
                scanf("%d",&n);
                long int a = OctToDec(n);
                printf("\nDecimal Number = %ld\n\n",a);
                break;

            case 9:
                printf("Enter the Octal Number : ");
                scanf("%ld",&oct);
                long int dec1 = OctToDec(oct);
                long int hex1 = DecToHex(dec1);
                break;

            case 10:
                printf("Enter Hexadecimal Number:");
                scanf("%s",hexNum);
                binary=hex_to_bin(hexNum);
                printf("Binary Number is:%lld\n\n",binary);
                break;

            case 11:
                printf("Enter any Hexadecimal Number: ");
                scanf("%s", hexnum1);
                while(hexnum1[i]!='\0')
                {
                    if(hexnum1[i]=='.')
                        dotPos = i;
                    len++;
                    i++;
                }
                len--;
                i=0;
            // if position of dot is 0 then dot does not exist
                if(dotPos==0)
                {
                    decnumInt = HexToDecY(hexnum1);
                    if(decnumInt!=0)
                        printf("\nEquivalent Decimal Value = %d\n\n", decnumInt);
                }
                else
                {
                    decnumFlt = HexToDecN(hexnum1);
                    if(decnumFlt!=0)
                        printf("\nEquivalent Decimal Value = %0.2f\n\n", decnumFlt);
                }
                break;

            case 12:
                printf("Enter hexadecimal Number:");
                scanf("%s",hexNum2);

                printf("Octal Number is:%lld\n\n",hex_to_oct(hexNum2));
                break;

            case 13:
                break;

        }
    }

    while(input<13 && input>=1);
    return 0;
}


