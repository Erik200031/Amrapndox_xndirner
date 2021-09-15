#include <iostream>

void foo( int n )
{
  if(n==0){
    return;
  }
  std::cout<<n%10;
  foo(n/10);
   
}


int main()
{
   int N;
   std::cout << "Input a number: ";  
   std::cin >> N;
  
     foo( N);
     std::cout<<std::endl;
   return 0;
}