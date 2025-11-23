#include <iostream>
using namespace std;
class Point2D{
	int x;
	int y;
	public:
		Point2D():x(0),y(0){ cout<<"Point2D Def. Cons."<<endl;}
		Point2D(int x1,int y1):x(x1),y(y1){	cout<<"Point2D Cons."<<endl;}
		void setX(int x1){ x = x1;}
		void setY(int y1){ y = y1;}
		int getX(){return x;}
		int getY(){return y;}
		~Point2D(){cout<<"Point2D destrcutor"<<endl;	}
};

class Point3D: public Point2D{
	int z;
	public:
		Point3D():z(0){	cout<<"Point3D Def. Cons."<<endl;}
		Point3D(int x1,int y1,int z1):Point2D(x1,y1),z(z1){cout<<"Point3D Cons."<<endl;	}
		void setZ(int z1){z= z1;	}
		int getZ(){return z;}
		~Point3D(){	cout<<"Point3D destrcutor"<<endl;}
};

int main(){
	
	Point3D p1;//Default Constructor	
	p1.setX(10);
	p1.setY(12);
	p1.setZ(25);
	p1.getX();
	p1.getY();
	p1.getZ();
	return 0;
}
