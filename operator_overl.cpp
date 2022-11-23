#include <iostream>

class Complex
{
    private:
      float m_real;
      float m_imag;
    public:
    Complex()
        : m_real(0)
        , m_imag(0)
    {
    }
    Complex(int real, int imag)
        : m_real(real)
        , m_imag(imag)
    {
    }
    
       // Operator overloading
       Complex operator + (const Complex& other)
       {
           Complex temp;
           temp.m_real = m_real + other.m_real;
           temp.m_imag = m_imag + other.m_imag;

           return temp;
       }
       
        void operator += (const Complex& right)
        {
           m_real = m_real + right.m_real;
           m_imag = m_imag + right.m_imag;
        }
        
        bool operator ==(const Complex& right)
        {
            bool flag = false;
            if ( (m_imag == right.m_imag) && (m_real == right.m_real) )
                flag = true;
            
            return flag;
        }
       
        void operator = (const Complex& other)
        {
           m_real = other.m_real;
           m_imag = other.m_imag;
        }
        
        /*Complex& operator++(const Complex& i, int) 
        {
        i.m_real++;
        return i;
        }*/

       void output()
       {
           if(m_imag < 0)
               std::cout << "Output Complex number: "<< m_real << m_imag << "i" << std::endl;
           else
               std::cout << "Output Complex number: " << m_real << "+" << m_imag << "i" << std::endl;
       }
};

int main()
{
    Complex z1(1, 5);
    Complex z2(2, -3);
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
