#include<iostream>
#include<iomanip>

int main(){
	double A, B, media;
	std::cin>>A>>B;
	media = (A * 3.5 + B * 7.5) / 11;
	std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(5)<<media<<std::endl;
	return 0;
}
