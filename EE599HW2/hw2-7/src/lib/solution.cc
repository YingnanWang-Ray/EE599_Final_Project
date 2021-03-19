#include "solution.h"
#include<map>
using namespace std;

map<char,char> Solution::Mapple(string From, string To)
{	
	map<char,char> output;
	map<char,char>::iterator it;
	if(From.size()!=To.size())
		return output;
	else for(int i = 0; i <From.size(); i++){
			it = output.find(From[i]);
			if(it->second==NULL)
				output[From[i]]=To[i];
			else if(it->second!=To[i])
					{
						output.clear();
						return output;
					}

	}
	return output;
}
