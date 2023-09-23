#include <iostream>

using namespace std;

int main()
{
    long long input;
    cin >> input;
    
    if(input == 0ll)
    {
        cout << 1;
        return 0;
    }
    
    long long answer = 1;
    for(long long i = 1ll; i <= input; i++)
    {
        answer *= i;
    }
    
    cout << answer;
    
    return 0;
}