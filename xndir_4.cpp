#include <iostream>

void foo( int n )
{
  static int mul=1;
  if(n==0){
    std::cout<<mul;
    return;
  }

  mul*=n%10;
  
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