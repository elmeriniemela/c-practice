#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getStrInput(){
    int size = 10;
    printf("Enter a message: (max %d characters)\n", size-2);

    char *str = (char *)malloc(size);

    char key[] = {'\n'};
    while(1) {
        fgets(str, size, stdin);
        if (strpbrk(str, key)) {
            if ((strlen(str) > 0) && (str[strlen (str) - 1] == '\n')) {
                str[strlen (str) - 1] = '\0';
            }
            return str;
        } else {
            char c;
            while((c = getc(stdin)) != '\n' && c != EOF);
            printf("Message too long! Enter a new message: (max %d characters) \a\n" , size-2);
        }
    }
}

int getNumber(){
    int number = 0;
    printf("How many times?\n");
    scanf(" %d", &number);
    return number;
}

void printWhile(int i, char *str) {
    do {
        printf("%d: %s\n", i, str);
        i--;
    } while (i > 0);
}

void printFor(int number, char *str){
    for (int i=1; i<=number; i++) {
        printf("%d: %s\n", i, str);
    }
}