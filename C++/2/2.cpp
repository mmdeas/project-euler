#include <iostream>

int main()
{
    int sum = 0;
    int fib = 1;
    int fiba = 1;
    while (fib < 4000000)
    {
        if ((fib % 2) == 0)
            sum += fib;
        int tmp = fib + fiba;
        fiba = fib;
        fib = tmp;
    }
    std::cout << sum << "\n";
}
