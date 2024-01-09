#include <iostream>

using namespace std;

double sumTwoNumbers( double number1, double number2){
return (number1 + number2);
}
int main(){
    double number1, number2, sum;
    cout<<"enter the number1:"<<endl;
    cin>>number1;
    cout<<"enter the number2:"<<endl;
    cin>>number2;
    sum = sumTwoNumbers(number1,number2);
    cout<<" the result: "<<sum<<endl;
    return 0; 
}


//Create a function that takes two numbers as arguments and returns their sum.
//Write a function that takes an integer minutes and converts it to seconds.
//Create a function that takes the age in years and returns the age in days.
