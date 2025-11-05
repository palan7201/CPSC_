//failing case - Tenth bottle two lines needed, printing single line; zero instead of none; formatting issues

# include <stdio.h>

void numName(int num){
	switch(num){
		case 0: printf("zero "); break;
		case 1: printf("one "); break;
		case 2: printf("two "); break;
		case 3: printf("three "); break;
		case 4: printf("four "); break;
		case 5: printf("five "); break;
		case 6: printf("six "); break;
		case 7: printf("seven "); break;
		case 8: printf("eight "); break;
		case 9: printf("nine "); break;
		case 10: printf("ten "); break;
	}
}

void print_song() { //Ten Green Bottles

	for(int i=10; i>0; i--){
		numName(i);
		printf("green bottles hanging on the wall,");
		printf("\nAnd if one green bottle should accidentally fall,");
		printf("\nThere'll be ");
		numName(i-1); 
		printf("green bottles hanging on the wall.\n\n");
	}
}

int main(){
	print_song();
}