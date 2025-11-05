//failing case - removes file path

# include <stdio.h>
#define size 100

void auto_select(char fileName[]){
	int start=0, end=size, k=0;
	char selected[size];
	
	for(int i=0; fileName[i]!='\0'; i++){
		if(fileName[i]=='/' || fileName[i]=='\\'){
			selected[0]='\0';
			k=0, start = i + 1;
		}
		else if(fileName[i]=='.'){
			end = i - 1;
			break;
		}
		else if (fileName[i]=='_'|| fileName[i]=='-'){
			break;
		}	
		else {
			end = i; 
			selected[k++]=fileName[i];	
		}
	}
	
	//step, test, spec
	if(selected[k-4] == 't'&& selected[k-3]== 'e' && selected[k-2]=='s'&& selected[k-1]=='t'){
		selected[k-4]='\0';
		end -= 4;
	}
	if(selected[k-4] == 's'&& selected[k-3]== 'p' && selected[k-2]=='e'&& selected[k-1]=='c'){
		selected[k-4]='\0';
		end -= 4;
	}
	if(selected[k-4] == 's'&& selected[k-3]== 't' && selected[k-2]=='e'&& selected[k-1]=='p'){
		selected[k-4]='\0';
		end -= 4;
	}

	selected[k]='\0';
	printf("The file name is : %s\n",fileName);
	printf("\"%s\" is selected \n",selected);
	printf("from index %d to %d", start, end);
}

int main(){
	char fileName[size];
	printf("Enter the filepath : ");
	scanf("%s",fileName);
	auto_select(fileName);
}