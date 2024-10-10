#include <iostream>
int main(){
    int low, high, sum;
	std::cout << "Enter low and high bound" << std::endl;
	std::cin >> low >> high;
	//сформироыать границы диапазона
	//проверить корректность значений
	if(low <= high)
	{
		for(int i = low, sum = 0; i <= high; i++){
			sum += i;
			std::cout<<"sum = "<<sum<<std::endl;
		}	
	}	
	std::cout<<"1.sum= "<<sum<<std::endl;
	// проверить в отладчике значение
    return 0;
}