#include <stdio.h>
#define size 30

void print_wrapped_nb(char sentence[], int colWidth){ //nb - no word break 
    int i=0, last_space=0, last_printed = 0, word_len=0, k=0;
    char word[size];
    printf("The given string is \"%s\" \n",sentence);
    printf("\nThe final column is\n");
    
    while(sentence[i]!='\0'){
        while(sentence[i] != ' ' && sentence[i]!='\0'){
            word[k++] = sentence[i++];
            word_len++;
        }

        
        word[k] = '\0';

        int sep = (last_printed > 0) ? 1 : 0;
        int need = sep + word_len;

        if (need + last_printed <= colWidth) {
            
            if (sep) {
                putchar(' ');
                last_printed += 1;
            }
            printf("%s", word);
            last_printed += word_len;
        } else {
            if (last_printed > 0) putchar('\n'); 
            printf("%s", word);
            last_printed = word_len;
        }

        /* reset word buffer for next word */
        word_len = 0;
        k = 0;

        /* skip spaces in the sentence */
        while (sentence[i] == ' ')
            i++;
    }

    putchar('\n');
}

int main(){
    print_wrapped_nb("This is a text", 5);
    return 0;
}
