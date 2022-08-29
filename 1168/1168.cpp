#include <iostream>
#include <map>
#include <string>

int main() {
  
  std::map<char, int> ledValues = {{'0',6}, {'1',2}, {'2',5}, {'3',5}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 3}, {'8', 7}, {'9', 6} };
  std::string stringNumber;
  int numDeEntradas, soma = 0;
  
  std::cin>>numDeEntradas;
  
  for(int i=0; i < numDeEntradas; i++){
    std::cin>>stringNumber;
    for(int j = 0; j < stringNumber.size(); j++){
      soma += ledValues[stringNumber[j]];
    }
    std::cout<<soma<<" leds\n";
    soma = 0;
  }
