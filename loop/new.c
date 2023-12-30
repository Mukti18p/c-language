#include <stdio.h>
void main()
{
	float x,sum,t,d;
	int i,n;

	scanf("%f",&x);

	scanf("%d",&n);
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
}
