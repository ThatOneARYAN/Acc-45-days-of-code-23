#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    if(n>0&&n<=10)
	    cout<<"lower double"<<endl;
	    else if(n>10&&n<=15)
	    cout<<"lower single"<<endl;
	    else if(n>15&&n<=25)
	    cout<<"upper double"<<endl;
	    else if(n>25&&n<=30)
	    cout<<"upper single"<<endl;
	}
	return 0;
}
