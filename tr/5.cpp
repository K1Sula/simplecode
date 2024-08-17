#include <iostream>
#include <vector>
using namespace std;
// tsk in codeforce
int main()
{
    int n;
    vector<string> v;
    cin >> n;
    char arr[8][8];
    for (int i = 0; i < n; i++)
    {

        for (int t = 0; t < 8; t++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[t][j];
            }
        }
        string s = "";
        for (int t = 0; t < 8; t++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (arr[t][j] != '.')
                {
                    s += arr[t][j];
                }
            }
        }
        v.push_back(s);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}