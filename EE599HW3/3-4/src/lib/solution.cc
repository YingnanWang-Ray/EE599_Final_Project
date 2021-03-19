#include "solution.h"
#include<stack>
 
bool Solution::match(std::string str)
{
	std::stack<char> s;
	for (auto i = 0; i < str.size();i++)
	{
		switch (str[i])
		{
		case '(':s.push(str[i]); break;
		case '[':s.push(str[i]); break;
		case '{':s.push(str[i]); break;
		case ')':
			if (s.top() != '(')
				return false;
			else
				s.pop(); break;
		case ']':
			if (s.top() != '[')
				return false;
			else
				s.pop(); break;
		case '}':
			if (s.top() != '{')
				return false;
			else
				s.pop(); break;
		default:
			break;
		}
	}
	return s.empty();
}
