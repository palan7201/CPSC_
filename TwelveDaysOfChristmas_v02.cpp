//passing case

# include <stdio.h>

void print_ordinal(int pos){
	switch(pos){
		case 1: printf("first "); break;
		case 2: printf("second "); break;
		case 3: printf("third "); break;
		case 4: printf("fourth "); break;
		case 5: printf("fifth "); break;
		case 6: printf("sixth "); break;
		case 7: printf("seventh "); break;
		case 8: printf("eighth "); break;
		case 9: printf("ninth "); break;
		case 10: printf("tenth "); break;
		case 11: printf("eleventh "); break;
		case 12: printf("twelfth "); break;
	}	
}

void print_msg(int day){
	switch(day){
		case 12: printf("\nTwelve drummers drumming");
		case 11: printf("\nEleven pipers piping");
		case 10: printf("\nTen lords a-leaping");
		case 9: printf("\nNine ladies dancing");
		case 8: printf("\nEight maids a-milking");
		case 7: printf("\nSeven swans a-swimming");
		case 6: printf("\nSix geese a-laying");
		case 5: printf("\nFive golden rings");
		case 4: printf("\nFour calling birds");
		case 3: printf("\nThree french hens");
		case 2: printf("\nTwo turtle doves and");
		case 1: printf("\nA partridge in a pear tree.\n\n");
	}
}

void print_song() { //Twelve Days Of Christmas

	for (int i=1; i<=12; i++){
		printf("On the ");
		print_ordinal(i); 
		printf("day of Christmas");
		printf("\nMy true love sent to me:");
		print_msg(i);	
	}
	
}

int main(){
	print_song();
}