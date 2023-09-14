#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool sosuCheck(long long N)
{
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;
        
        if(N == 1 || N == 0)
        {
            cout << 2 << '\n';
            continue;
        }

        while (sosuCheck(N) == false)
        {
            N++;
        }

        cout << N << '\n';
    }

    return 0;
}