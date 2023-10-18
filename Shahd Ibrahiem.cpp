#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Defining the variablers
    int number1, number2, product=1, sum=0 ;
    
    //Receiving inputs from user
    cin>>number1>>number2 ;
    
    //Calculate results
    product = number1 * number2 ;
    sum = number1 + number2 ;
    
    //Printing outputs
    cout<<"The result of multiplying two numbers equal : "<<product<<"\n";
    cout<<"The result of summation two numbers equal : "<<sum;

    return 0;
}
