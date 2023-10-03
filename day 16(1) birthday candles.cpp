#include<iostream>
using namespace std;

int main(){
    
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n%m==0 && (n/m)%2==0)
        cout<<"yes"<<endl;
        
        else
        cout<<"no"<<endl;
    }
    
    return 0;
}
