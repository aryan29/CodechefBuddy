#include<unordered_map>
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define vc vector<ll>
#define vp vector<pair<int,int> >
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll l=s.length();
		vc arr1(l,0),arr0(l,0);
		if(s[0]=='1')
			arr1[0]=1;
		else
			arr0[0]=1;
		for(int i=1;i<l;i++)
		{
			if(s[i]=='1'){
				arr0[i]=arr0[i-1];
				arr1[i]=arr1[i-1]+1;
			}
			else{
				arr0[i]=arr0[i-1]+1;
				arr1[i]=arr1[i-1];
			}
		}
		ll ans=0;
		for(ll i=1;(i*i)+i<=l;i++)
		{
			ll t=(i*i)+i;
			for(ll j=0;j+t-1<l;j++)
			{
				ll k=j+t-1;
				ll z=arr0[k];
				ll o=arr1[k];
				
				if(j==0)
				{

					//cout<<z<<" i "<<o<<endl;
					if(o*o==z)
					{
					//	cout<<"YOi "<<z<<" "<<o<<endl;
						ans++;
					}	
				}
				else
				{
					z-=arr0[(j-1)];
					o-=arr1[(j-1)];
				
					//cout<<z<<" e "<<o<<endl;
					if(o*o==z)
					{
						//cout<<"YOe "<<z<<" "<<o<<endl;
						ans++;
					}	
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

