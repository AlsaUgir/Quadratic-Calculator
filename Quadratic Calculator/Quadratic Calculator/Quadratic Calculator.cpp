
#include "stdafx.h"
using namespace std;







int main() {
	int i = 1;
	while (i == 1) {
		


		float a;
		float b;
		float c;



		cout << "var a = ?" << endl; // asks for the variable "a"
		cin >> a;
		cout << "var b = ?" << endl; // asks for the variable "b"
		cin >> b;
		cout << "var c = ?" << endl; // asks for the variable "c"
		cin >> c;
		cout << endl;


		float negB = b * -1; // declares -b
		cout << negB << endl;

		float b2 = pow(b, 2); // declares b^2
		cout << "/n/n b squared is: " << b2 << endl;

		float ac = a * c; // declares ac
		float minus4ac = ac * -4;// -4ac
		cout << "-4ac equals: " << minus4ac << endl;

		float twoa = a * 2;// declares 2a
		cout << " 2a equals: " << twoa << endl;

		float squareRoot = b2 + minus4ac; //sqrt (b^2 -4ac)

		if (squareRoot < 0) { // makes the sqrt(b^2 -4ac) a positive
			squareRoot = squareRoot * -1;
		}

		cout << "the square root of: " << squareRoot << endl; // states the square root before it is simplified

		float squareRootT = sqrt(squareRoot); //sqrt(b^2 -4ac) simplified
		cout << "the square root simplifies to: " << squareRootT << endl; // states simplified square root so you can backtrack

		// gets the unsimplified radical
		
		float minBTwoA = negB / twoa;
		cout << "the unsimplified form of the radical is " << minBTwoA << " +- " <<  "sqrt{(" << squareRoot << ")" <<  " / " << twoa << "}" << endl;

		double over2a1 = negB - squareRootT;// -b - squareRootT
		double over2a2 = negB + squareRootT;// -b + squareRootT

		double total1 = over2a1 / twoa;  // divides everything by 2a
		double total2 = over2a2 / twoa;  // divides everything by 2a
		float test = sqrt(2);
		cout << "x equals " << total1 << " or " << total2 << endl << endl;






		// this part finds the axis of symmetry and vertex
		float sym2 = total1 + total2;
		float vertexX = sym2 / 2; // axis of symmetry
		float vertsymA = pow(vertexX, 2); // declares x^2
		float vertA = a * vertsymA; // plugs axis of symmetry into ax^2
		float vertB = b * vertexX; // plugs axis of symmetry into bx
		float equation = vertA + vertB + c; // simplifies ax^2 + bx + c (it is the y axis of the vertex)


		cout << "the axis of symmertry is " << vertexX << endl; // states the AOS
		cout << "the vertex is " << vertexX << ", " << equation << endl << endl; // states the vertex


		cout << "press the number 1 to clear";
		int q;
		cin >> q;
		if (q == 1) {

			system("CLS");
			
		}
	
	}
	return 0;
	}



