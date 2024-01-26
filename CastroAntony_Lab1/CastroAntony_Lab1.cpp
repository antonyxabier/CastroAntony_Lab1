// CastroAntony_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
unsigned int bitField = 19;

void TurnOn(int bit) {

	bitField = bitField | (1 << bit);

}

void TurnOff(int bit) {

	bitField = bitField & ~(1 << bit);

}

void Toggle(int bit) {

	bitField = bitField ^ (1 << bit);

}

void Negate() {

	bitField = ~bitField;

}

void LeftShift() {

	bitField = bitField << 1;

}

void RightShift() {

	bitField = bitField >> 1;
}

void DisplayBinary() {

	std::cout << "bitField: " << bitField << std::endl;

	std::cout << "Bits: ";

	for (int i = 31; i >= 0; --i) {

		std::cout << ((bitField >> i) & 1);

		if (i % 4 == 0) {

			std::cout << ' ';
		}
	}
	std::cout << "\n" << std::endl;
}
int main()
{
	do {
		std::cout << "\x1B[2J\x1B[H";

		DisplayBinary();

		std::cout << "1. TurnOn \n" << "2. TurnOff \n" << "3. Toggle \n" << "4. Negate \n" << "5. LeftfShift \n" << "6. RightShift \n" << "7. Exit \n" << std::endl;

		int operation;

		std::cout << "Choose Operation: ";

		std::cin >> operation;

		if (operation == 7) {
			break;
		}

		if (operation >= 1 && operation <= 3) {
			int bitIndex;

			std::cout << "Choose Bit Index: ";

			std::cin >> bitIndex;

			switch (operation) {

			case 1:
				TurnOn(bitIndex);
				break;

			case 2:
				TurnOff(bitIndex);
				break;

			case 3:
				Toggle(bitIndex);
				break;
			}
		}else{
			switch(operation){
			case 4:
				Negate();
				break;

			case 5:
				LeftShift();
				break;

			case 6:
				RightShift();
				break;

			}
		} 
	} while (true);
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
