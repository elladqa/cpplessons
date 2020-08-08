#include <iostream>



int main()
{
    std::string letters;
    std::cin >> letters;

    for (int i = 0; i < letters.length(); i++)
    {
    std::cout << letters[i] << std::endl;
    }
    return 0;
}

