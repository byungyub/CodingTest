#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int,int>> datas;
    datas.resize(N);
    
    int a,b;
    for(int i=0;i<N;i++)
    {
        cin >> a >> b;
        datas[i].first = b;
        datas[i].second = a;
    }
    
    sort(datas.begin(),datas.end());
    
    for(int i =0; i<N;i++)
    {
        cout << datas[i].second << ' ' << datas[i].first << '\n';
    }
    
    return 0;
}