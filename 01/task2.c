#include <stdio.h>
#include <string.h>

int function_words(char []);

int main()
{

    char sent[100];

    fgets(sent, 100, stdin);
    printf("words -> %d",function_words(sent));

return 0;
}

int function_words(char sent[100]){

    int counter = 0;
    int words = 0;

    for(;counter < strlen(sent); counter++){
        if(sent[counter] == ' '){
            words++;
        }
    }
        words += 1;

return words;
}
