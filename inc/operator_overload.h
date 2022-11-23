#ifndef ___OPERATOR_OVERLOAD__
#define __OPERATOR_OVERLOAD__

class Complex
{
    private:
      	float m_real;
      	float m_imag;
    public:
    	Complex();
    	Complex(int real, int imag);
    // Operator overloading
    	Complex operator + (const Complex&);
    	void operator += (const Complex&);
        bool operator ==(const Complex&);
	void operator = (const Complex&);
	void output();
};

#endif //__OPERATOR_OVERLOAD__
