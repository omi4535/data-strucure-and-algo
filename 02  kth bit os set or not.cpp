#include <bits/stdc++.h>

using namespace std;
void using_left_shift(int n, int k)
{
    if ((n & (1 << (k - 1))) != 0)
        cout << "yes";
    else

        cout << "no";
}
void using_right_shift(int n, int k)
{
    if ((n >> (k - 1)) & 1 == 1)
        cout << "yes";
    else
        cout << "no";

    /*\.\.\\
    .
    .

    .



    .
    .
    .
    .
    .

    .
    .
    .*/
}
int main()
{
    int n, k;
    cin >> n >> k;

    using_left_shift(n, k);
    using_right_shift(n, k);
    return 0;
}
