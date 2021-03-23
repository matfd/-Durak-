//#include "Dealer.hpp"
//
//void Dealer::game(std::vector<Card>&table, Card trump) {
//	if (act == act_attack) {
//		if (table.size() == 0 && c_hand.size() != 0) {
//			Card cr;
//			for (int i = 0; i < c_hand.size(); i++) {
//				if (c_hand[i].get_rank() < c_hand[0].get_rank()&&c_hand[i].get_suit()!=trump.get_suit()) {
//					cr = this->hand_pop(i);
//				}
//			}
//			table.push_back(cr);
//		}
//		else if (c_hand.size() != 0) {
//			Card cr; 
//			for (int i = 0; i < table.size(); i++) {
//				for (int j = 0; j < table.size(); j++) {
//					if (table[i].get_rank() == c_hand[j].get_rank()) {
//						cr = this->hand_pop(j);
//						table.push_back(cr);
//						break;
//					}
//				}
//			}
//		}
//
//		int i = 0;
//		for (int i = 0; i < table.size(); i++) {
//			for (int j = 0; j < c_hand.size(); j++) {
//				if (table[i].get_rank() == c_hand[j].get_rank()) {
//					i++;
//				}	
//			}
//		}
//
//		/*if (i = 0) {
//			act = Act_fightback;
//			pl.set_act(act_attack);
//		}*/
//
//		//if (pl.get_act() == Act_fightback) {
//		//	act = act_attack;
//		//}
//	}
//
//	else {
//		if (table.size() != 0) {
//			int size = c_hand.size();
//			for (int j = 0; j < table.size(); j++) {
//				for (int i = 0; i < c_hand.size(); i++) {
//					if (table[j].get_rank() < c_hand[i].get_rank() && table[j].get_suit() == c_hand[i].get_suit()) {
//						Card cr = this->hand_pop(i);
//						table.push_back(cr);
//					}
//					else if (c_hand[i].get_suit() == trump.get_suit() && table[j].get_suit() != trump.get_suit()) {
//						Card cr = this->hand_pop(i);
//						table.push_back(cr);
//					}
//					else if (c_hand[i].get_suit() == trump.get_suit() && table[j].get_suit() == trump.get_suit() && table[j].get_rank() < c_hand[i].get_rank()) {
//						Card cr = this->hand_pop(i);
//						table.push_back(cr);
//					}
//				}
//			}
//			if(size = c_hand.size()) {
//				for (int i = 0; i < table.size(); i++) {
//					c_hand.push_back(table[i]);
//					table.pop_back();
//					act = Act_fightback;
//				/*	pl.set_act(act_attack);*/
//				}
//			}
//		}
//	}
//}