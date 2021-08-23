#include "Color.h"
using namespace std;

void Color::SetValue(int value) {
	blue = value;
	green = value >> 8;
	red = value >> 16;
}

string Color::DecimalToHex(unsigned char decimalChar) const {
	int decimalVal = int(decimalChar);

	if ((decimalVal < 10) && (decimalVal >= 0)) {
		return to_string(decimalVal);
	}
	else {
		if (decimalVal == 10) {
			return "A";
		}
		else if (decimalVal == 11) {
			return "B";
		}
		else if (decimalVal == 12) {
			return "C";
		}
		else if (decimalVal == 13) {
			return "D";
		}
		else if (decimalVal == 14) {
			return "E";
		}
		else if (decimalVal == 15) {
			return "F";
		}
	}
	return 0;
}

void Color::SetName(const char* name) {
	this->name = name;
}

unsigned char Color::GetR() const {
	return red;
}

unsigned char Color::GetG() const {
	return green;
}

unsigned char Color::GetB() const {
	return blue;
}

string Color::GetHexValue() const {
	string hexValue = "0x";

	hexValue += DecimalToHex((red / 16));
	hexValue += DecimalToHex((red % 16));

	hexValue += DecimalToHex((green / 16));
	hexValue += DecimalToHex((green % 16));

	hexValue += DecimalToHex((blue / 16));
	hexValue += DecimalToHex((blue % 16));

	return hexValue;
}

string Color::GetName() const {
	return name;
}