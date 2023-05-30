#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        // difine how many array in need counting
        // and initialize all of them zero.
    int frequency_array[26] = {0};
        // now how many charecter we need and input them
    for(int i=0; i<n; i++) {
        char a;
        cin>>a;
                // and frequency array increaseing
                // here [a-'a'] is [a-97]
                // means i=0 & i<=25
        frequency_array[a - 'a']++;
    }
        // now using loop 'a' to 'z' and it is charter type
    for(char i='a'; i<='z'; i++) {
            // now condition is frequ_arr of 'i' / a count grater than  '0' zero or not
            // if it true print them all 
        if(frequency_array[i - 'a'] > 0) {
                //now using loop to print counting number
            for(int j=0; j < frequency_array[i - 'a']; j++) {
                     // and print.
                cout<<i;
            }
        }
    }
    return 0;
}