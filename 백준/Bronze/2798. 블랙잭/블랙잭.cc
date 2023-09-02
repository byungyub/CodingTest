#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> Datas;
    Datas.resize(N);
    for(int i = 0 ; i<N; i++)
    {
        cin >> Datas[i];
    }
    
    int answer = 0;
    for(int i = 0; i<N; i++)
    {
        for(int k = 0; k < N; k++)
        {
            if(i == k)
                continue;
            
            for(int o = 0; o < N; o++)
            {
                if(o == k || i == o)
                    continue;
                
                int a = Datas[i];
                int b = Datas[k];
                int c = Datas[o];
                
                int sum = a + b + c;
                if(answer < sum && sum <= M)
                {
                    answer = sum;
                }
            }
        }
    }
    
    cout << answer;
    return 0;
}