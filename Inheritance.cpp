
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
int id;
    float salary;

    Employee(int inpId,int sal)
    {
        id = inpId;
        salary = sal;
    }
    Employee() {}                 //Default Constructor is important
};

//Derived Class syntax
/*
class {{derived_class_name}} : {{visibility-mode}} {{base_class_name}}
{
    class members/methods/etc..
}
*/

/*
Note
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;            //as id is a private member of base class so it can not be inherited it will show error
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main()
{
    Employee harry(1,10000), rohan(2,5000);
    cout <<"The harry salary is : "<<harry.salary << endl;
    cout <<"The rohan salary is : "<<rohan.salary << endl;
    Programmer skillF(10);
    cout << "The language code is : "<<skillF.languageCode<<endl;
    //cout << skillF.id<<endl;
    //skillF.getData();
    return 0;
}























//command prompt :-curl ascii.live/parrot

