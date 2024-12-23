#include<stdio.h>
void arrayPrint(int array[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
} 
int main(){
	int array[]={31,0,7,2,6};
	int n=sizeof(array)/sizeof(array[0]);
	printf("phan tu cua mang la: ");
	arrayPrint(array,n);
	return 0;
}
