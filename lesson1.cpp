#include <iostream>

using namespace std;

int  convertAgeFromYearsToDays( int years){
    return ( years * 365);
}

int main(){
    int years, days, age;
    cout<<" how many years have you lived:"<<endl;
    cin>>years;
    days= convertAgeFromYearsToDays(years);
    cout<<" the number of days you have lived: "<< days <<" days"<<endl;
    
    return 0; 
}


//Create a function that takes two numbers as arguments and returns their sum.
//Write a function that takes an integer minutes and converts it to seconds.
//Create a function that takes the age in years and returns the age in days.
