#include<stdio.h>
void main()
{
	int a, b, c;
	printf("1st no = ");
	scanf("%d",&a);
	printf("2nd no = ");
	scanf("%d",&b);
	printf("2nd no = ");
	scanf("%d",&c);
	if(a>b)
	if(a>c){
		printf("%d is greatest",a);
	}
	else{
		printf("%d is greatest",c);
	}
	else if(b>c){
		printf("%d is greatest",b);
	}else{
		printf("%d is greatest",c)
	}
}
