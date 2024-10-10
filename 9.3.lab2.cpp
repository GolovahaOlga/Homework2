#include <iostream>
int main(){
	int x = 0;
	double sum = 0;
	while(sum <= 1.7){
        std::cout<<" + ";
		x++;
		sum += 1./x;
		std::cout<<x<<"  ";
    }
	std::cout << "\nsum = " << sum<< std::endl;
    std::cout << "\nx = " << x<< std::endl;
	return 0;
}