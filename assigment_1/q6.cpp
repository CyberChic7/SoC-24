#include<iostream>
#include<vector>
using namespace std;

int mini(vector<int>& a, int ind, int l)//we'll pass the vector by value to a, ind is the index from which we need to start the comparision and l is the actual length of the array
{
	bool flag=false;
	if (a[ind]==a[ind+1])
	{
		mini(a, ind+1, l);
	}
	if (a[ind]<a[ind+1])
	{
		//we'll go on moving and comparing the terms ensuring they're increasing till we see a break
		for(int i=ind+1;i<l-1;i++)
		{
			if (a[i]>a[i+1])
			{
				//we've found the minimum number 
				cout<<"Found he said "<<a[i+1]<<endl;
				flag=true;
				return a[i+1];
			}
		}
	}
	if (a[ind]>a[ind+1])
        {
                //we'll go on moving and comparing the terms ensuring they're increasing till we see a break
                for(int i=ind+1;i<l;i++)
                {
                        if (a[i]<a[i+1])
                        {
                                //we've found the minimum number
				cout<<"Found he said "<<a[i+1]<<endl;
				flag=true;
                                return a[i+1];
                        }
                }
        } 
	//till now all the parts dealt with the vector if there was a break in the order. If there isn't 
	if (flag==false)
	{
		if (a[0]>a[l-1]){return a[l-1];}
		if (a[0]<a[l-1]){return a[0];}
		if (a[0]=a[l-1]){
			if (a[1]>a[l-2]){return a[l-2];}
			if (a[1]<a[l-2]){return a[1];}
		}
	}
			
		
		
}

int main()
{
        int t;
        cin>>t;
        int n;
        for (int i=0;i<t;i++)
        {
                cout<<"Enter test case no:"<<i+1<<endl;
                cin>>n;
                vector<int>nums(n); //vector of size n is created
                //check - for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                int p;
                for (int x=0;x<n;x++) {cin>>p; nums[x]=p;};
                //for (int x=0;x<n;x++) {cout<<v[x]<<'\t';};
                //can take input the way it's needed now
		cout<<mini(nums, 0, n);
	}
}

