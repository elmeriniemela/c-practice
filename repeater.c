#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

int main()  
{  
    int size = 100;
    printf("Enter a message: (max %d characters)\n", size);
    char *str = getStrInput(size);
    while (!str) {
        printf("Message too long! Enter a new message: (max %d characters) \a\n" , size);
        str = getStrInput(size);
    }
    printf("How many times?\n");
    int number = getNumber();
    char answer[1000];
    printf("Commands:\n");
    do {
        printf("Repeat with for-loop (f) or with while-loop (w) '%d' amount of times? Press 'q' to quit.\n", number);
        scanf(" %s", answer);

        if (strcmp(answer, "f") == 0) {
            printFor(number, str);
        } else if (strcmp(answer, "w") == 0) {
            printWhile(number, str);
        } else if (strcmp(answer, "q") == 0) {
            printf("Quitting..");
            break;
        } else {
            printf("Expected (w/f) or 'q' to quit. Unrecognized answer: '%s'\n\n", answer);
        }
    } while (1);
    return 0;
} 