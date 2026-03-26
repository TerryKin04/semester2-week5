/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: King Chun Ho Terry
 * ID: 202028848
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal=0;
    char hex[9];
    
    printf("Enter a hexadecimal:");
    scanf("%8s", hex);

    for (int i = 0; i < strlen(hex); i++) {
        int val = 0;
        
        if (hex[i] >= '0' && hex[i] <= '9') {
            val = hex[i] - '0';
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            val = hex[i] - 'a' + 10;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            val = hex[i] - 'A' + 10;
        } else {
            // if input contains invalid hex digit
            printf("Error: Invalid Hexadecimal\n");
            return 1;
        }
        
        decimal = decimal * 16 + val;
    }
    
    // print the decimal result
    printf("decimal:%ld\n", decimal);
    
    return 0;
}