#include<bits/stdc++.h>
using namespace std;

int *func(int n);

int main()
{
    int n;
    cin>>n;

    int *arr = func(n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
int *func(int n) {
    int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    return arr;
}