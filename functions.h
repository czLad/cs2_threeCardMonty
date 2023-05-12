//
// Created by myatz on 2/23/2023.
//

#ifndef THREECARDMONTY_FUNCTIONS_H
#define THREECARDMONTY_FUNCTIONS_H
#include<iostream>

void playThreeCardsMonty();
void assignCardValue(int &card);
void displayCardValue(int &cardValue);
void assignSwapTimes(int &swapTimes);
void swap3Cards(int &card1,int &card2,int &card3);
void swap3CardsNTimes(int &card1, int &card2, int &card3, int &swapTimes);
void checkWhichCardGotRight(int &card1, int &card2, int &card3, int &answer1, int &answer2, int &answer3);

void swap(int &card1, int &card2);
int intInput();
void output(std::string message);
bool goAgain();

#endif //THREECARDMONTY_FUNCTIONS_H
