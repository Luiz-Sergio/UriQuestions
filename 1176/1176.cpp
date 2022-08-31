#include<iostream>
#include<vector>

int main(){
  
  std::vector<unsigned long> fibElements{0,1};
  short numDeEntradas,entrada;

  std::cin>>numDeEntradas;
  
  for(int i = 0; i < numDeEntradas; i++){
    
    std::cin>>entrada;
    
    while(entrada >= fibElements.size()){
      fibElements.push_back( fibElements[ fibElements.size() - 1 ] + fibElements[ fibElements.size()-2 ] );
    }
    
    std::cout<<"Fib("<<entrada<<") = "<<fibElements[entrada]<<"\n";
  
  }
  
	return 0;
}
