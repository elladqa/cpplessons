#include <iostream>
#include <vector>

int main ()
{
   std::vector<int> numbers;
   std::string input_string ;
   std::getline(std::cin, input_string );
   std::string str;
  
   for (int i = 0; i < input_string .size( ) ;++i)
   {
       char current_letter = input_string  [i];
      
       if (current_letter == ' ')
       {
           if  (!str.empty())
           {
               int num = std::stoi(str);
               str.clear();
              
               numbers.push_back(num);
           }
       }
       else
       {
           str.push_back (current_letter);
       }
   }
  
   if  (!str.empty())
   {
       int num = std::stoi(str);
       str.clear();
      
       numbers.push_back(num);
   }
   for (int i = 0; i < numbers.size () ; ++i)
   {
      
       if (numbers [i] % 3 == 0)
          
       {
           std::cout << numbers [i]<< std::endl;
          
       }
   }
   return 0;
}


