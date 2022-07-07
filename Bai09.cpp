#include<stdio.h>
void Input(char *&a,char *&b){
	a=new char;
	b=new char;
	printf("\nNhap ky tu dau: ");
	scanf("%c",a);
	fflush(stdin);
	printf("\nNhap ky tu cuoi: ");
	scanf("%c",b);
	if(*a>*b){
		char tmp;
		tmp=*a;
		*a=*b;
		*b=tmp;
	}
	for(char i=*a;i<=*b;i++){
		printf("\n%c\t%d\t%o\t%x",i,i,i,i);
	}
	
}
int main(){
	char *a=NULL,*b=NULL;
	Input(a,b);
	return 0;
	
}
