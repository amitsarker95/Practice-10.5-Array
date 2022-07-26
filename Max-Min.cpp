#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the size of this array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int maxValue = arr[0];
int minValue = arr[0];
int mx_index,min_index;

for(int i=0;i<n;i++){
    if(maxValue<arr[i]){
        maxValue = arr[i];
        mx_index = i;
    }else if(minValue>arr[i]){
         minValue = arr[i];
         min_index = i;
    }
}


cout<<"Max : "<<maxValue<<" Found in index : "<<mx_index<<endl<<"Min : "<<minValue<<" Found in index : "<<min_index;



return 0;
}
