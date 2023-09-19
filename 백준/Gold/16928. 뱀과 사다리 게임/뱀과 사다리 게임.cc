#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

map <int,int> Sadari;
int N,M;
bool visited[101];

void Search(int p, queue<int>& bfs)
{
	if(visited[p])
        return;
    
    visited[p] = true;
    bfs.push(p);
}

int BFS()
{
    queue<int> bfs;
    bfs.push(Sadari[1]);
    visited[Sadari[1]] = true;

    int answer = 0;
    while (bfs.empty() == false)
    {
        int size = bfs.size();
        while (size--)
        {
            int tmp = bfs.front();
            bfs.pop();
            if(tmp == 100)
            {
                return answer;
            }

            for (int i = 1; i <= 6; i++)
            {
                Search(Sadari[tmp + i], bfs);
            }
        }
        answer++;
    }

    return -1;
}

int main()
{
    fastio;

    cin >> N >> M;
    int s, e;
    for(int i = 1; i<=100; i++)
    {
        Sadari[i] = i;
    }

    for(int i = 0; i < N + M; i++)
    {
        cin >> s >> e;
        Sadari[s] = e;
    }

    cout << BFS();

    return 0;
}