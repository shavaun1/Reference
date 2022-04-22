#include <iostream>

int main() {
	int ival = 1204;
	int &refval = ival; //refval refers to (is another name for) ival
	//int &refval2;	//error: a reference must be initializd=ed

	refval = 2;		//assigns 2 to the object to which refval refers, i.e, to ival
	int ii = refval;	//same as ii=ival;


	//ok: refVal3 is bound to the object to which refVal is bound, i.e., to ival
	int &refval3 = refval;

	int i = refval; // ok: initialize i to the same value as ival;

	int i = 1024, i2 = 2048;	// i and i2 are both  ints.
	int &r = i, r2 = i2;		// r is a reference bound  to i;  r2 is an int.
	int i3 = 1024, & ri = i3;		//i3 is an int; ri is a reference  bound to i3.
	int& r3 = i3, & r4 = i2;	// both r3 and  r4 are references

	//int &refval4 = 10;	//error: initializer must be an object
	//double = dval 3.14;
	//int &refval5 = davl;	//error: initilizer must be an int object 

}