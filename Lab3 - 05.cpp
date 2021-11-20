#include <iostream>

using namespace std;

//LAB 3 - BÀI 5

int main ()
{
    int n = 0, result = 0;
    cin >> n;


    for (int i = 2; i < n; ++i)
    {
        bool isPrime = true;
        for (int x = 2; x < i / 2; ++x)
        {
            if (i % x == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            result = i;
        }
    }
    cout << result << "\n";
    return 0;
} 