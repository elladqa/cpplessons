#include <iostream>

int main ()


{

    while (true)
    {

        std::string programming_language;

        std::cout << "Which programming language should you learn?" << std::endl;
        std::cin >> programming_language;


        if (programming_language == "C++")

        {

            std::cout << "Молодец!"<< std::endl;

        }


        else if (programming_language == "Brainfuck")

        {

            std::cout << "You're crazy!" << std::endl;
        }


        else

        {
            
            std::cout << "Мне есть чему у тебя поучиться!" << std::endl;

        }


    }
    return 0;
}

