//passsing case - fix required : one -> bottles

# include <stdio.h>

void numName_proper(int num){
	switch(num){
		case 1: printf("One "); break;
		case 2: printf("Two "); break;
		case 3: printf("Three "); break;
		case 4: printf("Four "); break;
		case 5: printf("Five "); break;
		case 6: printf("Six "); break;
		case 7: printf("Seven "); break;
		case 8: printf("Eight "); break;
		case 9: printf("Nine "); break;
		case 10: printf("Ten "); break;
	}
}

void numName_lower(int num){
	switch(num){
		case 0: printf("no "); break;//changed
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
		numName_proper(i);
		printf("green bottles hanging on the wall,\n");
		if(i==10) {
			numName_proper(i);
			printf("green bottles hanging on the wall,\n");
		}
		printf("And if one green bottle should accidentally fall,");
		printf("\nThere'll be ");
		numName_lower(i-1); 
		printf("green ");
		if(i-1 == 1){
			printf("bottle hanging on the wall.\n\n");
		} 
		else printf("bottles hanging on the wall.\n\n");
	}
}

int main(){
	print_song();
}