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

unsigned long BinToHex(unsigned long bin)

{

   int rem,i=0,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remain[i]);
        }

    }
}

unsigned long BinToOct(unsigned long bin)
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

unsigned long DecToBin(unsigned long n)
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

unsigned long DecToHex(unsigned long n)
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

unsigned long DecToOct(unsigned long n)
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

unsigned long OctToBin(unsigned long oct)
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

unsigned long OctToDec(unsigned long oct)
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

unsigned long hex_to_bin(char hex[])
{
    int bin, place;
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

unsigned long Hex_to_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

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
    char hexNum1[100];
    char hexNum2[20];
    int num;
    int check;
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
        while(num!=0)
            {

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Hexadecimal.\n3: Binary to Octal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Hexadecimal.\n6: Decimal to Octal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&input);




        switch(input)
            {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&n1);
                // CHECKING INPUT IS IN BINARY FORM
                check=n1;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",n1);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    check=check/10;
                }

                printf("Decimal Number = %ld\n\n", BinToDec(n1));
                break;

            case 2:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&n2);
                // CHECKING INPUT IS IN BINARY FORM
                check=n2;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",n2);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }
                BinToHex(n2);
                break;

            case 3:
               printf("\n***BINARY TO OCTAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }
                int c = BinToOct(bin);
                printf("\nOctal Number = %d\n\n",c);
                break;

            case 4:
                printf("\n***DECIMAL TO BINARY***\n");
                printf("\nEnter the Number in Decimal form:");
                scanf("%ld",&n3);
                if (n3<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToBin(n3);
                break;

            case 5:
                printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                printf("\nEnter the Number in Decimal form:");
                scanf("%ld",&n4);
                if (n4<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToHex(n4);
                break;

            case 6:
                printf("\n***DECIMAL TO OCTAL***\n");
                printf("\nEnter the Number in Decimal form:");
                scanf("%ld",&n5);
                if (n5<0)
                {
                    printf("........Please Enter the positive value........\n\n");
                }
                else
                    DecToOct(n5);
                break;

            case 7:
                printf("\n***OCTAL TO BINARY***\n");
                A:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                long int b = OctToBin(oct);
                printf("\nBinary Number = %ld\n\n",b);
                break;

            case 8:
                printf("\n***OCTAL TO DECIMAL***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&n);
                // CHECKING INPUT IS IN OCTAL FORM
                check=n;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                long int a = OctToDec(n);
                printf("\nDecimal Number = %ld\n\n",a);
                break;

            case 9:
                printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                long int dec1 = OctToDec(oct);
                long int hex1 = DecToHex(dec1);
                break;

            case 10:
                printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hexNum);
                //check
                for(i=strlen(hexNum)-1;i>=0;i--)
                {
                    if(hexNum[i]>'f' && hexNum[i]<='z' || hexNum[i]>'F'&& hexNum[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hexNum[i]);
                        goto X;
                    }
                }
                binary=hex_to_bin(hexNum);
                printf("Binary Number is:%lld\n\n",binary);
                break;

            case 11:

               printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hexNum1);
                //check
                for(i=strlen(hexNum1)-1;i>=0;i--)
                {
                    if(hexNum1[i]>'f' && hexNum1[i]<='z' || hexNum1[i]>'F'&& hexNum1[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hexNum1[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hexNum1); break;

            case 12:
                printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                N:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hexNum2);
                //check
                for(i=strlen(hexNum2)-1;i>=0;i--)
                {
                    if(hexNum2[i]>'f' && hexNum2[i]<='z' || hexNum2[i]>'F'&& hexNum2[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hexNum2[i]);
                        goto N;
                    }
                }

                /*printf("Enter hexadecimal Number:");
                scanf("%s",hexNum2);*/

                printf("Octal Number is:%lld\n\n",hex_to_oct(hexNum2));
                break;

            case 13:
                break;

        }
        printf("\n\nDO YOU WANT TO CONTINUE = (Yes=1/No=0) :\n");
        scanf("%d",&num);
        if(num==0)
            printf("\n***********Thank You For Your Time*************\n");

    }
}


