#include "solution.h"
#include<map>

std::vector<int> Solution::FindV(std::vector<int> v, int sum){
    std::vector<int> output;
    std::map<int, int> Map;
    int count = 0;
    int temp = 0;
    std::map<int, int>::iterator ite;
    std::map<int, int>::iterator find;

    for (int i = 0; i < v.size(); i++)
        {   
            if( v[i] == sum/2 )
            {
                count++;
                if ( count == 2 )
                {
                    temp = i;
                }
            }

            Map.insert(std::pair<int,int>(v[i],i));
        }
    for (ite = Map.begin(); ite != Map.end(); ++ite)
    {
        find = Map.find(sum-ite->first);
        if (find != Map.end())
        {
            if( count == 2 )
            {
                if ( find->second > temp)
                {
                    output.push_back(temp);
                    output.push_back(find->second);
                }
                else
                {
                    output.push_back(find->second);
                    output.push_back(temp);
                }
            }
            else
            {
                if( ite->second < find->second )
                {
                    output.push_back(ite->second);
                    output.push_back(find->second);
                }
                else
                {
                    return output;
                }
            }
            

        }   

 
    }
    
    return output;
}


