#include<iostream>
using namespace std;
/*int main()
{
	 for (int i=1;i<=50;i++)
	 
	 {
	 	
	 	 if(i%3==0)
	 	 { 
	 	 continue;// it means next statement is not executed 
	 	 
		  }
	 cout<<i<<endl;
	 
	
	 }
	
	
	
	return 0;
	
}*/

int main()
{
	
	int n;
	int i;
	cout<<"enter the no.";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"NOn prime"<<endl;
			break;
		}
		
		
	}
	if(i==n)
		{
			cout<<"Prime"<<endl;
		}
	
	
	
	return 0;
	
}
