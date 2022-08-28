#include<iostream>
#include<string>

int main(){
	std::cout<<"Entre com frases"<<std::endl;
	std::string str;
	while(not std::getline(std::cin, str).eof()){
		std::cout<<str;
	}
	return 0;
}
