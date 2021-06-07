#include<stdio.h>

#include<iostream>

#include<conio.h>
using namespace std;


int a[20][20], reach[20],n;

void dfs(int v)

{

int i;

reach[v]=1;

for(i=1;i<=n;i++)

 if(a[v][i] && !reach[i])

  {       cout<<"\n%d->%d"<<v<<i;

       dfs(i);

  }

}

int  main()

{

    

    int i,j,count=0;
    int n;

    cout<<"\nEnter number of vertices: ";

    cin>>n;

    for(i=1;i<=n;i++)

    {

reach[i]=0;

for(j=1;j<=n;j++)

a[i][j]=0;

    }

    cout<<"Enter the adjacency matrix:\n";

    for(i=1;i<=n;i++)

for(j=1;j<=n;j++)

    scanf("%d",&a[i][j]);

    dfs(1);

    printf("\n");

    for(i=1;i<=n;i++)

    {

if(reach[i])

count++;

    }

    if(count==n)

cout<<"\nGraph is connected"<<endl;

    else

cout<<"\nGraph is not connected"<<endl;   

 return 0;

}
