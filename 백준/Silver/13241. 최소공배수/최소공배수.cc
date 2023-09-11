#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int A,B;
    cin >> A >> B;
    long long minNum = min(A,B);
    for(long long int i = minNum; i >=1ll; i--)
    {
        if(A % i == 0 && B % i == 0)
        {
            cout << A * B / i;
            break;
        }
    }
    
    
    return 0;
}