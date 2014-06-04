#include <iostream>
#include <vector>
#include <cmath>


std::vector<bool> sieve(long int n)
{
    std::vector<bool> sieve = std::vector<bool>(n,true);
    for (long int i = 2; i < n/2; ++i)
    {
        if (sieve[i])
        {
            for (int j = i * 2; j < n; j += i)
            {
                sieve[j] = false;
            }
        }
    }
    return sieve;
}

int main()
{
    const long int N = 600851475143;
    std::vector<bool> sieveN = sieve(sqrt(N)+10);
    long int i;
    for (i = sqrt(N)+9; i > 0; --i)
    {
        if (sieveN[i] && (N % i) == 0)
            break;
    }

    std::cout << i << "\n";
    return 0;
}
