#include <iostream>
int main(){
    int x;
	do
	{
		std::cout << "Enter digit >= 10 && even for exit " << std::endl;
		std::cin >> x;
        if ((x>=10) and ((x&1)==0)){
            break;
        }
	} 
	while((x > 10 and (x&1)==1) or x<10);

	std::cout<<"x = "<<x<<std::endl;
    return 0;
}