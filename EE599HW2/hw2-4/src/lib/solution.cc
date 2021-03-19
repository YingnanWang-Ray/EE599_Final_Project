#include "solution.h"

void Solution::Swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

 void Solution::Swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
