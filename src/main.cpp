#include <iostream>
#include "operator_overload.h"
#include "test.h"

int main()
{
    Complex z1(1, 5);
    Complex z2(2, -3);
	//test(a, b);
std::cout<<"\n Operator '+' "<< std::endl;
Complex result = z1 + z2 ;
result.output();

std::cout<<"\n Operator '+=' "<< std::endl;
z1 += z2 ;
z1.output();
z2.output();

std::cout<<"\n Operator '==' "<< std::endl;
if (z1==z2)
std::cout << "true" << std::endl;
else
std::cout << "false" << std::endl;

std::cout<<"\n Operator '=' "<< std::endl;
z1 = z2 ;
z1.output();
z2.output();

std::cout<<"\n Operator '==' "<< std::endl;
if (z1==z2)
std::cout << "true" << std::endl;
else
std::cout << "false" << std::endl;
    return 0;
}
