#pragma once
#include "Deck.hpp"
#include "Dealer.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Card.hpp"
#include <SFML/Graphics.hpp>

class Game {
private:
	Dealer dealer;
	Player player;
	Deck deck;
public:
	 Game(sf::Texture&);
	 
	 void play(sf::RenderWindow&);
};