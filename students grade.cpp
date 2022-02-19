#include <stdio.h>
int main()
{
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 

	if(num >= 85)
	{
	printf("grade A"); 
		}
	else if ( num >=70)
	{ 
		printf(" grade B");
		}
	else if ( num >=55)
	{
		printf(" grade c");
		}
	else if ( num>=40)
	{
		printf("grade D");
		}
		else if ( num<40)
	{
		printf("grade F");
		}
		
return 0;
}
