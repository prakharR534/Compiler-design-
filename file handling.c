#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char data[50];

	fp = fopen("gf.c","r");

	if(fp == NULL){
		printf("Failed to open\n");
	}
	else
	{
		printf("file now opened\n");

		while(fgets(data,50,fp) != NULL){
			printf("%s", data);
		}
		fclose(fp);
	}
	return 0;
}
