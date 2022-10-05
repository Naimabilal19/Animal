#include <iostream>
#include<string>
using namespace std;

class Animal
{
protected:
	string name;
	int age;
	double weight;
	Animal()
	{
		name = " ";
		age =0;
		weight = 0.0;
	}
	Animal(string n, int a, double w)
	{
		name = n;
		age = a;
		weight = w;
	}
	void Print()
	{
		cout << name << endl << age <<endl<< weight << endl;
	}
	void Input()
	{
		cin >> name>>age>>weight;

	}
	void SetAge()
	{
		age = rand() % 30+30;
	}
};

class Elephant : public Animal
{
	double trunk_length;
public:
	Elephant(string n, int a, double w, double tr) :Animal(n, a, w)
	{
		trunk_length = tr;
	}

	void Print()
	{
		Animal::Print();
		cout << trunk_length;
	}
	void SetAge(int a)
	{
		age = a;
	}

	~Elephant()
	{
		cout << "\nElephant destruct\n";
	}
	void Input()
	{
		Animal::Input();
		cin >> trunk_length;
	}
};

class Penguin : public Animal
{
	int penguin_length;
public:
	Penguin(string n, int a, double w, int ln) :Animal(n, a, w)
	{
		penguin_length = ln;
	}

	void Print()
	{
		Animal::Print();
		cout << penguin_length;
	}
	void SetAge(int a)
	{
		age = a;
	}

	~Penguin()
	{
		cout << "Penguin destruct\n";
	}
};

class Parrot : public Animal
{
	string color;
public:
	Parrot(string n, int a, double w, int cl) :Animal(n, a, w)
	{
		color = cl;
	}

	void Print()
	{
		Animal::Print();
		cout << color;
	}
	void SetAge(int a)
	{
		age = a;
	}

	Parrot()
	{
		cout << "Penguin destruct\n";
	}
};

class Dog : public Animal
{
	string nickname;
public:
	Dog(string n, int a, double w, int nn) :Animal(n, a, w)
	{
		nickname = nn;
	}

	void Print()
	{
		Animal::Print();
		cout << nickname;
	}
	void SetAge(int a)
	{
		age = a;
	}

	Dog()
	{
		cout << "Penguin destruct\n";
	}
};

int main()
{
	Elephant obj1("Elephant", 15, 5.5, 1.5);
	cout << endl;
	obj1.Input();
	cout << endl;
	obj1.Print();
	obj1.SetAge(16);
	cout << "\n---------------------\n";
	obj1.Print();

}