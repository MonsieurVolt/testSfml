#pragma once
#ifndef DEF_TEST
#define DEF_TEST
template <typename T>
class Test {
public:
	T _a;
	Test(T a);
	T teste();
};
//template <typename T>
//Test<T>::Test(T a) :_a{ a } {};
//template <typename T>
//T Test<T>::teste() {
//	return _a;
//};
#include "Header1.inl"
#endif // DEF_TEST
