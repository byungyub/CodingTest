#include <iostream>
#include <deque>
#include <string>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

int DP[201][201];

int main()
{
    fastio;

    int N, K;
    cin >> N >> K;

    for(int i = 1; i <= N; i++)
    {
        DP[i][1] = 1;
    }

    for(int i = 1; i <= K; i++)
    {
        DP[1][i] = i;
    }

    for(int y = 2; y <= N; y++)
    {
	    for(int x = 2; x <= K; x++)
	    {
            DP[y][x] = (DP[y - 1][x] + DP[y][x - 1]) % 1000000000;
	    }
    }

    cout << DP[N][K];

    return 0;
}