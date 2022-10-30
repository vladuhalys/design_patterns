#include <iostream>
#include <Windows.h>

enum Colors
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

class ColorDialog
{
protected:
    HANDLE h;
    ColorDialog();
    static ColorDialog* singleton_;
    std::string value_;

public:
    
    void operator=(const ColorDialog&) = delete;
    
    static ColorDialog* GetInstance();

    void success();
    void error();
    void reset();
    
};


