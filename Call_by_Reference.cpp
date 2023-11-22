//********* CALL BY REFERENCE *************


//********** One Method is by swapping the address (means swapping the address ) ***********
/*
#include <iostream>
using namespace std;

void swap (int &a,int &b) 
{
    int temp=a;
    a=b;
    b=temp;
}


//   void swap (int a,int b)            // CALL BY VALUE
//  {
//    int temp=a;                      // This function will not swap a and b
//    a=b;
//    b=temp;
//  }


int main()
{
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x,y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}

*/
//********** Second Method is by giving address in main and then dereferencing in SWAP function ***********


#include <iostream>
using namespace std;

void swap (int *a,int *b)
{
    int temp=*a;
    *a=*b;
   *b=temp;
}
int main()
{
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(&x,&y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
