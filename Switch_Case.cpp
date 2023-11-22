//************* Switch Case **************

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Type your age :" ;
    cin>>age;

    switch(age)
    {
        case 18:
        cout<<"you are 18 ";
        break;
        case 22:
        cout<<"you can come to the party ";
        break ;
        case 1:
        cout<<"yuo can not come to the party ";
        default:
        cout<<"invalid choice ";
        break;
    }

}