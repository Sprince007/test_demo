#include"Card.h"
#include"iostream"
int Card::assignValue()
{
    if(m_card == 'A')         return 11;
    else if (m_card == 'K' || 
             m_card == 'J' || 
             m_card == 'Q')   return 10;
    else                      return (m_card - '0');
}

 Card::Card(char cardV, int suite)
{
    m_card = cardV;
    m_value = assignValue();
    m_suite = suite;
    m_given = false;
}

Card::Card(const Card& card)
{
    m_card = card.getCard()     ;
    m_value = card.getValue();
    m_suite = card.getSuite()   ; 
    m_nameS = card.getName()    ;
    m_given = card.getIfGiven() ; 
}

int Card::getValue() const
{ return m_value; }

int Card::getSuite() const
{ return m_suite; }

std::string Card::getName() const
{ return m_nameS; }

bool Card::getIfGiven() const
{ return m_given; }

char Card::getCard() const
{ return m_card; }

void Card::setGiven(bool x)
{ m_given = x; }



void Card::nameCard()
{
    switch(m_suite)
    {
        case 0: m_nameS = "spades"  ; break;
        case 1: m_nameS = "clubs"   ; break;
        case 2: m_nameS = "hearts"  ; break;
        case 3: m_nameS = "diamonds";
    }
    if(m_card == 'A')       std::cout << "Ace"  ;
    else if (m_card == 'J') std::cout << "Jack";
    else if (m_card == 'Q') std::cout << "Queen";
    else if (m_card == 'K') std::cout << "King";
    else                    std::cout << m_value;

    std::cout << " of " << m_nameS << std::endl;
}
