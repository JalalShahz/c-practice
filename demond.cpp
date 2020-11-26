#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cout<<"    enter the number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)//for upper triangle
	{
		for(j=n;j>=i;j--)//for spacing
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)//for stars
		{
			cout<<" *";
		}
		cout<<endl;
	}
	for(k=1;k<=n-1;k++)//for lower triangle in dmnd we have 1 common line so we have to deducte n-1
	{
		for(l=0;l<=k;l++)//for spacing
		{
			cout<<" ";
		}
		for(m=n-1;m>=k;m--)//for star
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
