#pragma once
#include <SFML/Graphics.hpp>
#include "Hand.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Dealer.hpp"

class Player :public Hand {
public:
	void set_PositionCard();
	int move_atHand();
	void Upload();
	void game(std::vector<Card>&, Card);
	void draw_pl(sf::RenderWindow&);
};