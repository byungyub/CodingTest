#include <iostream>
#include <stack>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

int main()
{
    fastio;
    int N;
    cin >> N;
    
    stack<int> S;
    while(N--)
    {
        int command = 0;
        cin >> command;
        
        if(command == 1)
        {
            int input = 0;
            cin >> input;
            S.push(input);
        }
        else if(command == 2)
        {
            if(S.size() == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << S.top() << '\n';
                S.pop();
            }
        }
        else if(command == 3)
        {
            cout << S.size() << '\n';
        }
        else if(command == 4)
        {
            cout << S.empty() << '\n';
        }
        else if(command == 5)
        {
            if(S.size() == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << S.top() << '\n';
            }
        }
        
    }
    
    
    return 0;
}