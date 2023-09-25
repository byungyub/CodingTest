#include <iostream>
#include <deque>
#include <string>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

int main()
{
    fastio;
    int N;
    cin >> N;

    deque<int> q;
    while (N--)
    {
        string input;
        cin >> input;

        if (input == "push")
        {
            int tmp;
            cin >> tmp;
            q.push_back(tmp);
            continue;
        }
        else if (input == "pop")
        {
            if (q.empty())
            {
                cout << -1;
            }
            else
            {
                cout << q.front();
                q.pop_front();
            }
        }
        else if (input == "size")
        {
            cout << q.size();
        }
        else if (input == "empty")
        {
            cout << q.empty();
        }
        else if (input == "front")
        {
            if(q.empty())
            {
                cout << -1;
            }
            else
            {
                cout << q.front();
            }
        }
        else if (input == "back")
        {
            if(q.empty())
            {
                cout << -1;
            }
            else
            {
                cout << q.back();
            }
        }
        cout << '\n';
    }

    return 0;
}