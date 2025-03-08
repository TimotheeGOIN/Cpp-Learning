#pragma once

#include <string>

class Player {

public:
	Player();
	Player(const Player& player);
	Player(const std::string, float health_points, float damages);

	~Player();

	bool is_dead();
	void attack(Player& other);

	const std::string& get_name() const;
	int get_health_points() const;
	int get_damages() const;

	void set_damages(int damages);

private:
	std::string m_name;
	float m_health_points;
	float m_damages;
	int* m_data;

}; 