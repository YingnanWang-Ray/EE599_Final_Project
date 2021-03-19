#include "solution.h"

bool Solution::AppPa(std::string stg)
{
	int size = stg.size();
	char *b, *e;
	b = &stg[0];
	e = &stg[size-1];
	for(int i = 0; i < size/2; i++)
	{
		if(*b<='Z'&&*b>='A')
			if(*e==*b||*e==(*b+32))
				{
					b++;
					e--;
				}
			else if(((*e>='0'&&*e<='9')||(*e>='A'&&*e<='Z')||(*e>='a'&&*e<='z'))&&(*e!=*b&&*e!=(*b+32)))
					return false;
				else 
					for(;*e<'0'&&*e>'9'&&*e<'A'&&*e>'Z'&&*e<'a'&&*e>'z';)
						{
							e--;
						}
		else if(*b<='z'&&*b>='a')
				if(*e==*b||*e==(*b-32))
					{
						b++;
						e--;
					}
				else if(((*e>='0'&&*e<='9')||(*e>='A'&&*e<='Z')||(*e>='a'&&*e<='z'))&&(*e!=*b&&*e!=(*b-32)))
					return false;
					else
						for(;*e<'0'&&*e>'9'&&*e<'A'&&*e>'Z'&&*e<'a'&&*e>'z';)
							e--;	
		else if(*b<='9'&&*b>='0')
				if(*e==*b)
					{
						b++;
						e--;
					}
				else if(((*e>='0'&&*e<='9')||(*e>='A'&&*e<='Z')||(*e>='a'&&*e<='z'))&&(*e!=*b))
					return false;
					else
						for(;*e<'0'&&*e>'9'&&*e<'A'&&*e>'Z'&&*e<'a'&&*e>'z';)
							e--;	
		else 
			b++;

	}
	return true;
}
