#include<stdio.h>
void sohoanhao(int number){
	int i;
	int sum=0;
	for(i=1;i<number;i++){
		if(number%i==0){
			sum+=i;
			
		}
	}
	if(sum==number){
		printf("day la so hoan hao \n");
	}else{
		printf("day khong phai la so hoan hao");
	}
}
int main(){
	int n;
	printf("moi ban nhap vao so can kiem tra \n");
	scanf("%d",&n);
	sohoanhao(n);
	
	return 0;
}
