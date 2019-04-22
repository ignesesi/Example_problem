#include<iostream>
using namespace std;
int main(){
	long long a,b,k,br=0;
	cin>>a>>b>>k;
	for(;a<=b;a++){
		long long cp=a;
		long long p=1;
		while(cp!=0){
			p=p*(cp%10);
			cp/=10;
		}
		if(p%k==0){
			br++;
		}
	}
	cout<<br<<"\n";
	return 0;
}
