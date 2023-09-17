#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

vector<int> sosus;
vector<bool> checkInt;
void Sosu()
{
    checkInt.resize(1000001);
    for (int i = 2; i <= 1000000; i++)
    {
        if (checkInt[i])
            continue;

        sosus.push_back(i);
        for (int k = i; k <= 1000000; k += i)
        {
            checkInt[k] = true;
        }
    }
    sosus.push_back(1000000);
}

int main()
{
    fastio;
    int T;
    cin >> T;
    Sosu();
    while (T--)
    {
        int input;
        cin >> input;

        int Half = input / 2;
        int answer = 0;
        for(int i = 0; i<sosus.size(); i++)
        {
	        if(Half < sosus[i])
                break;

            int sub = input - sosus[i];
            int findNum = *lower_bound(sosus.begin(), sosus.end(), sub);
            if(sosus[i] + findNum == input)
            {
                answer++;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}