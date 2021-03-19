#include "solution.h"

void Solution::NewArray(std::vector<int> &input, int R)
{	
	int len = input.size();
	std::vector<int> change;

	for(int i = 0; i < R; i++)
	{
		int temp = input[len-1];
		change.assign(input.begin(),input.end()-1);
		input.clear();
		input.push_back(temp);
		input.insert(input.end(),change.begin(),change.end());
	}

}

