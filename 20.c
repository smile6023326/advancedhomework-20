#include<stdio.h>
#include<stdlib.h>

#define f (a+b+c)/(a-b-c)

int main(void){
	
	int a,b,c;
	
	printf("請輸入a,b,c:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("\n結果:%d\n",f);
	
	system("pause");
	return 0;
}
