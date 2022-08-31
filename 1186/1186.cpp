#include <iostream>
#include <string>
#include <iomanip>

int main(){
  float n[12][12];
  float soma = 0.0;
  char escolha;

  std::cin>>escolha;
    
  for(int i = 0; i < 12; i++ ){
    for(int j = 0; j < 12; j++){
      std::cin>>n[i][j];
    }
  }

  for(int a = 1; a < 12; a++){
    int c = a;
    int b = 11;
    while(c < 12){
      soma += n[c][b];
      c++;
      b--;
    }
  }
  
  if(escolha == 'S'){
    std::cout<<std::fixed<<std::setprecision(1)<<soma<<"\n";
  }else{
    std::cout<<std::fixed<<std::setprecision(1)<<soma/66<<"\n";
  }
  
 
  return 0;
}
