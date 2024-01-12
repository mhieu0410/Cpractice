#include <iostream>

using namespace std;

int convertMinutesToSecond ( int minutes){
    return ( minutes * 60);
}

int main(){
    int minutes, seconds;
    cout<<" enter minutes:"<<endl;
    cin>>minutes;
    seconds= convertMinutesToSecond(minutes);
    cout<<" seconds: "<<seconds<<endl;
    
    return 0; 
}


//Create a function that takes two numbers as arguments and returns their sum.
//Write a function that takes an integer minutes and converts it to seconds.
//Create a function that takes the age in years and returns the age in days.
