#include <iostream>
#include <string>
#include <cstdlib>

bool split(std::string str, std::string del = " "){
  
  int start, end = -1*del.size(), code= 0, deltaCode=0;

  do{  
    
    start = end + del.size();
    end = str.find(del, start);
    deltaCode = (str.substr(start, end-start)[0]); // código da primeira letra. Cada iteração vai assumir o código da nova palavra.
    
    if(code == 0){
      code = deltaCode; //código da primeira letra, da primeira palavra, usado para fim de comparação com as próximas palavras.
    }
    
    if(abs(code - deltaCode) != 32 && code - deltaCode != 0){ 
      return false;
    }
    
  }while(end != -1);
  
  return true;
  
}
 
int main() {
 
  std::string str;
  bool status;  
  
  while(getline(std::cin, str)){
    if(str == "*"){
      break;
    }
    
    status = split(str," ");
    
    if(status){
      std::cout<<"Y\n";
    }else{
      std::cout<<"N\n";
    }
  }
  
  return 0;
}
