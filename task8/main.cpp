#include <iostream>



int main()
{
    std::string letters;
    std::getline(std::cin,letters);



...  for (int i = 0; i < letters.length(); ++i)
    {
        char l = letters[i];
        if (letters [i] != ' ')
        {
            std::cout << l;
        }
    }

    return 0;
}
