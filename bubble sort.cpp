#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cout<<"enter the no"<<endl;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<=n-1;i++)
	{
		
		cin>>ar[i];
		
		
	}
	
	
	cout<<"bubble sort";
	int counter=1;
	while(counter<n-1){
	
	for(int i=0;i<=n-counter;i++)
	{
		
			if(ar[i]>ar[i+1])
			{
				
				int temp;
				temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		
	}
	counter++;
	cout<<"array after sorting";
	for(int i=0;i<n;i++)
	{
		
		cout<<ar[i]<<endl;
	}
	
	
	
	
	
	
}
	
	return 0;
}
