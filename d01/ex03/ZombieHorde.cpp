#include "ZombieHorde.hpp"
#include <random>
#include <ctime>

ZombieHorde::ZombieHorde(void)
{

}

ZombieHorde::ZombieHorde(int n)
{
	this->n = n;
	this->horde = new Zombie *[n];
	for (int i = 0; i < this->n; i++)
	{
		this->horde[i] = this->randomChump();
		this->horde[i]->announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	for (int i = 0; i < this->n; i++)
		delete this->horde[i];
	delete this->horde;
}

Zombie *ZombieHorde::randomChump(void)
{
	std::string name = this->randomString(5);
	Zombie *z = new Zombie(name,this->type);

	return (z);
}

static int c = SEED;

int randVal(int range)
{
	std::srand(std::time(0) + (c++) * 50);
	return (std::rand() / ((RAND_MAX + 1u) / range));
}

unsigned int hash(unsigned long long state, int range)
{
	state %= 0xFFFFFFFF;
	state ^= 2747636419u;
	state *= 2654435769u;
	state ^= state >> 16;
	state *= 2654435769u;
	state ^= state >> 16;
	state *= 2654435769u;
	state %= 0xFFFFFFFF;

	return (((double)state / 4294967295.0) * (double)range);
}

std::string ZombieHorde::randomString(int len)
{
	std::string rand = "";
	for (int i = 0; i < len; i++)
	{
		unsigned int val = hash(c, 'z'-'a');
		rand += val + 'a'; 
	c+= SEED;
	}
   
	return rand;
}