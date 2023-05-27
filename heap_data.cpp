#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int; // syntax

    *a=100; // value assign

    cout<<*a<<endl;
    cout<<sizeof(a)<<endl; // with out dereference size = 8
    cout<<sizeof(*a)<<endl; // with dereference size = 4
    
    return 0;
}