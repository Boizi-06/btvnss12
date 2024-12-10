#include<stdio.h>
void songuyento(int number){
	int i;
	int uocso=0;
	for(i=2;i<number;i++){
		if(number%i==0){
			uocso++;	
		}
	}
	if(uocso==0){
		printf("day la nguyen to\n");
	}else{
		printf("day khong phai nguyen to\n");
	}
}
int main(){
	int n;
	int m=0;
	do{
		m++;
		printf("moi ban nhap vao so muon kiem tra\n");
		scanf("%d",&n);
		songuyento(n);
		
	}while(m!=2);
	
	
	return 0;
}
