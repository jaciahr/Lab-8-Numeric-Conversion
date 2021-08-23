#pragma once

#include <string>
#include <iostream>
#include <map>
using namespace std;

class Color
{
    private:
        string name;
        string hexValue;
        unsigned char red;
        unsigned char green;
        unsigned char blue;

    public:
        //Given an integer value, convert it to RGB and Hex values
        void SetValue(int value);
        void SetName(const char* name);

        //My function
        string DecimalToHex(unsigned char decimalChar) const;

        //Accessors
        unsigned char GetR() const;
        unsigned char GetG() const;
        unsigned char GetB() const;
        string GetHexValue() const;
        string GetName() const;
};