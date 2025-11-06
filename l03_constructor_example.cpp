#include <iostream>
#include <cString>
#include <cmath>
using namespace std;
class Resistor{
	// default private
	int value;     // 1200 Ohm
	int tolerance; // 5% , 10%
	char *c1;  // Color 1 ->  "Black", "Red", "Yellow" -> (Red: "FF0000")
	char *c2;
	char *c3;
	char *c4;
	int getColorValue(const char *c){
		if(strcmp("Black",c)==0)	return 0;
		if(strcmp("Brown",c)==0)	return 1;
		if(strcmp("Red",c)==0)		return 2;
		if(strcmp("Orange",c)==0)	return 3;
		if(strcmp("Yellow",c)==0)	return 4;
		if(strcmp("Green",c)==0)	return 5;
		if(strcmp("Blue",c)==0)		return 6;
		if(strcmp("Purple",c)==0)	return 7;
		if(strcmp("Grey",c)==0)		return 8;
		if(strcmp("White",c)==0)	return 9;
		if(strcmp("Gold",c)==0)		return 5;
		if(strcmp("Silver",c)==0)	return 10;	
		if(strcmp("UnDefined",c)==0)	return -1;		
	}	
	public: 
		Resistor(){  // Default Constructor
			c1 = new char[10]; // Default UnDefined
			c2 = new char[10]; // Default UnDefined
			c3 = new char[10]; // Default UnDefined
			c4 = new char[10]; // Default UnDefined
			strcpy(c1,"UnDefined"); 
			strcpy(c2,"UnDefined");
			strcpy(c3,"UnDefined");
			strcpy(c4,"UnDefined");
			value = 0;
			tolerance = 0;
			cout<<"Default Constructor is called"<<endl;
		}
		Resistor(const char * cc1, const char *cc2, const char *cc3, const char *cc4){ // Constructor
			int len = strlen(cc1);
			c1 = new char[len+1];
			strcpy(c1,cc1);
			
			len = strlen(cc2);
			c2 = new char[len+1];
			strcpy(c2,cc2);
			
			len = strlen(cc3);
			c3 = new char[len+1];
			strcpy(c3,cc3);
			
			len = strlen(cc4);
			c4 = new char[len+1];
			strcpy(c4,cc4);	
			cout<<"Constructor is called"<<endl;
			calculate();								
		}
		Resistor(const char *c,int v, int t){  // Constructor
			int len = strlen(c);
			c1 = new char[len+1];
			strcpy(c1,c);
			value = v;
			tolerance = t;
		}
		Resistor(const char *cc1,const char *cc2, int v, int t){  // Constructor
			int len = strlen(cc1);
			c1 = new char[len+1];
			strcpy(c1,cc1);
			
			len = strlen(cc2);
			c2 = new char[len+1];
			strcpy(c2,cc2);
			value = v;
			tolerance = t;
		}		
		void setC1(const  char *c){
			delete [] c1;  // Free allocated memory first
			int boy = strlen(c); // Length of the input color name
			c1 = new char[boy+1];// Allocate memory for the color name and assing it to c1;
			strcpy(c1,c);  // Copy c to c1	
			cout<<"setC1 is called"<<endl;	
		}
		void setC2(const  char *c){
			delete [] c2;  // Free allocated memory first
			int boy = strlen(c); // Length of the input color name
			c2 = new char[boy+1];// Allocate memory for the color name and assing it to c2;
			strcpy(c2,c);  // Copy c to c2	
			cout<<"setC2 is called"<<endl;		
		}
		void setC3(const  char *c){
			delete [] c3;  // Free allocated memory first
			int boy = strlen(c); // Length of the input color name
			c3 = new char[boy+1];// Allocate memory for the color name and assing it to c3;
			strcpy(c3,c);  // Copy c to c3		
			cout<<"setC3 is called"<<endl;	
		}
		void setC4(const  char *c){
			delete [] c4;  // Free allocated memory first
			int boy = strlen(c); // Length of the input color name
			c4 = new char[boy+1];// Allocate memory for the color name and assing it to c4;
			strcpy(c4,c);  // Copy c to c4		
			cout<<"setC4 is called"<<endl;	
		}	
								
		void calculate(){
			if(getColorValue(c1) == -1 || getColorValue(c2) ==-1 || getColorValue(c3) == -1 || getColorValue(c4)== -1){
				cout<<"Calculate: Error, Color Codes are undefined!"<<endl;
				value = -1;
				tolerance = -1;
			}else{
				value =  ( (getColorValue(c1) * 10 ) + getColorValue(c2) )   *   pow(10, getColorValue(c3));
				tolerance = getColorValue(c4);
				cout<<"Calculate is called"<<endl;
			}
		}
		int getValue(){  return value;   }
		int getTolerance(){	return tolerance;}
		
};

int main(){
	Resistor R1;  // default Constructor
	Resistor R2("Red","Orange","Brown","Gold"); // Constructor
	Resistor R3("Red",220,5);
	Resistor R4("Red","Orange",220,5);
	cout<<"R2 -- Value:"<<R2.getValue()<<" Ohm,  Tolerance:"<<R2.getTolerance()<<"%"<<endl;
	// R.value = 1200; // Not Allowed // Restricted because value is a private member of the class
	/*
	R1.setC1("Orange");
	R1.setC2("Green");
	R1.setC3("Red");
	R1.setC4("Silver");
	*/
	R1.calculate();
	cout<<"Value:"<<R1.getValue()<<" Ohm,  Tolerance:"<<R1.getTolerance()<<"%"<<endl;
	return 0;
}
/*
int Resistor::getColorValue(const char *){
........	
}
*/
