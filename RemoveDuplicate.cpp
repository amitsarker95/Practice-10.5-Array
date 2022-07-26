#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(int* arr, int n)
{

    vector<int> temp;

    for (int i = 0; i < n; i++)
    {

        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            temp.push_back(arr[i]);

    }
    n = temp.size();
    for (int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
        return n;

}

int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    cout << "Input Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    n = remove_duplicates(arr, n);

    cout << "Output Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

}
