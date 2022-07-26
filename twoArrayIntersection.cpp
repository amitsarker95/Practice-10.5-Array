#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cout<<"Enter the fast array size : ";
cin>>n;
int arrA[n];
for(int i=0;i<n;i++){
    cin>>arrA[i];
}
cout<<"Enter the second array size : ";
cin>>m;
int arrB[m];
for(int i=0;i<m;i++){
    cin>>arrB[i];
}
bool isFound = false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arrA[i] == arrB[j]){
            cout<<arrA[i]<<" ";
            isFound = true;
        }
    }
}

if(!isFound){
    cout<<"Empty set"<<endl;
}

return 0;
}
