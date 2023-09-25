#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    
	    cin>>x>>y;
	    if(x>=2*y){
	        cout<<x/(2*y)<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
