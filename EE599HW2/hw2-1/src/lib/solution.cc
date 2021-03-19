#include "solution.h"

int Solution::Add(int a, int b){
    return a+b;
}
std::string Solution::Add(std::string a, std::string b) {
    return a+b;
}
std::string Solution::Add(int a, std::string b) { 
    std::string c=std::to_string(a);
    return c+b; 
}
std::string Solution::Add(std::string b, int a) { 
    std::string c=std::to_string(a);
    return b+c; 
}

