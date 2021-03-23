#include "Player.hpp"
#include <SFML/Graphics.hpp>

void Player::set_PositionCard() {
	int x = 30;
	for (int i = 0; i < c_hand.size(); i++) {
		c_hand[i].set_PositionCard(500+x*i,400);
	}
}

void Player::draw_pl(sf::RenderWindow&window) {
	this->set_PositionCard();
	for (int k = 0; k < c_hand.size(); k++) {
		c_hand[k].drawCard(window);
	}
}

int Player::move_atHand() {
	int i = 0;
	bool keyA = false;
	bool keyD = false;

	while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { keyA = true; }
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { keyD = true; }

		if (keyA&&i < c_hand.size()) { i++; }
		if (keyD&&i > 0) { i--; }
	}
	return i;
}

void Player::Upload() {}

void Player::game(std::vector<Card>&table, Card trump) {

	if (act == act_attack) {
		if (table.size() == 0 && c_hand.size() != 0) {
			Card cr = this->hand_pop(this->move_atHand());
			table.push_back(cr);
		}
		else if (c_hand.size() != 0) {
			int ii = this->move_atHand();
			for (int i = 0; i < table.size(); i++) {
				if (c_hand[ii].get_rank() == table[i].get_rank()) { 
					Card cr = this->hand_pop(this->move_atHand());
					table.push_back(cr);
				}
			}
		}
	}

	else {

		if (table.size() != 0) {

			int i = this->move_atHand();

			for (int j = 0; j < table.size(); j++) {

				if (table[j].get_rank() < c_hand[i].get_rank() && table[j].get_suit() == c_hand[i].get_suit()) {
					Card cr = this->hand_pop(this->move_atHand());
					table.push_back(cr);
				}

				else if(c_hand[i].get_suit()==trump.get_suit()&&table[j].get_suit()!=trump.get_suit() ){
					Card cr = this->hand_pop(this->move_atHand());
					table.push_back(cr);
				}

				else if (c_hand[i].get_suit() == trump.get_suit()&& table[j].get_suit() == trump.get_suit()&& table[j].get_rank() < c_hand[i].get_rank()){
					Card cr = this->hand_pop(this->move_atHand());
					table.push_back(cr);
				}

				else { this->game(table,trump); return; }

			}
		}
	}
}