
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *UserInput;
    UserInput=(char *)calloc(1,sizeof(char));
    int i=0,ii=0;
    printf("Enter a message! \n");
    while(*(UserInput+ii)!='\n'){
        scanf("%c",(UserInput+i));
        ii=i;
        i++;
        UserInput = realloc(UserInput, ((i + 1) * sizeof(char)));
    }
    for(i=0;i<=ii;i++){
        printf("%c",*(UserInput+i));
    }

    return 0;
}
//  old
char *getStrInput(){
    char *str = (char *)malloc(100);
    printf("Print something\n");
    fgets(str, 6000, stdin);

    if ((strlen(str) > 0) && (str[strlen (str) - 1] == '\n'))
        str[strlen (str) - 1] = '\0';

    return str;
}