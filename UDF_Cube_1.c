#include<stdio.h>

int cube()
{
	int a,b,ans;
	printf("Enter Numeber = ");
	scanf("%d",&a);
	
	ans = a*a*a;
	
	return ans;
}

main()
{
	printf("Cube is : %d",cube());
}
