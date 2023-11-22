//******************* Struct ,Enums and Unions *****************

#include <iostream>
using namespace std;

struct employee
{

    int id;
    char favchar;
    int salary;
};
/*
int main()
{
struct employee rahi;
rahi.id=32;
rahi.favchar='r';
rahi.salary=12342232;

cout<<"The id is "<<rahi.id<<endl;
cout<<"The id is "<<rahi.favchar<<endl;
cout<<"The id is "<<rahi.salary<<endl;
     return 0;
}

//Shortcut of structure
typedef struct employee

The typedef is a keyword that is used to provide existing data types with a new name. The C typedef keyword is used to redefine
the name of already existing data types. When names of datatypes become difficult to use in programs,
typedef is used with user-defined datatypes,which behave similarly to defining an alias for command
{

    int eId; //4
    char favChar; //1
    float salary; //4
} ep;
int main(){
ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}

// Union
union money
{

    int rice; //4
    char car; //1
    float pounds; //4
};
int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}


//Enum
int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    return 0;
}

*/