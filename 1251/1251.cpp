#include<iostream>
#include<map>
#include<string>

void sort(std::map<char, int, std::greater<char>>& M)
{
  
    // Declare a multimap
    std::multimap<int, char> MM;
  
    // Insert every (key-value) pairs from
    // map M to multimap MM as (value-key)
    // pairs
	for (auto& it : M) {
		MM.insert({ it.second, it.first });
	}
  
   	 // Print the multimap
    	for (auto& it : MM) {
		std::cout << it.second+0 << ' '<< it.first+0 << std::endl;
    	}

}

int main(){

	std::string linha;
	std::map<char,int,std::greater<char>> quantidade;
	int statusSeparador = 0;
	while(not std::getline(std::cin, linha).eof()){
		if(statusSeparador){
			std::cout<<std::endl;
		}
		for(int i = 0; i < linha.size(); i++){
			quantidade[linha[i]] += 1;
		}
		sort(quantidade);
		quantidade.clear();
		statusSeparador = 1;
	}
	return 0;
}
