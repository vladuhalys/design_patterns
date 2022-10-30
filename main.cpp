// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include "iphone.h"
#include "samsung.h"

int main()
{
	std::cout << "Start ";
	Phone* iphone = new Iphone("Iphone", "14", "Gold");
	std::cout << iphone->StratPhone("IOS", "16", "Apple") << std::endl;

	std::cout << "Start ";
	Phone* samsung = new Samsung("Samsung", "Galaxy 22 Ultra", "Black");
	std::cout << samsung->StratPhone("Android", "12", "Google") << std::endl;

	
	return 0;
}