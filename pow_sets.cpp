#include <bits/stdc++.h>
using namespace std;
void pow_set(string str)
{
    int n = str.length();
    int powset = pow(2, n);
    for (int i = 0; i < powset; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << str[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{

    string str;
    cin >> str;
    pow_set(str);
}