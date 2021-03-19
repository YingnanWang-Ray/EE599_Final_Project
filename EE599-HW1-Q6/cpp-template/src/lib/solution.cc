#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "Yingnan Wang  Student ID #4616805578  I like basketball, PC games and so on"; 
}

int Solution::Factorialr(int n) {
  int result = 0;
  if ( n == 0 )
    result = 1;
  else if ( n < 0)
        result = -1;
  else
  {
    result = n * Factorialr(n-1);
  }
  return result;
}


int Solution::Factorialnr(int n) {
  int result = 1;
  if ( n == 0 )
    result = 1;
  else if ( n < 0 )
        result = -1;
  else
    for(int i = 1 ; i <= n ; i++)
    {
      result = result * i;
    }
  return result;
}

