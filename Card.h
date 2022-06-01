#pragma once
#include<string>
class Card
{
    private:      
    char m_card;         //  'A'   ,'2', '3', '4', '5', '6', '7', '8', '9', 'K', 'J', 'Q'
    int m_value,         //1 or 11 , 2  , 3  ,  4,   5 ,  6 ,  7 ,  8 ,  9,  10, 10,  10
    m_suite;             //0 spades, 1 clubs, 2 hearts, 3 diamonds
    std::string m_nameS; 
    bool m_given;        //Check if it's been wether given or not. works as an index
 int assignValue();   

    public:
    Card(char, int);
    Card(const Card&);

    int getValue()        const;
    int getSuite()        const;
    std::string getName() const;
    bool getIfGiven()     const;
    char getCard()        const;

    void setGiven(bool x);

    void nameCard();
};