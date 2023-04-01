#include<iostream>
using namespace std;
int linear_search(int arr[],int n);
int main()
{
    int arr[10];
    int i,n,count=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count=linear_search(arr,n);
    cout<<"enter the no. of comparisons"<<endl;
    cout<<count;
}
int linear_search(int arr[],int n)
{
    int key,i,count=0,flag=0;
    cout<<"enter the value of key"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    {
        count++;
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
       
    }
    if(flag==0)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"element found"<<endl;
    }
    return count;
}