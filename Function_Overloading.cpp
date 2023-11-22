/*Function overloading is a process to make more than one function with the same name but different parameters,
 numbers, or sequence. */
#include <iostream>
using namespace std;

int sum(float a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    return 0;
}

/*
OUTPUT

Using function with 2 arguments
The sum of 3 and 6 is 9

Using function with 3 arguments
The sum of 3, 7 and 6 is 16
*/