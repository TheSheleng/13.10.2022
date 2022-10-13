#pragma once

namespace myIF
{
	struct IAnimal
	{
		virtual void eat() = 0;
		virtual void move() = 0;
	};

	struct IFly
	{
		virtual void fly() = 0;
	};

	struct ISwim
	{
		virtual void swim() = 0;
	};
}
