#include<iostream>
#include<vector>
using namespace std;

int main()
{
        int t;
        cin>>t;
        int n;
        for (int i=0;i<t;i++)
        {
                cout<<"Enter test case no:"<<i+1<<endl;
                cin>>n;
                vector<int>arr(n); //vector of size n is created
                //check - for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                int p;
                for (int x=0;x<n;x++) {cin>>p; arr[x]=p;};
                //for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                //can take input the way it's needed now
		//we need three loops for this - one for the starting index, one for the index to which sum has tp be calculated anf the last one to ccalculate the sum
		int sum=0; int maxim=-1000;
		for(int i=0;i<n;i++)//vary the starting index
		{
			for(int j=0;j<n-i;j++)//the index tilll which sum should be taken is varied
			{
				for(int k=i;k<i+j+1;k++)//sum calc
				{
					sum+=arr[k];
				}
				if ((i==2)&&(j==4)){cout<<"Target= "<<sum<<endl;};
				if (sum>maxim){maxim=sum;}
					//cout<<"i= "<<i<<" j= "<<j<<"  "<<sum<<endl;
				//}
				sum=0;
			}
		}
		cout<<maxim;
	}
}
