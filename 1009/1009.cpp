#include<iostream>
#include<iomanip>
#include<string>

int main(){
	std::string nome;
	double salario, vendas, total;

	std::cin>>nome>>salario>>vendas;
	total = salario + vendas * 0.15;
	std::cout<<"TOTAL = R$ "<<std::fixed<<std::setprecision(2)<<total<<std::endl;
	return 0;
}
