#include "solution.h"
#include<algorithm>

void Solution::NewArray(std::vector<int> &input)
{	
	int len = input.size();
	std::sort(input.begin(),input.end());
	if(len%2==0)
	{
		std::sort(input.begin(),input.begin()+len/2-1);
		std::reverse(input.begin(),input.begin()+len/2-1);
	}
	else
	{
		std::sort(input.begin(),input.begin()+len/2);
		std::reverse(input.begin(),input.begin()+len/2);
	}
	std::sort(input.begin()+len/2+1,input.end());
	std::reverse(input.begin()+len/2+1,input.end());


}

