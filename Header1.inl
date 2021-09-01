#include "Header1.h"
#include <iostream>
template <typename T>
Test<T>::Test(T a) :_a{ a } {};
template <typename T>
T Test<T>::teste() {
	return _a;
};
