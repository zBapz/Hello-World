#include<stdio.h>
void Input(float *&a,float *&b){
	a=new float;
	b=new float;
	printf("\nNhap vao 2 so thuc: ");
	scanf("%f%f",a,b);
}
float Div(float *a,float *b){
		return *a/ *b;
}
float Hieu(float *a,float *b){
	return *a - *b;
}
int main(){
	float *a=NULL,*b=NULL;
	Input(a,b);
	printf("\n2 so thuc: %f\t%f",*a,*b);
	if(*b!=0)
		printf("\nKet qua: %f",Div(a,b));
	else 
		printf("\nKhong thuc hien duoc phep chia.");
	printf("\nHieu 2 so la: %f",Hieu(a,b));
	return 0;
	
}
