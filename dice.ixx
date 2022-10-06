module;

#include <random>

export module Bigous.Dice;

export {
	namespace bigous {
		auto dice()
		{
			static std::uniform_int_distribution< int > distr{ 1, 6 };
			static std::random_device                   device;
			// static std::mt19937 engine{device()};
			static std::default_random_engine engine{ device() };
			return distr(engine);
		}
	}
}
