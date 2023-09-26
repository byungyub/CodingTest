#include <iostream>
#include <deque>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);
int main()
{
    fastio;
    int N;
    cin >> N;
    deque<int> dq;
    
    while(N--)
    {
        int input;
        cin >> input;
        
        if(input == 1)
        {
            int tmp;
            cin >> tmp;
            dq.push_front(tmp);
        }
        else if(input == 2)
        {
            int tmp;
            cin >> tmp;
            dq.push_back(tmp);
        }
        else if(input == 3)
        {
            if(dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(input == 4)
        {
            if(dq.empty())
            {
                cout << -1 << '\n';
            }
            else 
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(input == 5)
        {
            cout << dq.size() << '\n';
        }
        else if(input == 6)
        {
            cout << dq.empty() << '\n';
        }
        else if(input == 7)
        {
            if(dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
            }
        }
        else if(input == 8)
        {
            if(dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
            }
        }
    }
    
    
    return 0;
}