#include <SFML/Graphics.hpp>
#include "Card.hpp"
#include <iostream>

Card::Card() {
	c_suit = CARD_SPADE;
	c_rank = CARD_A;
	width = 89.8;
	height = 135;
}

Card::Card(rankCard cr, suitCard cs, sf::Texture&c_texture) :c_rank(cr), c_suit(cs) {
	c_sprite.setTexture(c_texture);
	width = 89.8;
	height = 135;
}

sf::Sprite Card::get_sprite() {

	if (c_suit == CARD_HEART) {
		c_sprite.setTextureRect(sf::IntRect(0 + (width*this->get_rank_for_sprite()), 0, width, height)); return c_sprite;
	}

	if (c_suit == CARD_CLUBS) {
		c_sprite.setTextureRect(sf::IntRect(0 + (width*this->get_rank_for_sprite()), 286, width, height)); return c_sprite;
	}

	if (c_suit == CARD_SPADE) {
		c_sprite.setTextureRect(sf::IntRect(0 + (width*this->get_rank_for_sprite()), 429, width, height)); return c_sprite;
	}

	if (c_suit == CARD_DIAMOND) {
		c_sprite.setTextureRect(sf::IntRect(0 + (width*this->get_rank_for_sprite()), 143, width, height)); return c_sprite;
	}

}

int Card::get_rank_for_sprite() {
	if (c_rank == CARD_2) return 1;
	else
		if (c_rank == CARD_3) return 2;
		else
			if (c_rank == CARD_4) return 3;
			else
				if (c_rank == CARD_5) return 4;
				else
					if (c_rank == CARD_6) return 5;
					else
						if (c_rank == CARD_7) return 6;
						else
							if (c_rank == CARD_8) return 7;
							else
								if (c_rank == CARD_9) return 8;
								else
									if (c_rank == CARD_10) return 9;
									else
										if (c_rank == CARD_J) return 10;
										else
											if (c_rank == CARD_Q) return 11;
											else
												if (c_rank == CARD_K) return 12;
												else
													if (c_rank == CARD_A) return 0;
}

int Card::get_rank() {
	if (c_rank == CARD_2) return 2;
	else
		if (c_rank == CARD_3) return 3;
		else
			if (c_rank == CARD_4) return 4;
			else
				if (c_rank == CARD_5) return 5;
				else
					if (c_rank == CARD_6) return 6;
					else
						if (c_rank == CARD_7) return 7;
						else
							if (c_rank == CARD_8) return 8;
							else
								if (c_rank == CARD_9) return 9;
								else
									if (c_rank == CARD_10) return 10;
									else
										if (c_rank == CARD_J) return 11;
										else
											if (c_rank == CARD_Q) return 12;
											else
												if (c_rank == CARD_K) return 13;
												else
													if (c_rank == CARD_A) return 14;
}

void Card::drawCard(sf::RenderWindow&window) {
	window.draw(this->get_sprite());
}

suitCard Card::get_suit() {
	if (c_suit == CARD_SPADE) { return CARD_SPADE; }
	if (c_suit == CARD_HEART) { return CARD_HEART; }
	if (c_suit == CARD_CLUBS) { return CARD_CLUBS; }
	if (c_suit == CARD_DIAMOND) { return CARD_DIAMOND; }
}

void Card::printcr() {
	if (c_rank == CARD_2) std::cout << "A";
	else
		if (c_rank == CARD_3) std::cout << "A";
		else
			if (c_rank == CARD_4) std::cout << "A";
			else
				if (c_rank == CARD_5) std::cout << "A";
				else
					if (c_rank == CARD_6) std::cout << "A";
					else
						if (c_rank == CARD_7) std::cout << "A";
						else
							if (c_rank == CARD_8) std::cout << "A";
							else
								if (c_rank == CARD_9) std::cout << "A";
								else
									if (c_rank == CARD_10) std::cout << "A";
									else
										if (c_rank == CARD_J) std::cout << "A";
										else
											if (c_rank == CARD_Q) std::cout << "A";
											else
												if (c_rank == CARD_K) std::cout << "A";
												else
													if (c_rank == CARD_A) std::cout << "A";
}

void Card::set_PositionCard(float x, float y) {
	c_sprite.setPosition(x, y);
}