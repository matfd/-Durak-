#include "Card.hpp"
#include "Hand.hpp"
#include "Deck.hpp"

void Hand::take_card(Deck&deck) {
	for (int i = 0; i < needCard; i++) {
		c_hand.push_back(deck.pop());
	}
}

Card Hand::hand_pop(int num) {
	Card temp;
	temp = c_hand[num];
	c_hand.erase(c_hand.begin() + num);
	return temp;
}

GAME_ACT Hand::get_act() { return act; }

GAME_RESULT Hand::get_result() { return result; }

void Hand::set_act(GAME_ACT at) { act = at; }