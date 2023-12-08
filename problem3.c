//Take a character array of size 20 (user input) and convert all letters to the uppercase letter.

#include <stdio.h>

int main() {
    char input[21];


    printf("Enter a string (up to 20 characters): ");
    fgets(input, sizeof(input), stdin);


    for (int i = 0; i < sizeof(input); i++) {

        if (input[i] >= 'a' && input[i] <= 'z') {

            input[i] = input[i] - 'a' + 'A';
        }
    }


    printf("Uppercase string: %s\n", input);


}
