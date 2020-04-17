#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() 
{
    ll n;
    cin >> n;
    ll arr[n];
    
    for(ll i=0;i<n; i++)
        cin >> arr[i];
    
    ll till;
    till = n/2;

    if(n%2 == 0)
    {
        ll sum1=0;
        ll sum2=0;
        
        for(ll i=0;i<n;i++)
        {
            if(i < till)
                sum1 += arr[i];
            else
                sum2 += arr[i];
        
        }
            cout<<sum2-sum1<<endl;

    }
    else
    {
            ll sum1=0;
            ll sum2=0;
                for(ll i=0;i<n;i++)
                {
                    if(i <= till)
                        sum1 += arr[i];
                    else
                        sum2 += arr[i];
                
                }
            
               cout<<sum2-sum1<<endl;

    }
}

