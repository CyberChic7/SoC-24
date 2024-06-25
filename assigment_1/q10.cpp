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
		vector<int>m(n-k+1);
		for(int i=0;i<n-k+1;i++)
		{
			//check max and put in array of size n-k+1
			int ma=numbers[i];
			for(int j=i;j<i+k;j++)
			{
				if(numbers[j]>ma)
				{
					ma=numbers[j];
				}
			}
			m[i]=ma;
		}
		for(int i=0;i<=n-k;i++)
		{
			cout<<m[i]<<'\t';
		}
	}
}

			

