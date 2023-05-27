#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        //dynamic arry declearation.
    int *arr = new int[n]; //{10, 20, 30, 40, 50}; // line array declearation.
      // input array
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
        //output array
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}