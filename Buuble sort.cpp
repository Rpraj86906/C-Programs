#include<iostream>
using namespace std;

void bubblesort(int A[],int size)
 {
 	
 	int r,i,temp;
 	for(r=0;r<=size-1;r++)
 	
	 for(i=0;i<size-1-r;i++)
 	if(A[i]>A[i+1])
 	{
 		temp=A[i];
 		A[i]=A[i+1];
 		A[i+1]=temp;
	 }
 	
	  } 	
 	
 	
 	
int main()
{

int A[50],size,i;
cout<<"enter the size ";
cin>>size;
cout<<"Enter the elemnts:";
for(int i=0;i<size;i++)
cin>>A[i];
cout<<"array is ";
for(int i=0;i<size;i++)

cout<<A[i]<<endl;



 bubblesort(A,size);
 for(i=0;i<size;i++)
 	cout<<endl<<A[i]<<endl;

return 0;
}
 	
 
 	
 	
 	
 	
 	
 	
 	
 
