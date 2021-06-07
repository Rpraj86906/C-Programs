#include<iostream>
using namespace std;
 #define pi 3.14;
 
 
class Circle
{private :
	int A, B;
	
	public:
	
	int  area (int a)
	{  
		A=a;
		return A;
		
		
		}	
	
	int area (int b,int c)	
	{ 
	
		
		
		B=b*c;
		return B;
		
		
		
	}

	

 } ;
 
 
 

int main ()
{ int b,c,a,w,q;
	Circle c1;

	w=c1.area(5);
   cout <<"\narea is "<<w<<endl;
	
	q=c1.area(4,6);
	cout <<"\n araa is "<<q<<endl;
	
	
	return 0;
	 
}
