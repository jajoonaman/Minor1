#include <stdio.h>
#include <string.h>

// function to convert Hexadecimal to Binary Number 
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
            printf("Invalid hexadecimal input."); 
        } 
  
        place = 10000; 
    } 
  
    return bin; 
} 

int main()
{
    // Get the Hexadecimal number 
    long long int binary; 
  
    char hexNum[2];
    printf("Enter Hexadecimal Number:");
    scanf("%s",hexNum);
    binary=hex_to_bin(hexNum);
    printf("Binary Number is:%lld",binary);    
    return 0;
}




