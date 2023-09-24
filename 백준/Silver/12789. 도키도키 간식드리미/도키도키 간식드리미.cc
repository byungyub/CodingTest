#include <iostream>
#include <queue>
#include <stack>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);


int main()
{
    int N;
    cin >> N;

    queue<int> peoples;
    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        peoples.push(input);
    }

    stack<int> golmok;
    int count = 1;
    int prevgolmok = golmok.size();
    int prevpeoples = peoples.size();

    while (golmok.empty() == false || peoples.empty() == false)
    {
        prevgolmok = golmok.size();
        prevpeoples = peoples.size();
        if (golmok.empty() == false)
        {
            if (golmok.top() == count)
            {
                golmok.pop();
                count++;
                continue;
            }
        }

        if (peoples.empty() == false)
        {
            if (count == peoples.front())
            {
                peoples.pop();
                count++;
            }
            else
            {
                int tmp = peoples.front();
                peoples.pop();
                golmok.push(tmp);
            }
        }

        int ps = peoples.size();
        int gs = golmok.size();
        if(prevpeoples == ps && prevgolmok == gs)
        {
            cout << "Sad";
            return 0;
        }
    }

    cout << "Nice";

    return 0;
}