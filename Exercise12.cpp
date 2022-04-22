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

	int i = 0, & r = i;
	auto a = r;						//a is an int(r is an alias for i, which has type int)

	const int ci = i, & cr = ci;
	auto b = ci;					//b is an int(top-level const ci is dropped)
	auto c = cr;					//c is an int(cr is an alis for ci whose const is top-evel)
	auto d = &i;					//d is an int*(& of an int object is int*)
	auto e = &ci;					//e is a const int*(& of a const object is low-level const)

	const auto f = ci;				//deduced type of ci is int; f has type constant

	auto& g = ci;					//g is a cost int& that is bound to ci
	//auto& h = 42;					//error: we can't bind a plain reference to a literal 
	const auto& j = 42;				//ok: we can bind a const reference to a literal

	//auto k = ci; &l = i;			//k is int; l is int&
	auto& m = ci, * p = &ci;		//m is a const int&; p is a pointer to const int
	//auto &n = i; *p2 = &ci;		//error: type deduced from i is int; type deduced from &ci is
									//const int 

	//decltype(f()) sum = x;			//sum has whatever type f returns

	const int ci = 0, & cj = ci;
	decltype(ci) x = 0;				//x has type const int
	decltype(cj) y = x;				//y has type const int& and and is bound to x
	//decltype(cj) z;					//error: z is a reference and must be initialized

	//decltype of an expression can be a reference type
	int i = 42, * p = &i, & r = i;
	decltype(r + 0) b;				//ok: addition yields an int; b is an (uninitialized) int
	//decltype(*p) c;					//error: c is int& and must be initialized

	//decltype of a parenthesized variable is always a reference
	//decltype((i)) d;				//error: d is int& and must be initialized
	decltype(i) e;					//ok: e is an (uninitialized) int

	//Remember that decltype((variable)) (note, double parentheses) is always,
	//a reference type, but decltype(variable) is a reference type only if variable is reference

}