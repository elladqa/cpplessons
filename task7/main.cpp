
#include <iostream>
#include <vector>

int main ()
{
   std::vector<int> numbers; 
   std::string input_string ; 
   std::getline(std::cin, input_string );
   //std::cin >> input_string ;
   // std::cout << input_string ;
   std::string str; 

   for (int i = 0; i < input_string .size( ) ;++i) //сравниваем с размером строки, а не вектора поэтому input_string .size
   {
       char current_letter = input_string  [i]; //чар строки input_string  ? задаем букву принадлeжащую строке

       if (current_letter == ' ')
       {
           if  (!str.empty())
           {
               int num = std::stoi(str);// num - просто имя переменной
               str.clear(); //чистим всю строку, а не только пробелы

               numbers.push_back(num);// кладем значения которые преобразовали
           }
       }
       else
       {
           str.push_back (current_letter);
       }
   }

   if  (!str.empty())
   {
       int num = std::stoi(str);// num - просто имя переменной
       str.clear(); //чистим всю строку, а не только пробелы

       numbers.push_back(num);// кладем значения которые преобразовали
   }
   for (int i = 0; i < numbers.size () ; ++i)
   {
       std::cout << numbers [i] << std::endl;
   }

   return 0;
}
