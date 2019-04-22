#include <iostream>
#include <random>

const long long delta=1e5-1;

int main (){
    std::random_device rd;
    std::default_random_engine gen(rd());
    std::uniform_int_distribution<long long> n(1,1e8);
    std::uniform_int_distribution<long long> kk(1, 1e8);
    std::uniform_int_distribution<long long> d(delta/100, delta);
	long long a=n(gen),b=a+d(gen),k=kk(gen);
	std::cout<<a<<" "<<b<<" "<<k<<"\n";
    return 0;
}

