#include<iostream>

using namespace std;

  int Bsearch(int A[],int n, int item)
   {
   	int beg, last , mid;
   	beg=0;
   	last=n-1;
   	while (beg<=last)
   	{
   		mid=(beg+last)/2;
   		if (A[mid]==item)
   	
		return mid;
		else if(A[mid]<item)
		{
			beg=mid+1;}
			else 
		{
				last=mid-1;
	}
}		return -1;	
		}
      

  int main ()
  {
  	
  	int arr[50],ele, size, i , index;
  	cout<<"\n Enter size in an array:";
  	cin>>size;
  	
  	cout<<"Enter elements in an array:";
  	for(i=0;i<size;i++)
  	{cin>>arr[i];
  	
	  
	}
	cout<<"array elemets are:";
	for(i=0;i<size;i++)
	{cout<<arr[i]<<endl;
	}
	cout<<"/nsearched elements";
	cin>>ele;
	index =Bsearch(arr,size,ele);
	
	
	 if(index==-1)
	 cout<<"sorry not found";
	 else
	cout<<"elements foound at index"<<index<<"position"<<index+1;
	return 0;
}
	
	
	
	
  
