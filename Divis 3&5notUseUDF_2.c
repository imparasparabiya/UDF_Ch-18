#include<stdio.h>



main()
{
   	int num,p=0;
	   printf("Enter Numebr = ");
	   scanf("%d",&num);
	   
	if(num % 3 == 0 && num % 5 == 0){
		p = 1;
	}
	else{
		p = 0;
	}

	   
	   if(p == 1 ) 
	   {
	   	   printf("%d is Divisble By 3 && 5 \n",num);
	   }
	   else
	   {
	   		printf("%d is not Divisble By 3 && 5 \n",num);
	   }	
	   
	
}
