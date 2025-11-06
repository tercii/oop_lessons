#include <iostream>
#include <cstring>  // for strlen and strcpy
#include <cmath>    // for pow

using namespace std;

class Resistor
{
    // default private:
    int value;
    int tolerance;
    char *c1;
    char *c2;
    char *c3;
    char *c4;
    int getColorValue(const char *c)
    {
        if (strcmp(c, "black") == 0) return 0;
        else if (strcmp(c, "brown") == 0) return 1;
        else if (strcmp(c, "red") == 0) return 2;
        else if (strcmp(c, "orange") == 0) return 3;
        else if (strcmp(c, "yellow") == 0) return 4;
        else if (strcmp(c, "green") == 0) return 5;
        else if (strcmp(c, "blue") == 0) return 6;
        else if (strcmp(c, "violet") == 0) return 7;
        else if (strcmp(c, "grey") == 0) return 8;
        else if (strcmp(c, "white") == 0) return 9;
        else if (strcmp(c, "gold") == 0) return 5; // multiplier of 0.1
        else if (strcmp(c, "silver") == 0) return 10; // multiplier of 0.01
    }
    public:
        Resistor()  // default constructor
        {
            cout << "default constructor called" << endl;
            c1 = new char[6];
            c2 = new char[6];
            c3 = new char[6];
            c4 = new char[5];
            strcpy(c1, "black");
            strcpy(c2, "black");
            strcpy(c3, "black");
            strcpy(c4, "gold");
            value = 0;
            tolerance = 5;
        }   
        
        void setC1(const char *c)
        {
            int boy = strlen(c);    // length of the input color name
            c1 = new char[boy + 1]; // allocate memory for the color name and assing it to c1
            strcpy(c1, c);          // copy the color name into c1
        }
        void setC2(const char *c)
        {
            int boy = strlen(c);    // length of the input color name
            c2 = new char[boy + 1]; // allocate memory for the color name and assing it to c2
            strcpy(c2, c);          // copy the color name into c2
        }
        void setC3(const char *c)
        {
            int boy = strlen(c);    // length of the input color name
            c3 = new char[boy + 1]; // allocate memory for the color name and assing it to c3
            strcpy(c3, c);          // copy the color name into c3
        }
        void setC4(const char *c)
        {
            int boy = strlen(c);    // length of the input color name
            c4 = new char[boy + 1]; // allocate memory for the color name and assing it to c4
            strcpy(c4, c);          // copy the color name into c4
        }
        void updateC1(const char *c)
        {
            delete[] c1; // free the previously allocated memory
            setC1(c);
        }
        void updateC2(const char *c)
        {
            delete[] c2; // free the previously allocated memory
            setC2(c);
        }
        void updateC3(const char *c)
        {
            delete[] c3; // free the previously allocated memory
            setC3(c);
        }
        void updateC4(const char *c)        
        {
            delete[] c4; // free the previously allocated memory
            setC4(c);
        }
        void calculate()
        {
            value = (getColorValue(c1) * 10 + getColorValue(c2)) * (pow(10, getColorValue(c3)));
            tolerance = getColorValue(c4);

            cout << "Resistor value: " << value << " ohms" << endl;
            cout << "Tolerance: ±" << tolerance << "%" << endl;
        }
        int getValue()
        {
            return value;
        }
        int getTolerance()
        {
            return tolerance;
        }

};

int main() {
    
    Resistor R;
    R.setC1("red");
    R.setC2("red");
    R.setC3("brown");
    R.setC4("gold");
    R.calculate();
    cout<<"value: "<<R.getValue()<<" ohm, tolerance: "<<R.getTolerance()<<"%"<<endl; // may not be calculated yet

    return 0;
}

// int Resistor::getColorValue(const char *c)
// {
//     if (strcmp(c, "black") == 0) return 0;
//     else if (strcmp(c, "brown") == 0) return 1;
//     else if (strcmp(c, "red") == 0) return 2;
//     else if (strcmp(c, "orange") == 0) return 3;
//     else if (strcmp(c, "yellow") == 0) return 4;
//     else if (strcmp(c, "green") == 0) return 5;
//     else if (strcmp(c, "blue") == 0) return 6;
//     else if (strcmp(c, "violet") == 0) return 7;
//     else if (strcmp(c, "grey") == 0) return 8;
//     else if (strcmp(c, "white") == 0) return 9;
//     else if (strcmp(c, "gold") == 0) return -1; // multiplier of 0.1
//     else if (strcmp(c, "silver") == 0) return -2; // multiplier of 0.01
// }