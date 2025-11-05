# include<stdio.h>
# include<ctype.h>

void print_ascii(char x){
    for(int i=0; i<= ((int)x) % 65 ; i++){
    	printf("%c",i+65);
	}
}


int main(){
	print_ascii('E');
	return 0;
}