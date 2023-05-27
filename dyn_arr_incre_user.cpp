#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter M"<<endl;
    cin>>m;
    int *ar = new int[m];
    for(int i=0; i<n; i++) {
        ar[i] = arr[i];
    }
    for(int i=n; i<m; i++) {
        cin>>ar[i];
    }
    for(int i=0; i<m; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    cout<<"Delete Short Array."<<endl;
    delete[] arr;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}