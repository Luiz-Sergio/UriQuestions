#include<iostream>
#include<math.h>
#include<iomanip>

int main(){
	float x1, y1, x2, y2, dist;
	std::cin>>x1>>y1>>x2>>y2;
	dist = std::sqrt( std::pow( (x2-x1), 2 ) + std::pow( (y2-y1), 2 ) );
	std::cout<<std::fixed<<std::setprecision(4)<<dist<<std::endl;
	return 0;
}
