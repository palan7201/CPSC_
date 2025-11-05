# include<stdio.h>
# include<ctype.h>

void print_ascii(char x){
    int characters = ((int)x) % 65;
    
	for(int i=0; i<= characters ; i++){
		for(int j=0; j<characters -i; j++){
			printf(" "); //spaces - opening space (decreasing)
		}
		printf("%c\n",i+65); //print chars - left diagonal
	}
}


int main(){
	print_ascii('P');
	return 0;
}