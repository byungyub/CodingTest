#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);

int N;

vector<int> sosus;
vector<int> datas;
vector<int> datas2;

void Sosu(int Num)
{
	vector<bool> visited;
	visited.resize(Num + 1);
	for(int i = 2; i <= Num; i++)
	{
		if(visited[i])
			continue;

		visited[i] = true;
		sosus.push_back(i);
		for(int k = i; k<= Num; k+=i)
		{
			visited[k] = true;
		}
	}
}

bool bCheck(int num)
{
	for(int i = 0; i<datas.size(); i++)
	{
		if(datas[i] % num != 0)
			return false;
	}

	return true;
}

int main()
{
	fastio;

	cin >> N;

	int before, after;
	cin >> before;

	int min_num = INT32_MAX;
	for (int i = 1; i < N; i++)
	{
		cin >> after;
		datas.push_back(after - before);
		datas2.push_back(after - before);
		min_num = min(min_num, after - before);
		before = after;
	}

	Sosu(min_num);

	int maxsqr = 1;
	for(int i = 0; i < sosus.size(); i++)
	{
		while (bCheck(sosus[i]))
		{
			maxsqr *= sosus[i];
			for(int k = 0; k<datas.size(); k++)
			{
				datas[k] /= sosus[i];
			}
		}
	}

	int answer = 0;
	for(int i = 0; i<datas2.size(); i++)
	{
		answer += datas2[i] / maxsqr - 1;
	}

	cout << answer;
}