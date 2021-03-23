#pragma once
#include "Hand.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Player.hpp"

class Dealer :public Hand {
public:
	void game(std::vector<Card>&, Card);
};