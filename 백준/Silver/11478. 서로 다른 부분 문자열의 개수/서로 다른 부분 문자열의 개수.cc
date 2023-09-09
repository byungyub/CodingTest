#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,bool> datas;
    string input;
    cin >> input;
    
    for(int i = 0; i<input.size();i++)
    {
        string tmp = "";
        for(int k = i; k<input.size();k++)
        {
            tmp += input[k];
            datas[tmp];
        }
    }
    
    cout << datas.size();
    
    
    return 0;
}