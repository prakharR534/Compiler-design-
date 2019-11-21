#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char string[50];
	int flag,count=0;

	printf("The grammar is : S->aS, S->Sb, S-> ab\n");
	printf("Enter string to be match\n");
	gets(string);

	if(string[0] == 'a'){
		flag =0;
		for(count =1;string[count -1 ]!= '\0';count++){
			if(string[count] == 'b'){
				flag =1;
				continue;
			}else if((flag == 1) && (string[count] == 'a')){
				printf("not belong");
				break;
			}else if (string[count] == 'a')
			continue;
			else if((flag ==1)&& (string[count] == '\0')){
				printf("accepted");
				break;
			}else{
				printf("string not accepted");
			}


		}
	}
	getch();
}
