#include<iostream>
using namespace std;
int main()
{
    int i,arr[10],n,ele,lb=0,ub,mid;
cout<<"Enter the no of elements you want in 1D matrix"<<endl;
cin>>n;
cout<<"Enter elements in the  1D matrix "<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"The  1D matrix is "<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<"Enter the element you want to search in  1D matrix "<<endl;
cin>>ele;
ub=n-1;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(ele==arr[mid])
    {
        cout<<"Term Found"<<endl;
    }
    else if(ele<arr[mid])
    {
        ub=mid-1;
    }
    else
    {
        lb=mid+1;
    }
    
}
    return 0;
}
