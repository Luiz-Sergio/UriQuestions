#include<iostream>

int main(){
	int valor;
	std::cin>>valor;
	std::cout<<valor<<std::endl;
	std::cout<<valor/100<<" nota(s) de R$ 100,00"<<std::endl;
	valor %= 100;
	std::cout<<valor/50<<" nota(s) de R$ 50,00"<<std::endl;
	valor %= 50;
	std::cout<<valor/20<<" nota(s) de R$ 20,00"<<std::endl;
	valor %= 20;
	std::cout<<valor/10<<" nota(s) de R$ 10,00"<<std::endl;
	valor%=10;
	std::cout<<valor/5<<" nota(s) de R$ 5,00"<<std::endl;
	valor%=5;
	std::cout<<valor/2<<" nota(s) de R$ 2,00"<<std::endl;
	valor%=2;
	std::cout<<valor<<" nota(s) de R$ 1,00"<<std::endl;
	return 0;
}
