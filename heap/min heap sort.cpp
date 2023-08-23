#include<bits/stdc++.h>
using namespace std;
void minheap(int a[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        int j=i;
        while(j>=1)
        {
            int parent=j/2;
            if(a[parent]>a[j])
            {
                swap(a[parent],a[j]);
                j=parent;
            }
            else
            {
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minheap(a,n);
}
