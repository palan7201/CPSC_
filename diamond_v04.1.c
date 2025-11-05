//Passing (Green)

# include<stdio.h>
# include<ctype.h>

void print_ascii(char x){
	x = toupper(x);
    int characters = ((int)x) % 65;
    
	for(int i=0; i<= characters ; i++){
		for(int j=0; j<characters - i; j++){
			printf(" "); //spaces - opening space (decreasing)	
		}
		printf("%c",i+65); //print chars - left diagonal
		printf((i ==0)?"\n":"");
		if(i!=0){
			for(int j=0; j< 2*i - 1 ; j++){
				printf(" ");//spaces - intervening space (increasing) // fix : from constant space to increasing 
			}
			printf("%c\n",i+65); //print chars - right diagonal	
		}
		
		//no need to care of closing space 
	}
}


int main(){
	print_ascii('E');
	return 0;
}