#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	time_t t;
	srand((unsigned)time(&t));
	int a= rand()%5;
	char dapan[100];
	char traloi[100];
	char b[100];
	switch(a){
		case 1:{
			printf("mot\n");
			strcpy(dapan, "MOT");
			break;
		}
		case 2:{
			printf("hai\n");
			strcpy(dapan, "high");
			break;
		}
		case 3:{
			printf("ba\n");
			strcpy(dapan, "bar");
			break;
		}
		case 4:{
			printf("bon\n");
			strcpy(dapan, "fho");
			break;
		}
		case 0:{
			printf("nam\n");
			strcpy(dapan, "5555");
			break;
		}
	}
	printf("moi nhap dap an: ");
	gets(traloi);
	char *c=strstr(dapan, traloi);
	while(c==NULL || strcmp(dapan, traloi) !=0){
		printf("ket qua sai, moi nhap lai: ");
		gets(b);
		strcpy(traloi, b);
		char *d=strstr(dapan, traloi);
		c=d;
	}
	printf("dung");
	return 0;
}
