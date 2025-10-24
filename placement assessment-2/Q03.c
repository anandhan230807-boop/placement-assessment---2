#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int pre,crt;
	while(n!=0){
		pre=n%10;
		n=n/10;
		crt=n%10;
		n=n/10;
	}
		if(crt>pre){
			printf("No");
			return 0;
		}
	printf("Yes");
	return 0;
}
