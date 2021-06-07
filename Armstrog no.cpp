
#include<iostream>

using namespace std;
#include<cmath>
int main()
{
	cout<<"Enter the no."<<endl;
	int n;
	cin>>n;
	int sum=0;
	int original=n;
	while(n>0)
	{   
		int lastdigit=n%10;
		sum =sum+ lastdigit*lastdigit*lastdigit;
		n=n/10;
		
		

	}
	
	if (sum==original)
	{
		cout<<"Armstrong no";
	}
	else
	cout<<" NOt a Armstrong no.";
	
	
	return 0;
}
