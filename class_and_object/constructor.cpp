#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
        char name[20];
        int roll;
        float gpa;
        char section;
     // constructor function
     // call automatically   
    Student(char n[], int r, float gp, char sec) {

        strcpy(name, n);
        roll = r;
        gpa = gp;
        section = sec;
    }
};

int main()
{
        // constructor function pass value automatically
    char nam[20] = "Sumon Debnath";
    Student sumon(nam, 13, 3.75, 'A'); 
        // print value by constructor
    cout<<sumon.name<<endl;
    cout<<sumon.roll<<endl;
    cout<<sumon.gpa<<endl;
    cout<<sumon.section<<endl;
        // constructor function 
    char nm[20] = "Manu Debnath";
    Student manu(nm, 33, 3.39, 'B');
    cout<<manu.name<<endl;
    cout<<manu.roll<<endl;
    cout<<manu.gpa<<endl;
    cout<<manu.section<<endl;

    return 0;
}