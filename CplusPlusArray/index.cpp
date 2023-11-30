//
// Created by Lenovo on 2023/11/30.
//

#include "string"
#include "iostream"
#include "sstream"
#include "algorithm"
#include "vector"

struct CardInfo {
    std::string label;
    int value;
    CardInfo(std::string cardLabel,int cardValue) {
        label = cardLabel;
        value = cardValue;
    }
};

struct CardType {
    std::string type;
    CardType(std::string cardType) {
        type = cardType;
    }
};

CardInfo* featureCard[4] = { new CardInfo("A",1),new CardInfo("J",11),new CardInfo("Q",12),new CardInfo("K",13) };
CardType* cardType[4] = {new CardType("♠"),new CardType("♣"),new CardType("♦"),new CardType("♥")};
std::vector<CardInfo*> cardGroup;

void initCard() {
    std::string cardLabel;
    std::stringstream ss;
    cardGroup.push_back(new CardInfo("Joker",14));
    cardGroup.push_back(new CardInfo("King",15));
    for(int i =0; i < sizeof(cardType)/sizeof(cardType[0]); i++) {
        for(int j=1; j <= 13; j++) {
            if(featureCard[i]->value == j) {
                ss << cardType[i]->type << featureCard[i]->label;
                cardLabel += ss.str();
            } else {
                ss << cardType[i]->type << j;
                cardLabel += ss.str();
            }
            cardGroup.push_back(new CardInfo(cardLabel,j));
        }
    }
    std::cout<<"card init"<<std::endl;
};