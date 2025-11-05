//failing case - removes step, test 

# include <stdio.h>
#define size 100

void auto_select(char fileName[]){
	int start=0, end=size, k=0;
	char selected[size];
	
	for(int i=0; fileName[i]!='\0'; i++){
		if(fileName[i]=='.'){
			break;
		}
		else if (fileName[i]=='_'|| fileName[i]=='-'){
			break;
		}	
		else {
			(start<i) ? start = i : 1;
			(end>i) ? end = i : 1;
			selected[k++]=fileName[i];	
		}
	}
	if(selected[k-4] == 't'&& selected[k-3]== 'e' && selected[k-2]=='s'&& selected[k-1]=='t'){
		selected[k-4]='\0';
		start -= 4;
	}
	if(selected[k-4] == 's'&& selected[k-3]== 'p' && selected[k-2]=='e'&& selected[k-1]=='c'){
		selected[k-4]='\0';
		start -= 4;
	}
	if(selected[k-4] == 's'&& selected[k-3]== 't' && selected[k-2]=='e'&& selected[k-1]=='p'){
		selected[k-4]='\0';
		start -= 4;
	}

	selected[k]='\0';
	printf("The file name is : %s\n",fileName);
	printf("\"%s\" is selected \n",selected);
	printf("from index %d to %d", end, start);
}

int main(){
	auto_select("diamondtest_v01.c");
}