// *************** Factorial *************

/*
#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){             // Base Condition
        return 1;
    }
    return n * factorial(n-1);
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}
*/
//****************** Fibonacci Series *****************

#include <iostream>
using namespace std;

int fibo(int n){
if (n<=1)              //  if (n=1) will be wrong because this will run only for 1 not for other 
{                      //  value less than 1 like 0 ,-1 so we will get wrong answer
    return 1;
}
else {
return n+fibo(n-1);
}
}
int main()
{
    int x;
    cout<<"Enter the Number :"<<endl;
    cin>>x;
    cout<<"The fibonacci series is "<<fibo(x);
     return 0;
}