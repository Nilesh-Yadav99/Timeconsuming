#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void prime()
{
    int n = 50;
    int skip = 0;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            if (skip == 0)
            {
                cout << i << endl;

                count += 1;
                skip = count;
            }
            else
            {
                skip -= 1;
            }
        }
    }
}

int main()
{
    prime();
}
