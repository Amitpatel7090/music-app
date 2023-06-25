#include<stdio.h>
#include<conio.h>
int main(){
int a,b,fib,num;
printf("Enter the number :");
scanf("%d",&num);
a=0;
 b=1;
printf("%d%d",a,b);

for(int i=2;i<=num;i++){
    fib=a+b;
    printf("%d\n",fib);
    a=b;
    b=fib;
}
return 0;
}
