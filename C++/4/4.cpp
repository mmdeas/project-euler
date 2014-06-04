#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

bool isPalindrome(int n)
{
    char st[8];
    sprintf(st, "%d", n);
    std::string s = st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != s[s.length()-1-i])
            return false;
    }
    return true;
}

int main()
{
    std::vector<int> palindromes;
    for (int i = 999; i > 99; --i)
    {
        for (int j = 999; j >= i; --j)
        {
            if (isPalindrome(i*j))
            {
                palindromes.push_back(i*j);
            }
        }
    }
    std::sort(palindromes.begin(), palindromes.end());
    std::cout << palindromes[palindromes.size()-1] << "\n";
    return 0;
}
