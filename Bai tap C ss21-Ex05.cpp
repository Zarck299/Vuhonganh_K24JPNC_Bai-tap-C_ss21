#include <stdio.h>
#include <string.h>

int main(){
	int text;
	char s[100];
	FILE *file = fopen("bt05.txt","w+");
	printf("Ban muon nhap bao nhieu dong vao trong file : ");
	scanf("%d", &text);
	printf("Moi ban nhap vao file ..............\n");
	for(int i=0;i<text;i++){
		printf("Moi ban nhap dong thu %d : ",i+1);
		fflush(stdin);
		fgets(s,sizeof(s),stdin);
		fprintf(file,"%s",s);
	}
	//Dong file
	fclose(file);
	printf("Da dong file.");
	return 0;
}
