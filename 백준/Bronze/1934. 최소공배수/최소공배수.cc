#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

vector<int> sosus;
bool checkInt[45001];
void Sosu()
{

    for (int i = 2; i <= 45000; i++)
    {
        if (checkInt[i])
            continue;

        sosus.push_back(i);
        for (int k = i; k <= 45000; k += i)
        {
            checkInt[k] = true;
        }
    }
    sosus.push_back(45000);
}

int main()
{
    fastio;
    int T;
    cin >> T;
    Sosu();
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int flag = max(a, b);
        int index = lower_bound(sosus.begin(), sosus.end(), flag) - sosus.begin();

    	int answer = 1;
        for (int i = index; i >= 0; i--)
        {
            while (a % sosus[i] == 0 && b % sosus[i] == 0)
            {
                a /= sosus[i];
                b /= sosus[i];
                answer *= sosus[i];
            }
        }

        cout << answer * a * b << '\n';
    }

    return 0;
}