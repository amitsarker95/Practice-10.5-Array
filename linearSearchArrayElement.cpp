#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int value,index[n];
    memset(index,-1,sizeof(index));
    cout<<"Enter the value do you want search : ";
    cin>>value;
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        if(value == arr[i])
        {
            index[i]= i;
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout<<"NOT FOUND"<<endl;
    }
    cout<<"FOUND at index position : ";
    for(int i=0;i<n;i++){
        if(index[i] != -1){
            cout<<" "<<index[i];
            if(i != n-1){
                cout<<",";
            }
        }
    }


    return 0;
}
