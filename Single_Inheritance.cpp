#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setdata();
    int getData1();
    int getData2();
};

void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : public Base // if visibility is done private then we can not able to call setdata() as in private mode the public member function of base class will become private in derived class
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}
int main()
{
    Derived obj; // derived class object
    obj.setdata();
    obj.process();
    obj.display();

    return 0;
}

// Private Member does not inherit