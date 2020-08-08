#include <iostream>
#include <vector>


int main()
{
    int a = 0;
    std::cin >> a;
    if (a <= 2)
    {
        std::cout << "1" << '\n';
    }
    else
    {
        std::vector <int> fibonacci(a);
        fibonacci[0] = 1;
        fibonacci[1] = 1;

        for (int i = 2; i < a; i++)
        {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

        std::cout << fibonacci[a - 1] << '\n';
    }
    return 0;
}
