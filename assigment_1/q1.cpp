#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,k;
	for (int i=0;i<t;i++)
	{
		cout<<"Enter test case no:"<<i+1<<endl;
		cin>>n>>k;
		vector<int>nums(n); //vector of size n is created
		//check - for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
		int p;
		for (int x=0;x<n;x++) {cin>>p; nums[x]=p;};
		//for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
		//can take input the way it's needed now
		//outer loop to change starting position
		int o,f=n+1; //length of a subarray can never exceed f and o is the temporary length
		for (int i=0;i<n;i++)
		{
			int sum=0;
		//inner loop to control ending position
			for (int j=i;j<n;j++)
			{
				sum+=nums[j];
				if (sum>=k)
				{
					o=j-i+1;
					break;
				}
			}
			if (o<f){f=o;}
		}
		if (f==n+1) {cout<<-1;}
		else { cout<<f;}

	}
}

		
