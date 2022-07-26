#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
int sum = 0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<"Total sum of this array : "<<sum;
return 0;
}
