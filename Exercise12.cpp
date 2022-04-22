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

	const int bufSize = 512;				//input buffer size
	//bufSize = 512;				//error: attempt to write to const object

	//const int i = get_size();		//ok: initialize at run time
	const int j = 42;				//ok: initialize at compile time
	//const int k;					//error: k is unitialize const

	int i = 42;
	const int ci = i;				//ok: the value in i is copied into ci
	int j = ci;						//ok: the value in ci is copied into j

	const int ci = 1024;
	const int& r1 = ci;				//ok: both references and underlying object
	//r1 = 42;						//error: r1 is a reference to const
	//int &r2 = ci;					//error: non const reference to a const object


	int i = 42;
	const int& r1 = i;				//we can bind a const int& to a plain int object
	const int& r2 = 42;				//ok: r1 is a reference to const
	const int& r3 = r1 * 2;			//ok: r3 is a reference to const
	//int& r4 = r * 2;				//error: r4 is a plain non const reference

	int i = 42;
	//int& r1 = i;					//r1 bound to i
	const int& r2 = i;				//r2 also bound to i; but cannot be used to changed i.
	//r1 = 0;							//r1 is not const; i is now 0
	//r2 = 0;						//error: r2 is a reference to const	

}