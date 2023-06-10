#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	palendrome(num);
	
}
void palendrome(int num, int rem, int num2)
{
	int rev=0; 
	num2=num;
	while(num>0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if (num2==rev)
	{
		printf("Given Number is Palendrome");
	}
	else
	{
		printf("Given Number is Not Palendrome");
	}
}

