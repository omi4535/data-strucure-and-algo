
#include<bits/stdc++.h>
using namespace std;
int odd_occuring_in_arr(int arr[],int n)
{
    for(int i=0;i<n; i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }


        if(count%2==1)
            return arr[i];
    }
        return NULL;
}

int efficient(int arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result=result^arr[i];
    }
    return result;
}

int variation_que(int arr1[],int n)
{
    int result=arr1[0];
    for(int i=1;i<n;i++)
    {
        result=result^arr1[i];
    }
    int result1=0;
    for(int i=1;i<=n;i++)
    {
        result1=result1^i;
    }
    return result^result1;
}
int main()
{
    int arr[]={1,2,2,1,3,3,3,3,4};
    int n=(sizeof(arr)/sizeof(arr[1]));
    cout<<odd_occuring_in_arr(arr,n);
    cout<<endl;
    cout<<efficient(arr,n);
    cout<<endl;
    int arr1[]={1,3,4,2,6};
    n=(sizeof(arr1)/sizeof(arr1[1]));

    cout<<variation_que(arr1,n);

    return 0;
}
