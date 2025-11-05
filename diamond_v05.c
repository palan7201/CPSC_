//Passing case

# include<stdio.h>
# include<ctype.h>

void print_ascii(char x){
	x = toupper(x);
    int characters = ((int)x) % 65;
    
	//upper half
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
	//lower half
	for(int i = characters-1; i>=0; i--){
		for(int j=1; j<characters-i+1; j++){
			printf(" "); //spaces - opening space (decreasing)
		}
		printf("%c",i+65); //print chars - left diagonal
		printf((i ==0)?"\n":"");
		if(i!=0){
			for(int j= 2*i - 1 ; j>0 ; j--){
				printf(" ");//spaces - intervening space (increasing) // fix : from constant space to increasing 
			}
			printf("%c\n",i+65); //print chars - right diagonal	
		}
	}
}


int main(){
	char x;
	printf("Enter the character : ");
	scanf("%c",&x);
	
	print_ascii(x);
	return 0;
}