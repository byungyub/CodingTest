#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int> v;
    v.resize(N);
    
    for(int i=0;i<N;i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(),v.end(),greater<int>());
    cout << v[K-1];
    
    return 0;
}