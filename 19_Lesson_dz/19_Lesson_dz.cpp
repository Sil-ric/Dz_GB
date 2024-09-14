#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void voice()
	{
		cout << "Это животное издает звук." << endl;
	}
};

class Dog : public Animal
{
public:
	void voice() override
	{
		cout << "гаф" << endl;
	}
};

class Cat : public Animal
{
public:
	void voice() override
	{
		cout << "мяу" << endl;
	}
};

class Cow : public Animal
{
public:
	void voice() override
	{
		cout << "Муу" << endl;
	}
};

int main()
{
	const int size = 3;
	Animal* animals[size];

	// Заполняем массив
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	//Вызываем метод voice() для каждого животного
	for (int i = 0; i < size; ++i) 
	{
		animals[i]->voice();
	}

}

