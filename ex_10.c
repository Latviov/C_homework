#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];

    while (1) {
        printf("Enter a string: ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("Enter a valid string:");
            return 1;
        }

        size_t input_length = strlen(input);
        if (input_length > 0 && input[input_length - 1] == '\n') {
            input[input_length - 1] = '\0';
        }

        printf("Length of the string: %zu\n", strlen(input));

        if (strcmp(input, "stop") == 0) {
            printf("Program stopped.\n");
            break;
        }
    }

    return 0;
}
