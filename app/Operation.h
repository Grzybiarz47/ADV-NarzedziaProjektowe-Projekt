#pragma once

template<typename T>
class Operation
{
private:
	T a, b;
public:
	Operation(T a, T b) : a{a}, b{b} {}
	T add() const
	{
		return a + b;
	}
	T subtract() const
	{
		return a - b;
	}
	T multiply() const
	{
		return a * b;
	}
	T divide() const
	{
		return a / b;
	}
};