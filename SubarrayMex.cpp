#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x;
	    cin>>n>>k>>x;
	    
	    if(x>k)
	    {
	        cout<<"-1"<<endl;
	    }
	    
	    
	    else
	    {
	        int cn=0;
	        for(int i=0;i<n;i++)
	        {
	            if(cn==x)
	            cn=0;
	            cout<<cn<<" ";
	            cn++;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
