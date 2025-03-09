
#include <iostream>
#include "Player.hpp"

Player::Player() :
	m_name(""),
	m_health_points(10),
	m_damages(2), 
	m_data(nullptr) {

	m_data = new int();
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

Player::~Player() {
	std::cout << "Destructor" << std::endl;

	if (m_data != nullptr) {
		delete m_data;
	}
}

bool Player::is_dead() {
	return m_health_points <= 0;
}

void Player::attack(Player& other) {

	other.m_health_points -= m_damages;

	std::cout << m_name << " attacks " << other.m_name << " ! -" << m_damages << " (" << other.m_health_points << " now)" << std::endl;
}

const std::string& Player::get_name() const {
	return m_name;
}

int Player::get_health_points() const {
	return m_health_points;
}

int Player::get_damages() const {
	return m_damages;
}

void Player::set_damages(int damages) {
	m_damages = damages;
}

