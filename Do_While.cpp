//***************** Do While *********

#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int j=6;
    do {
        cout<<"6 * "<<i<<" ="<<j<<endl;
       j=j+6;
       i++;
    } while (i<=10 && j<100 );
    return 0;
}
