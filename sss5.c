//w.a.p to count digits of a whole number
#include<stdio.h>
int main()
{
	int num,digit;
	int count=0;
	printf("Enter the whole number to count:");
	scanf("%d",&digit);
	while(num!=0){
	digit=num%10;
	printf("%d\n",digit);
	count++;
	num=num/10;
}
printf("counted digits are:%d\n",count);
return 0;
}
