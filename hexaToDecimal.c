// program in C that converts hexadecimal to decimal
// using user-defined function

#include<stdio.h>
#include<math.h>
int HexToDecY(char hex[]);
float HexToDecN(char hex[]);
//Initialize static variable to '0' C standard
static int i, len, dotPos;
int main()
{
    int decnumInt;
    float decnumFlt;
    char hexnum[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hexnum);
    while(hexnum[i]!='\0')
    {
        if(hexnum[i]=='.')
            dotPos = i;
        len++;
        i++;
    }
    len--;
    i=0;
// if position of dot is 0 then dot does not exist
    if(dotPos==0)
    {
        decnumInt = HexToDecY(hexnum);
        if(decnumInt!=0)
            printf("\nEquivalent Decimal Value = %d", decnumInt);
    }
    else
    {
        decnumFlt = HexToDecN(hexnum);
        if(decnumFlt!=0)
            printf("\nEquivalent Decimal Value = %0.2f", decnumFlt);
    }
    return 0;
}
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
            printf("\nYou've entered an invalid Hexadecimal digit");
            return 0;
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
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
            printf("\nYou've entered an invalid Hexadecimal digit");
            return 0;
        }
        dec1 = dec1 + (rem*pow(16, i));
        lenTemp--;
        i++;
    }
    lenTemp = dotPos+1;
    i=-1;
    while(lenTemp<=len)
    {
        rem = hex[lenTemp];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=90)
            rem = rem-55;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            return 0;
        }
        dec2 = dec2 + (rem*pow(16, i));
        lenTemp++;
        i--;
    }
    dec2 = dec1+dec2;
    return dec2;
}
