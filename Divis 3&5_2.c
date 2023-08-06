#include<stdio.h>

int d(int n){
	if(n % 3 == 0 && n % 5 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

main()
{
   	int num;
	   printf("Enter Numebr = ");
	   scanf("%d",&num);
	   
	   if(d(num)) 
	   {
	   	   printf("%d is Divisble By 3 && 5 \n",num);
	   }
	   else
	   {
	   		printf("%d is not Divisble By 3 && 5 \n",num);
	   }	
	   
	
}
