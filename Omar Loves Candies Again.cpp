#include <iostream>
#include<string.h>

using namespace std;

int main() {

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char str[100];
		int a[27];
		for(int d=0;d<27;d++)
		a[d]=0;
		cin>>str;
		for(int j=0;j<strlen(str);j++)
		{
			int x=(str[j])-97;
			a[x]+=1;
		}
		int max=a[0], index=0;
		for(int temp=0;temp<26;temp++)
		{
			if(a[temp]>max)
			{
				max=a[temp];
				index=temp;
			}
		}
		int relax=index+97;
		char ch=relax;
		cout<<max<<" "<<ch<<endl;
	}
	return 0;
}
