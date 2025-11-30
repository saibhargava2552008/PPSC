#include<stdio.h>
#include<string.h>
int main(){
	char a[10]="cse",b[10]="ADITYA";
	printf("a String length is:%d\n",strlen(a));
	printf("a String in reverse is:%s\n",strrev(a));
	printf("a String in Upper case is:%s\n",strupr(a));
	printf("b String in Lower case is:%s\n",strlwr(b));
	printf("String Copy is:%s\n", strcpy(a,b));
    printf("String Concat is:%s\n", strcat(a,b));
    printf("String Compare is:%d", strcmp(a,b));
	return 0;
}
