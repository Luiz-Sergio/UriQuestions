#include<iostream>

int main(){
	int a, b, somaDeImpares;
	std::cin>>a>>b;
	somaDeImpares = 0;
	while( (b+1) < a){
		if( (b+1) % 2 != 0){
			somaDeImpares += b+1;
		}
		b++;
	}
	std::cout<<somaDeImpares<<std::endl;
	return 0;
}
