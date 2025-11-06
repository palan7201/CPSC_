//failing case

# include <stdio.h>

void print_wrapped(char sentence[], int colWidth){ 

	printf("The given string is \"%s\" \n",sentence);
	printf("\nThe final column is\n%s \n",sentence);
}

int main(){
	print_wrapped("This is a text", 5);
}