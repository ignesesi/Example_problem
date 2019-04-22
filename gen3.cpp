#include <iostream>
#include <random>

const long long delta=1e6-1;

int main (){
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_int_distribution<long long> n(1,1e13);
    std::uniform_int_distribution<int> broi(0, 7);
    std::uniform_int_distribution<long long> d(delta/100,delta);
	long long a=n(gen),b,k=1;
	long long cpa=0;
	while(a!=0){
		if(a%10!=0){
		cpa*=10;
		cpa+=(a%10);
		}
		a/=10;
	}
	a=cpa;
	b=a+d(gen);
	int br[5]={broi(gen),broi(gen),broi(gen),broi(gen)},po[5]={2,3,5,7};
	for(int j=0;j<4;j++){
		for(int i=0;i<br[j] and k<a;i++){
			k*=po[j];
		}
		if(k>a){
			k/=po[j];
			break;
		}
	}

	std::cout<<a<<" "<<b<<" "<<k<<"\n";
    return 0;
}

