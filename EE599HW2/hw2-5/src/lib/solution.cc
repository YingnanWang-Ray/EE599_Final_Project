#include "solution.h"

std::string Solution::Swap(std::string stg, int a,int b)
{
	char temp;
	temp = stg[a];
	stg[a] = stg[b];
	stg[b] = temp;
	return stg; 
}

 void Solution::Reverses(std::string &stg)
{
	int size = stg.size();

	char temp;
	for (int i = size; i > size/2 ; i--)
	{
		temp = stg[i-1];
		stg[i-1] = stg[size-i];
		stg[size-i] = temp;
	}
}

std::string Solution::lowcase(std::string stgl)
{
	for(auto &a : stgl)
	{
		if(a<='Z'&& a>='A')
			a += 32;
	}
	return stgl;
}
