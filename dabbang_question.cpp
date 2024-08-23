#include<iostream>
using namespace std;

//VERY HAPPY DONE BY MYSELF!!!

int main()
{
	int n;
	cin>>n;
	
	int row=1;
	
	while(row<=n)
	{
		int col=1;
		int count=1;
		while(col<=n-row+1)
		{
			cout<<count;
			count++;
			col++;
		}
		int star1=row-1;
		while(star1)
		{
			cout<<"*";
			star1--;
		}
	/*	int star2=row-1;
		while(star2)
		{
			cout<<"*";
			star2--;
		}
		int count2=row;
		while(count2)
		{
			cout<<count2;
			count2--;
		}*/
		
		int star2=row-1;
		while(star2)
		{
			cout<<"*";
			star2--;
		}
		int j=1;
		int count2=n-row+1;
		while(j<=n-row+1)
		{
			cout<<count2;
			count2--;
			j++;
		}
		
		cout<<"\n";
		row++;
	}
}

/*
1234554321
1234**4321
123****321
12******21
1********1
*/
