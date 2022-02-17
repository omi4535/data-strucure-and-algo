#include<bits/stdc++.h>
using namespace std;

void oddappering(int arr[],int n)
{
    int x=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    int sn=x&(~(x-1));
    for(int i=0;i<n;i++)
    {
        if((arr[i]&sn)!=0)
            res1=res1^arr[i];
        else
            res2=res2^arr[i];
    }
    cout<<res2<<" "<<res1;
}

int main()
{

    int arr[]={1,1,2,3,3,4,4,5,5,6,9,9};
    int n=(sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count%2!=0)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    oddappering(arr,n);
}
