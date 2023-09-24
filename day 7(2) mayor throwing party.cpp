#include <iostream>
using namespace std;

int main() {
     int a,b,c,t;
     cin>>t;
     while(t--){
         
         cin>>a>>b>>c;
         if(b>(a+c)){
             cout<<b<<endl;
             
         }
         else {
             cout<<a+c<<endl;
         }
     }
	return 0;
}
