#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void Input(int *&a,int &n){
	printf("\nNhap so phan tu: ");
	scanf("%d",&n);
	a=new int[n];
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=-100 +rand() % 201;
	}
	
}
void Output(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void Output4_6(int *a,int n){
	for(int i=0;i<n;i++){
		if( abs(a[i])%4==0 && abs(a[i]) %10 == 6 )	
			printf("\n%d\t",a[i]);
		
	}	
}
int X_Output4_6(int *a,int n){
	int dem =0;
	for(int i=0;i<n;i++){
		if(abs(a[i])%4==0 && abs(a[i]) %10 == 6 )	
			dem++;
	}	
	return dem;
}
void NhanDoi(int *a,int n){
	for(int i=0;i<n;i++){
		if(abs(a[i])%2!=0)
			printf("\t: %d",a[i]*2);
}
}
int main(){
	int *a,n;
	Input(a,n);
	Output(a,n);
	Output4_6(a,n);
	printf("\nCount: %d",X_Output4_6(a,n));
	NhanDoi(a,n);
	return 0;
	
}
