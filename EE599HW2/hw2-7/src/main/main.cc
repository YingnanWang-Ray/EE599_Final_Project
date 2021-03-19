#include <iostream>
#include <map>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string stg0 = "aabbrr";
    std::string stg1 = "ddeekk";
    std::map<char,char>::iterator it;
    if(solution.Mapple(stg0,stg1).empty())
    {
        std::cout<<std::endl;   
        return EXIT_SUCCESS;
    }
    else 
        std::cout<<"{ ";
        for(it=solution.Mapple(stg0,stg1).begin();it!=solution.Mapple(stg0,stg1).end();++it)
            std::cout<<"("<<it->first<<"->"<<it->second<<") ";
    std::cout<<"}"<<std::endl;
    return EXIT_SUCCESS;
}