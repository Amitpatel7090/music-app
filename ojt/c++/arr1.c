#include<stdio.h>
#include<conio.h>
int i;
void printarray(int *arr) {
	printf("Address of element are :\n");
	for ( i;i<=5;i++){
		printf("%x\n",&arr[i]);
		if(i==5){
			break;
		}
		
	}
}
void array(int arr[]){
	printf("Element of arr :\n");
	for( i=0;i<=5;i++){
		printf("%d\n",arr[i]);
	}
}
int main(){
	//int i; 
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int arr[num];
	for(i=0;1<5;i++){
		
	printf("Enter the Element %d:",i);
	scanf("%d",&arr[i]);
	if(i==5){
		break;
		
	}


}
	printarray(arr);
	array(arr);
	return 0;
}
