#pragma once
#include <SFML/Graphics.hpp>

enum rankCard {
	CARD_2, CARD_3, CARD_4, CARD_5, CARD_6, CARD_7, CARD_8,
	CARD_9, CARD_10, CARD_J, CARD_Q, CARD_K, CARD_A, CARD_MAXRANK
};

enum suitCard {
	CARD_HEART, CARD_SPADE,
	CARD_DIAMOND, CARD_CLUBS, CARD_MAXSUIT
};

enum cardStatus {
	card_broken, card_Nbroken
};

class Card {
private:
	rankCard c_rank;
	suitCard c_suit;
	cardStatus status;
	float width;
	float height;
	sf::Sprite c_sprite;
public:

	Card();
	Card(rankCard, suitCard, sf::Texture&);

	sf::Sprite get_sprite();
	int get_rank_for_sprite();
	int get_rank();
	suitCard get_suit();

	void drawCard(sf::RenderWindow&);
	void printcr();
	void set_PositionCard(float, float);
};