#include <iostream>

int main()
{
   std::string n;  
   std::cin >> n; 
   int i;
   for (i = n.size( )-1; i >= 0 ;--i)
   {
      char m =  n[i]; 
      std::cout << m;
   }
   return 0;
}
