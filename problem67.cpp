#include<iostream>
#include<fstream>
#include<cmath>
#define ll long long
using namespace std;

/// Download the text file and save it as "fff.txt" in same directory as your program :)

int main()
{
	ifstream fin;
	fin.open("fff.txt");
	ll i,j,k,a[100][100],b,c,x;
	for(i=0;i<100;i++)
	{
		for(j=0;j<=i;j++)
		{
			fin>>a[i][j];
		}
	}
	fin.close();
	for(i=98;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			a[i][j]+=a[i+1][j]>a[i+1][j+1]?a[i+1][j]:a[i+1][j+1];
		}
	}
	cout<<a[0][0]<<endl;
	return 0;
}
