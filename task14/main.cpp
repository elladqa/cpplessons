#include <iostream>

int fibonacci(int index)
{
    int result = 0;
    if (index == 0 || index == 1)//2
    {
        result = 1;
    }
    else
    {
        int a = fibonacci(index - 1); // a == 1
        int b = fibonacci(index - 2); // b == 1
        result = a + b; // result == 2
    }
    return result;
}

int main()
{
    std::cout << fibonacci(4) << std::endl;
    return 0;
}
