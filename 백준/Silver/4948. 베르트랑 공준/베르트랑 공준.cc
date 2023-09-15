#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> sosus;

void Sosu()
{
    vector<bool> visited;
    visited.resize(400001);
    
    for(int i = 2; i<=400000; i++)
    {
        if(visited[i])
            continue;
        
        sosus.push_back(i);
        for(int k = i; k<= 400000; k+=i)
        {
            visited[k] = true;
        }
    }
    sosus.push_back(400000);
}

void PrintSosu(int start, int end)
{
    int first = upper_bound(sosus.begin(),sosus.end(),start) - sosus.begin();
    int last = lower_bound(sosus.begin(),sosus.end(),end) - sosus.begin();
    if(sosus[last] == end)
    {
        last++;
    }
    
    int answer = last - first;
    
    cout << answer << '\n';
}

int main()
{
    Sosu();
    while(true)
    {
        int N;
        cin >> N;
        if(N==0)
        {
            break;
        }
        
        PrintSosu(N,2*N);
    }
    
    return 0;
}