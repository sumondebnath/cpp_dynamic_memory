#include<bits/stdc++.h>
using namespace std;
//class & student-> data type
class student {
    public: // access modifiers & must be used colone
       // objects
        char name[20];
        int roll;
        int class_Name;
        char section;
        float grade;
}; // here must be semicolone

int main()
{   // student data type
    student sumon; // sumon variable
            // object initializetion
        char su_name[20] = "Sumon Debnath";
        strcpy(sumon.name, su_name);
        sumon.roll = 13;  // here dot( . ) is a operator
        sumon.class_Name = 12;  // for access class objects
        sumon.section = 'A';
        sumon.grade = 3.75;
    // create second class & objects     
    student monu;
        char mo_name[20] = "Manu Debnath";
        strcpy(monu.name, mo_name);
        monu.roll = 33;
        monu.class_Name = 11;
        monu.section = 'B';
        monu.grade = 3.39;
           // now output class and objects...
           //first class and objects..
    cout<<sumon.name<<endl;
    cout<<sumon.class_Name<<endl;
    cout<<sumon.roll<<endl;
    cout<<sumon.section<<endl;
    cout<<sumon.grade<<endl;
    cout<<endl<<endl;
    // second class and objects.. 
    cout<<monu.name<<endl;
    cout<<monu.class_Name<<endl;
    cout<<monu.roll<<endl;
    cout<<monu.section<<endl;
    cout<<monu.grade<<endl;
    
    return 0;
}