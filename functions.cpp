//
// Created by myatz on 2/23/2023.
//

#include "functions.h"

void playThreeCardsMonty()
{
    do
    {
        int card1, card2, card3, swapTimes;
        int answer1, answer2, answer3;
        assignCardValue(card1);
        assignCardValue(card2);
        assignCardValue(card3);
        output("card1 is ");
        displayCardValue(card1);
        output("card2 is ");
        displayCardValue(card2);
        output("card3 is ");
        displayCardValue(card3);
        assignSwapTimes(swapTimes);
        swap3CardsNTimes(card1, card2, card3, swapTimes);
        output("What is the value of card1?\n");
        answer1 = intInput();
        output("What is the value of card2?\n");
        answer2 = intInput();
        output("What is the value of card3?\n");
        answer3 = intInput();
        checkWhichCardGotRight(card1, card2, card3, answer1, answer2, answer3);
    }while(goAgain());
}
void assignCardValue(int &card)
{
    card = (rand() % 7) + 3;
}
void displayCardValue(int &cardValue)
{
    std::cout << cardValue <<"\n";
}
void assignSwapTimes(int &swapTimes)
{
    swapTimes = (rand() % 7) + 3;
}
void swap3Cards(int &card1,int &card2,int &card3)
{
    int choice;
    choice = rand() % 3;
    if(choice == 0)
    {
        swap(card1, card2);
        std::cout << "card1 and card2 are swapping\n";
    }
    else if(choice == 1)
    {
        swap(card1, card3);
        std::cout << "card1 and card3 are swapping\n";
    }
    else
    {
        swap(card2, card3);
        std::cout << "card2 and card3 are swapping\n";
    }
}
void swap3CardsNTimes(int &card1, int &card2, int &card3, int &swapTimes)
{
    for(int i = swapTimes; i > 0; i--)
    {
        swap3Cards(card1, card2, card3);
    }
}
void checkWhichCardGotRight(int &card1, int &card2, int &card3, int &answer1, int &answer2, int &answer3)
{
    if(card1 == answer1)
    {
        std::cout << "You got card1 right\n";
    }
    else
    {
        std::cout << "You got card1 wrong\n";
    }
    if(card2 == answer2)
    {
        std::cout << "You got card2 right\n";
    }
    else
    {
        std::cout << "You got card2 wrong\n";
    }
    if(card3 == answer3)
    {
        std::cout << "You got card3 right\n";
    }
    else
    {
        std::cout << "You got card3 wrong\n";
    }
}
void swap(int &card1, int &card2)
{
    int temp = card1;
    card1 = card2;
    card2 = temp;
}
int intInput()
{
    int input;
    std::cin >> input;
    return input;
}
void output(std::string message)
{
    std::cout << message;
}
bool goAgain()
{
    char answer;
    output("Would you like to play again? (y/n)\n");
    std::cin >> answer;
    return (tolower(answer) == 'y');
}
