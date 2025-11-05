//failing case

# include <stdio.h>

void auto_select(char fileName[]){
	int start, end;
	start = 0, end = 12; //static values
	printf("\"%s\" is selected \n",fileName);
	printf("from index %d to %d",start, end);
}

int main(){
	auto_select("diamond_v01.c");
}