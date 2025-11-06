#include <iostream>
using namespace std;

class point 
{
    /* default olarak private */
    // public:    /* disaridan erisime acik olur */
    // private:   /* disaridan erisime kapali olur (ic fonksiyonlar ile erisilebilir)*/
    // protected: /* miras yoluyla erisime acik olur (friend class or friend function)*/
	private:
		int x; // private
		int y; // private
	public:
		void assign();
		void move();
		void print();
		// set function
		void setX (int *x1)				{ 	x = *x1;cout<<"setx &"<<endl;			}
		void setX (int x1)				{ 	x = x1;cout<<"setx"<<endl;			}
		void setY (int &y1)				{	y = y1;cout<<"sety"<<endl;			}
		void setXY(int &x1, int &y1) 	{	x = x1;	y = y1;	cout<<"setxy"<<endl;}
		// get function
		int getX() 	{ return x; }
		int getY()	{ return y; }
};

int main(void)
{
    point p1; // point sinifindan p1 adli bir nesne olusturur
    cout << "control point" << endl;
    int x = 5;
    p1.assign();
    p1.print();
    p1.move();
    p1.print();

    p1.setX(7);
    p1.setX(&x);

    cout << "X: " << p1.getX() << " Y: " << p1.getY() << endl;
    return 0;
}

void point::move()
{
    cout << "Enter new x and y coordinates: ";
    cin >> x >> y;
}
void point::print()
{
    cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
}
void point::assign()
{
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;
}
