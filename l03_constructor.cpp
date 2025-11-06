#include <iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    
    public:
        Point()    // default constructor
        {
            x = 0;
            y = 0;
            cout << "Default constructor called" << endl;
        }

        Point(const int &xValue, const int &yValue) // constructor with parameters
        {
            x = xValue;
            y = yValue;
            cout << "Constructor with parameters called" << endl;
        }

        void print() 
        {
            cout << "Point: (" << x << ", " << y << ")" << endl;
        }
};

int main() 
{
    Point p1;            // for default constructor 
    Point p2(5, 7);      // for constructor with parameters

    p1.print();
    p2.print();

    return 0;
}

