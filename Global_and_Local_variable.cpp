//*************** Global and Local Variable ***************
#include <iostream>
using namespace std;
int a = 20; // global variable

void func()
{
    // here no local variable declare and this function is called in another function so here gloabal variable came into picture
    cout << "value of a :" << a;
}
int main()
{
    int a = 10;
    // cout<<"local variable :"<<a;
    func();
    return 0;
}


//*************** Scope Resolution ****************

// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local
// variable with same name
#include<iostream>
using namespace std;
 
int x; // Global x
 
int main()
{
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x;
return 0;
}