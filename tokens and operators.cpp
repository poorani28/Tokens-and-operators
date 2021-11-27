//1.To find size of int,float,double,char 
#include<iostream>
using namespace std;

int main()
{
    cout<<"size of char: "<< sizeof(char) << "byte"<<endl;
    cout<<"size of int: "<< sizeof(int) << "bytes"<<endl;
    cout<<"size of float: "<< sizeof(float) << "bytes"<<endl;
    cout<<"size of double: "<< sizeof(double) << "bytes"<<endl;
  
    return 0;
}


//2.To find product of two numbers entered by users
#include <iostrea>
using namespace std;

int main()
{
    double num1,num2, product;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    product = num1 * num2;
    cout << "product = " << product;
  
  return 0;
}
  
  


