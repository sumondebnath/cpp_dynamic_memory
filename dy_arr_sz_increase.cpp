#include<bits/stdc++.h>
using namespace std;

int main()
{       //create dynamic arr
    int *arr = new int[5];
        //input dynamic arr size 5
    for(int i=0; i<5; i++) {
        cin>>arr[i];
    }
            //output dynamic arr
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
            //create new dynamic ar size 9
    int *ar = new int[9];
            // copy dynamic arr to ar
    for(int i=0; i<5; i++) {
        ar[i] = arr[i];
    }
    cout<<endl;
    ar[5] = 60;
    ar[6] = 70;
    ar[7] = 80;
    ar[8] = 90;
        // print dynamic ar size 9
    for(int i=0; i<9; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
        // delete dynamic arr
    delete[] arr;
   // arr = NULL;
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}