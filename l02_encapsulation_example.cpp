#include <iostream>
#include <cmath>
using namespace std;

enum 
{
    siyah = 0,
    kahverengi,
    kirmizi,
    turuncu,
    sari,
    yesil,
    mavi,
    mor,
    gri,
    beyaz
}typedef renkler;

class direnc
{
    private:
        char c1;
        char c2;
        char c3;
        // char c4;  /* add for tolerance */
        int value;

    public:
        void setValue(char r, char m, char y /*, char s*/)
        {
            c1 = r;
            c2 = m;
            c3 = y;
            // c4 = s;
            // value = v;
            value = (c1 * 10 + c2) * static_cast<int>(pow(10, c3));
        }
        int getValue(void)
        {
            return value;
        }
        void printColour()
        {
            cout << "Renkler: " <<  (renkler)c1 << " " << (renkler)c2 << " " << (renkler)c3 << " " << endl;
        }
        void printValue()
        {
            cout << "Direnc degeri: " << value << " ohm" << endl;
        }
};

int main(void)
{
    direnc r1;
    cout << "Direnc degeri hesaplama" << endl;
    
    r1.setValue(yesil, mor, kirmizi);
    r1.printColour();

    int v = r1.getValue();
    cout << "Direnc degeri: " << v << " ohm" << endl;
    // r1.printValue();

    return 0;
} 




