#pragma once

#include <string>
#include "Interfaces.h"

using namespace std;

namespace Animals
{
	class Animal : public myIF::IAnimal
	{
		string name;
		double kg;
		string continent;

	public:
		Animal(string n, double k, string cont)
		{
			name = n;
			kg = k;
			continent = cont;
		}
	};

	class Cat : public Animal 
	{
	public:
		Cat(string n, double k, string cont) :Animal(n, k, cont) {}
		virtual void eat();
		virtual void move();
	};
	class Parrot : public Animal, public myIF::IFly
	{
	public:
		Parrot(string n, double k, string cont) :Animal(n, k, cont) {}
		virtual void eat();
		virtual void move();

		virtual void fly();
	};
	class Dog : public Animal
	{
	public:
		Dog(string n, double k, string cont) :Animal(n, k, cont) {}
		virtual void eat();
		virtual void move();
	};
	class Pinguin : public Animal, public myIF::ISwim
	{
	public:
		Pinguin(string n, double k, string cont) :Animal(n, k, cont) {}
		virtual void eat();
		virtual void move();

		virtual void swim();
	};
	class Dolphin : public Animal, public myIF::ISwim
	{
	public:
		Dolphin(string n, double k, string cont) :Animal(n, k, cont) {}
		virtual void eat();
		virtual void move();

		virtual void swim();
	};
}

