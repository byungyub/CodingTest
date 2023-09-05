#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 666;; i++)
    {
        string tmp = to_string(i);
        if(tmp.find("666") != string::npos)
        {
            N--;
            if(N==0)
            {
                cout << i;
                return 0;
            }
        }
    }
    
    
    return 0;
}