#include<bits/stdc++.h>

using namespace std;
int main()
{
	int i,count[5],a[5];
	i=0;
	map<int,vector<int> >g;
	g[1].push_back(1);
	g[1].push_back(2);
	g[2].push_back(3);
	g[2].push_back(1);
	g[3].push_back(1);
	g[3].push_back(2);
	g[3].push_back(3);
	g[4].push_back(4);
	g[5];
	
	for(auto it=g.begin();it!=g.end();it++)
	{
		a[i]=it->first;
		count[i]=0;
		cout<<"node is = \t"<<it->first;
		for(auto it1=(it->second).begin();it1!=(it->second).end();it1++)
		{
			cout<<"\tnode ka connection = "<<*it1;
			count[i]++;
		}
		i++;
		cout<<endl;
	}
	
	for(auto it=g.begin();it!=g.end();it++)
	{
		
		for(auto it1=(it->second).begin();it1!=(it->second).end();it1++)
		{
			if(it->first ==*it1)
			{
				cout<<"self loop node is = "<<*it1;
				cout<<endl;
			}
		}
		
	}
 
/* for isolated node  */
 
	i=0;
	for(auto it=g.begin();it!=g.end();it++)
	{
		
			if((count[i] == 0 || count[i] == 1))
			{
				cout<<"isolated node is = "<<it->first;
				cout<<endl;
			}
		
		i++;
		
	}
	
	/*   for indegree   */
	
	
	for(i=0;i<5;i++)
	{
		cout<<"indegree of node = "<<a[i]<<"\tis\t";
		for(auto it=g.begin();it!=g.end();it++)
		{
			for(auto it1=(it->second).begin();it1!=(it->second).end();it1++)
			{
				if(a[i] ==*it1)
				{
					cout<<it->first;
					cout<<"\t";
				}
			}
	
		}
		cout<<endl;
	}
}
