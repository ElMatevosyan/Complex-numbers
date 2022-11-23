#include <iostream>
#include "operator_overload.h"

Complex::Complex()
        : m_real(0)
        , m_imag(0)
    {
    }

Complex:: Complex(int real, int imag)
        : m_real(real)
        , m_imag(imag)
    {
    }
    
      // Operator overloading
Complex Complex:: operator + (const Complex& other)
       {
           Complex sum;
           sum.m_real = m_real + other.m_real;
           sum.m_imag = m_imag + other.m_imag;

           return sum;
       }
       
void Complex:: operator += (const Complex& right)
        {
           m_real = m_real + right.m_real;
           m_imag = m_imag + right.m_imag;
        }
        
bool Complex:: operator ==(const Complex& right)
        {
            bool flag = false;
            if ( (m_imag == right.m_imag) && (m_real == right.m_real) )
                flag = true;
            
            return flag;
        }
       
void Complex:: operator = (const Complex& other)
        {
           m_real = other.m_real;
           m_imag = other.m_imag;
        }
        
        /*Complex& operator++(const Complex& i, int) 
        {
        i.m_real++;
        return i;
        }*/

void Complex:: output()
       {
           if(m_imag < 0)
               std::cout << "Output Complex number: "<< m_real << m_imag << "i" << std::endl;
           else
               std::cout << "Output Complex number: " << m_real << "+" << m_imag << "i" << std::endl;
       }
