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
		bool t=false; //flag 
		for (int i=0;i<n;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (numbers[i]+numbers[j]==k){cout<<i<<'\t'<<j;t=true;break;}
			}
			if (t==true){break;}
		}
		if (t==false){cout<<"{-1, -1}";}
	}
}

