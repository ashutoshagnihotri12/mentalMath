#include <cstdlib>
#include <iostream>
#include <ctime>
int main(){
	std::srand(std::time(0)); // use current time as seed for random generator
	int randVar = std::rand();
	int randVar2 = std::rand();
	double u = 0.0;
	std::cout << "Random value on [0 " << RAND_MAX << "]: " << randVar <<'\n';
	//std::cout << "Random value on [0 " << RAND_MAX << "]" <<'\n';
	for (int i=0; i<10; ++i){
	randVar = std::rand();
	randVar2 = std::rand();
	u = (double)std::rand()/(double)RAND_MAX;
	std::cout << u <<" and "<< randVar2 <<'\n';
	}
}
