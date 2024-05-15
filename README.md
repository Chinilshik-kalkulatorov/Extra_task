# Conversion of Hexadecimal Number A200

This repository contains the program `extra_c.c`, which converts a hexadecimal number to binary and decimal representations, including two's complement representation for a 16-bit processor.

## Program Description

The `extra_c.c` program performs the following tasks:

1. Converts a hexadecimal number to its binary representation.
2. Converts a hexadecimal number to its decimal representation (unsigned).
3. Converts a binary number to its decimal representation, considering the two's complement.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Compile the program using the `gcc` compiler:
    ```bash
    gcc extra_c.c -o extra_c
    ```

2. Run the compiled program:
    ```bash
    ./extra_c
    ```

## Example Output

After running, the program will display the conversion results for the hexadecimal number A200:

```plaintext
Hexadecimal: A200
Binary (16 bits): 1010001000000000
Decimal (unsigned): 41472
Decimal (two's complement): -24064
