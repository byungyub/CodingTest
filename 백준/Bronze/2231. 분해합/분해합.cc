#include <iostream>
#include <string>

using namespace std;

bool CheckNum(int N, int num)
{
    string tmp = to_string(num);
    int check = num;
    for(int i = 0; i<tmp.size(); i++)
    {
        check += tmp[i] - '0';
    }
    
    return N == check;
}

int main()
{
    int N;
    cin >> N;
    
    for(int i = 1; i<=N;i++)
    {
        if(CheckNum(N,i))
        {
            cout << i;
            return 0;
        }
    }
    
    cout << 0;
    return 0;
}