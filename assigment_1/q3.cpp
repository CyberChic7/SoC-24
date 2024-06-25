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
                vector<int>numbers(n); //vector of size n is created
                //check - for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                int p;
                for (int x=0;x<n;x++) {cin>>p; numbers[x]=p;};
                //for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                //can take input the way it's needed now
		for (int i=0;i<n-1;i++)
		{
			for( int j=n-1;j>i;j--)
			{
				if ((numbers[i]+numbers[j])==k)
				{
					cout<<i+1<<"  "<<j+1;
					break;
				}
			}
		}
	}
}
