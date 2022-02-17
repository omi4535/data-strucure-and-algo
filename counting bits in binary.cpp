#include<bits/stdc++.h>
using namespace std;

void navie_solution(int n)
{
    // time complexity is theta(total bits in binary)
    int count;
    while(n>0)
    {
       if(n%2!=0)
            count++;
        n=n/2;
    }
    cout<<"this is with navie soluntion "<<count<<endl;
}
void standard_algo(int n)
{
    // time complexity is theta(no of set bits)
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    cout<<"this is with standard soluntion "<<res<<endl;
}

void lookup_table_solution(int n)
{
    int res=0;
    void fill_table()
    {
        table[0]=0;
        for(int i=1;i<256;i++)
        {
            table[i]=(i&1)+table[i/2];
        }
    }
}
int main()
{
    int n;
    cin>>n;
    navie_solution(n);
    standard_algo(n);

    return 0;
}
