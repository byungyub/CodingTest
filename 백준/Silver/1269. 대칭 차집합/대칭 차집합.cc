#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    
    map<int,bool> A;
    map<int,bool> B;
    
    int input;
    for(int i = 0; i<N; i++)
    {
        cin >> input;
        A[input] = true;
    }
    
    for(int i = 0; i<M;i++)
    {
        cin >> input;
        B[input] = true;
    }
    
    int answer = 0;
    for(auto it = A.begin(); it != A.end(); it++)
    {
        if(B.find(it->first) == B.end())
        {
            answer++;
        }
    }
    
    for(auto it = B.begin(); it != B.end(); it++)
    {
        if(A.find(it->first) == A.end())
        {
            answer++;
        }
    }
    
    cout << answer;
    
    return 0;
}