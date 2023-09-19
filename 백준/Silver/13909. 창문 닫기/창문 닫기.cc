#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int answer = 0;
    for(int i = 1; i * i <= N; i++)
    {
        answer++;
    }
    
    cout << answer;
    
    
    return 0;
}