#include <iostream>
using namespace std;
  
//Recursive function to find factorial of given number

int factorialOfNumber(int n)
{
    if (n == 0)
        return 1;
    return n * factorialOfNumber(n - 1);
}
  
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout << "Factorial of "<< num << " is " << factorialOfNumber(num) << endl;
    return 0;
}

