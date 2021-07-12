#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &_type) : type(_type)
{
    hit_points = hp;
}

Enemy::~Enemy()
{
}

void Enemy::takeDamage(int amount)
{
    hit_points -= amount;
    hit_points = (hit_points < 0 ? 0 : hit_points);
}

std::string const &Enemy::getType() const 
{
    return (type);
}

int Enemy::getHP() const
{
    return (hit_points);
}