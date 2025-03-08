
#include <iostream>
#include "Player.hpp"

Player::Player() :
	m_name(""),
	m_health_points(10),
	m_damages(2) {

}

Player::Player(const Player& player) :
	m_name(player.m_name),
	m_health_points(player.m_health_points),
	m_damages(player.m_damages) {

}

Player::Player(const std::string name, float health_points, float damages) :
	m_name(name),
	m_health_points(health_points),
	m_damages(damages) {

}

bool Player::is_dead() {

	std::cout << m_name << " is dead..." << std::endl;

	return m_health_points <= 0;
}

void Player::attack(Player& other) {

	other.m_health_points -= m_damages;

	std::cout << m_name << " attacks " << other.m_name << " ! -" << m_damages << "(" << other.m_health_points << " now)" << std::endl;
}