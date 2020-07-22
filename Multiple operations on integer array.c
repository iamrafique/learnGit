#include<stdio.h>
main()
{
	int arr[30],i=0,h=0,count,y=0;
	float  x=0,n=0,d=0,z=0;
	printf("Enter number of terms:\n");
	scanf("%f",&n);
	printf("Enter the data upto %0.0f terms\n",n);
	for(h=0; h<n; h++)	
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
		x=x+arr[i];
		y;
		y++;
		}
		else if(arr[i]%2!=0)
		{
			d=d+arr[i];
		}
		z=n-y;
		
	}
		printf("\n*Total numbers entered in the array is %0.0f\n",n);
		printf("*Odd numbers entered are:");
		printf("*Total odd numbers in the array is %0.0f\n",z);
		printf("*Even numbers entered are:");
		printf("*Total even numbers in the array is %d\n",y);
		printf("*Sum of even numbers in the array is %0.2f\n*Average of the even numbers i.e %0.2f/%d:  %0.2f\n",x,x,y,x/y);
		printf("*Sum of odd numbers in the array is %0.2f\n*Average of the odd numbers i.e %0.2f/%0.2f:  %0.2f\n",d,d,z,d/z);
}
	
