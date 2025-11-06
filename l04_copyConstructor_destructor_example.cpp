#include <iostream>
#include <cstring> // for strlen and strcpy

using namespace std;

class Complex
{
    int re;
    int im;
    public:
        Complex() //default constructor
        {
            re = 0;
            im = 0;
        }
        Complex(int real, int imag) // constructor with parameters
        {
            re = real;
            im = imag;
        }
        Complex(int real) // constructor with parameters
        {
            re = real;
            im = 0;
        }
        /* will give error because of ambiguity 
        Complex(int i) // constructor with parameters
        {
            re = 0;
            im = i;
            cout << "Parameterized constructor called" << endl;
        }
        */
       Complex(const Complex &c) // copy constructor
        {
            re = c.re;
            im = c.im;
            // cout << "Copy constructor called" << endl;
        }
        ~Complex() // destructor
        {
            // cout<<"Complex number: "<<re<<" + "<<im<<"i destructor called"<<endl;
        }
        Complex operator=(const Complex &c) // assign operator
        {
            re = c.re;
            im = c.im;
            // cout << "Assign operator called" << endl;
            return *this; // return reference to this object
        }
        Complex operator+(const Complex &c) // addition operator
        {
            Complex temp;
            temp.re = re + c.re;
            temp.im = im + c.im;
            // cout << "Addition operator called" << endl;
            return temp; // return by value
        }
        Complex operator-(const Complex &c) // subtraction operator
        {
            Complex temp;
            temp.re = re - c.re;
            temp.im = im - c.im;
            // cout << "Subtraction operator called" << endl;
            return temp; // return by value
        }

        Complex operator*(const Complex &c) // multiplication operator
        {
            Complex temp;
            temp.re = re * c.re;
            temp.im = im * c.im;
            // cout << "Multiplication operator called" << endl;
            return temp; // return by value
        }

        Complex operator/(const Complex &c) // division operator
        {
            Complex temp;
            if(c.re == 0 )
                temp.re = 0;
            else
                temp.re = re / c.re;

            if(c.im == 0 )
                temp.im = 0;
            else
                temp.im = im / c.im;

            // cout << "Division operator called" << endl;
            return temp; // return by value
        }

        Complex operator%(const Complex &c)
        {
            Complex temp;
            temp.re = re % c.re;
            temp.im = im % c.im;
            // cout << "Mode operator called" << endl;
            return temp; // return by value
        }
        
        Complex& operator()()
        {
            cout<<"re: " <<re<<" im: "<<im<<endl;
            return *this;
        }

        Complex & operator++() // preincrement
        {
            re++;
            im++;
            return *this;
        }

        Complex operator ++(int) // postincrement
        {
            Complex temp = *this;
            re++;
            im++;
            return temp;
        }

        Complex & operator--() // predecrement
        {
            re--;
            im--;
            return *this;
        }

        Complex operator --(int) // postdecrement
        {
            Complex temp = *this;
            re--;
            im--;
            return temp;
        }
};

int main()
{   
    Complex c1(5,2);
    c1();
    Complex c2(2,2);
    c2();
    Complex c3 = c1 + c2;
    c3();

    c2 = c3++;
    c2();

    c1 = ++c3;
    c1();

    return 0;
}