//BINARY SEARCH AND FINDING NO. OF COMPARISONS
#include<iostream>
using namespace std;
int binary_search(int arr[],int n);
int main()
{
    int arr[10];
    int i,n,count;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count=binary_search(arr,n);
    cout<<"enter the no. of comparisons"<<endl;
    cout<<count;
}
int binary_search(int arr[],int n)
{
    int key,i,mid,s=0,e=n-1,count=0;
    cout<<"enter the value of key"<<endl;
    cin>>key;
    mid=(s+e)/2;
    while(s<=e)
    {
        count++;
      if(arr[mid]==key)
      {
        cout<<"element found"<<endl;
        break;
      }
      else if(arr[mid]>key)
      {
        e=mid-1;
      }
      else if(arr[mid]<key)
      {
        s=mid+1;
      }
      mid=(s+e)/2;
    }
    return count;
}
    