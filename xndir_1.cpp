#include <iostream>

void writeOne( int n, bool up )
{
   if ( n < 10 )
   {
      std::cout <<"'"<< n << "' ";
   }
   else
   {
      if (  up ) std::cout <<n % 10 << " ";
      writeOne( n / 10, up );
      if ( !up ) std::cout <<"'"<< n % 10 << "' ";
   }
}


int main()
{
   int N;
   std::cout << "Input a number: ";  
   std::cin >> N;
  
     writeOne( N, false );
   return 0;
}