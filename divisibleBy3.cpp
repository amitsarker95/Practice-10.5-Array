#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the size of the array : ";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%3 == 0){
        arr[i] = -1 ;
    }
}
cout<<"Result of the array is : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}





return 0;
}
