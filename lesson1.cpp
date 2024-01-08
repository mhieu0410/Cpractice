#include <iostream>

using namespace std;

double calculatorTriangleArea( double height, double base){
return (height*base)/2;
}
int main()
{
    double height, base, area;
    cout<<" enter height of triangle:"<<endl;
    cin>>height;
    cout<<" enter base of triangle:"<<endl;
    cin>>base;
    
    area = calculatorTriangleArea(height,base);
    cout<<" the triangle area:"<<area<<endl;
   
    return 0;
}


//Write a function that takes the base and height of a triangle and return its area.