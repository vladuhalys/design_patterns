#include "singlton.h"

ColorDialog* ColorDialog::singleton_ = nullptr;;

ColorDialog* ColorDialog::GetInstance()
{

    if (singleton_ == nullptr) {
        singleton_ = new ColorDialog();
    }
    return singleton_;
}

ColorDialog::ColorDialog()
{
    h = GetStdHandle(STD_OUTPUT_HANDLE);
}

void ColorDialog::success()
{
    SetConsoleTextAttribute(h, (((Black << 4) | LightGreen)));
}

void ColorDialog::error()
{
    SetConsoleTextAttribute(h, (((Black << 4) | LightRed)));
}

void ColorDialog::reset()
{
    SetConsoleTextAttribute(h, (((Black << 4) | White)));
}