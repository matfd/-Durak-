#pragma once
#include "Card.hpp"
#include "Deck.hpp"

enum GAME_ACT {
	Act_fightback, act_attack
};

enum GAME_RESULT {
	GAME_WIN, GAME_LOSE
};

class Hand {
protected:
	const int needCard = 6;
	std::vector<Card>c_hand;
	GAME_ACT act;
	GAME_RESULT result;
public:

	void take_card(Deck&);
	Card hand_pop(int);

	GAME_ACT get_act();
	GAME_RESULT get_result();

	void set_act(GAME_ACT);
};
