#include "singlton.h"

int main()
{

	ColorDialog* ui = ColorDialog::GetInstance();
	
	std::cout << "Example message: ";
	ui->success();
	std::cout << "Success" << std::endl;
	ui->reset();
	std::cout << "Example message: ";
	ui->error();
	std::cout << "Error" << std::endl;
	ui->reset();
	return 0;
}