#include<bits/stdc++.h>
using namespace std;
int n;
void insert(int a[],int size,int value)
{
    a[size]=value;
    n=size+1;
}

void deleteelement(int a[],int size,int index)
{
    for(int i=index;i<size;i++)
    {
        a[i]=a[i+1];
    }
    n=size-1;
}

void maxheap(int a[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        int j=i;
        while(j>=1)
        {
            int parent=j/2;
            if(a[parent]<a[j])
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
    int val,del;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxheap(a,n);
    cout<<endl<<"enter element you want to insert: ";
    cin>>val;
    insert(a,n,val);
    maxheap(a,n);
    
    cout<<endl<<"enter index you want to delete: ";
    cin>>del;
    deleteelement(a,n,del);
    maxheap(a,n);
}
