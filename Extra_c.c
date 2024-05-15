#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hex_to_binary(char hex[], char binary[], int bits) {
    long int num = strtol(hex, NULL, 16);
    for (int i = bits - 1; i >= 0; i--) {
        binary[i] = (num % 2) + '0';
        num /= 2;
    }
    binary[bits] = '\0';
}

int binary_to_decimal(char binary[]) {
    int num = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        num = (num << 1) + (binary[i] - '0');
    }
    return num;
}

int hex_to_decimal(char hex[]) {
    return (int) strtol(hex, NULL, 16);
}

int twos_complement_to_decimal(char binary[], int bits) {
    if (binary[0] == '1') {  // If the sign bit is 1, it's a negative number
        // Compute two's complement
        int complement = (1 << bits) - binary_to_decimal(binary);
        return -complement;
    } else {
        return binary_to_decimal(binary);
    }
}

void convert_hex(char hex[]) {
    int bits = 16;
    char binary[bits + 1];
    hex_to_binary(hex, binary, bits);

    int decimal_unsigned = hex_to_decimal(hex);
    int decimal_twos_complement = twos_complement_to_decimal(binary, bits);

    printf("Hexadecimal: %s\n", hex);
    printf("Binary (16 bits): %s\n", binary);
    printf("Decimal (unsigned): %d\n", decimal_unsigned);
    printf("Decimal (two's complement): %d\n", decimal_twos_complement);
}

int main() {
    char hex_number[] = "A200";
    convert_hex(hex_number);
    return 0;
}
