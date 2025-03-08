#pragma once

#include <string>

struct Player {

	Player();
	Player(const Player& player);
	Player(const std::string, float health_points, float damages);

	~Player();

	std::string m_name;
	float m_health_points;
	float m_damages;
	int* m_data;

	bool is_dead();
	void attack(Player& other);
};