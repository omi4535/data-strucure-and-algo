#include<bits/stdc++.h>
using namespace std;
bool ispow2(int n)
{

    if(n==0)
        return false;
    while(n!=1)
    {
         if(n&1==1)  //here we check no is odd or not if 1 then odd or even
            return false;
         n=n/2;
    }
    return true;
}
bool efficient(int n)
{
    if(n==0)
        return false;
    return ((n&(n-1))==0);
}
int main()

{
    cout<<ispow2(4);
    cout<<efficient(4);
    return 0;
}

