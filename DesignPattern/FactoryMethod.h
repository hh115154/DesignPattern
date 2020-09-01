#pragma once

class Calculater//abstract product
{
public:
	virtual int calculate(const int& a, const int& b) = 0;
};

class AddCalculater :public Calculater {//specific product
public:
	virtual int calculate(const int& a, const int& b) override {
		return a + b;
	}
};

class MulCalculater :public Calculater {
public:
	virtual int calculate(const int& a, const int& b) override {
		return a * b;
	}
};

class CalculatorFactory//abstract factory,
{
public:
	virtual Calculater* createCalculater() = 0;//public interface to produce product
};

class AddFactory :public CalculatorFactory {//specific factory,produce specific product
public:
	virtual Calculater* createCalculater() override{
		Calculater* cal = new AddCalculater();
		return cal;
	}
};

class MulFactory : public CalculatorFactory {
public:
	virtual Calculater* createCalculater() override {
		Calculater* cal = new MulCalculater();
		return cal;
	}
};





