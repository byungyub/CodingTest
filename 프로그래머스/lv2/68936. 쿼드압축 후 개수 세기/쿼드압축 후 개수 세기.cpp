#include <string>
#include <vector>

using namespace std;

vector<int> answer;
struct Pos
{
    int x = 0;
    int y = 0;
};

void DFS(Pos start, int lenght, vector<vector<int>>& arr)
{
    bool bOne = true;
    bool bZero = true;
    for (int y = start.y; y < start.y + lenght; y++)
    {
        for (int x = start.x; x < start.x + lenght; x++)
        {
            if(arr[y][x] == 0)
            {
                bOne = false;
            }
            if(arr[y][x] == 1)
            {
                bZero = false;
            }
        }
    }
    
    if(bOne)
    {
        answer[1]++;
        return;
    }
    if(bZero)
    {
        answer[0]++;
        return;
    }
    
    DFS(start, lenght/2, arr);
    DFS({start.x,start.y+lenght/2},lenght / 2, arr);
    DFS({start.x+lenght/2,start.y},lenght / 2, arr);
    DFS({ start.x + lenght / 2,start.y + lenght / 2 }, lenght / 2, arr);
}

vector<int> solution(vector<vector<int>> arr) {
    answer.push_back(0);
    answer.push_back(0);

    Pos start = { 0,0 };
    int n = arr.size();

    DFS(start, n, arr);

    return answer;
}