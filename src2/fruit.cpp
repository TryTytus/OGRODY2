// Adam Tyton

#include "fruit.hpp"

#define NULL 0

// CONSTRUCTOR

FRUIT_CLASS::FRUIT_CLASS() {
    CONSTRUCTOR(NULL, NULL, NULL, 0);
}


FRUIT_CLASS::FRUIT_CLASS(
        BRANCH_CLASS* parent,
        FRUIT_CLASS* prev,
        FRUIT_CLASS* next,
        unsigned int bLenght
        ) {
    CONSTRUCTOR(parent, prev, next, bLenght);
}

void FRUIT_CLASS::CONSTRUCTOR(
        BRANCH_CLASS* parent,
        FRUIT_CLASS* prev,
        FRUIT_CLASS* next,
        unsigned int bLenght
        ) {
    this->parent = parent;
    this->prev = prev;
    this->next = next;

    weight = 0;
    // from parent

    len = bLenght;
}


// GETTERS
unsigned int FRUIT_CLASS::getLength()
{
    return 0;
}
unsigned int FRUIT_CLASS::getWeight()
{
    return 0;
}

BRANCH_CLASS* FRUIT_CLASS::getBranchPointer()
{
    return NULL;
}

// SETTERS
void FRUIT_CLASS::growthFruit()
{

}
void FRUIT_CLASS::fadeFruit()
{

}
void FRUIT_CLASS::pluckFruit()
{

}

// OTHER METHODS

void FRUIT_CLASS::decFWeight(unsigned int x)
{

}
void FRUIT_CLASS::addFWeight(unsigned int x)
{

}

FRUIT_CLASS* FRUIT_CLASS::getPrev()
{
    return NULL;
}

FRUIT_CLASS* FRUIT_CLASS::getNext()
{
    return NULL;
}

void FRUIT_CLASS::setPrev(FRUIT_CLASS* pFruit)
{

}

void FRUIT_CLASS::setNext(FRUIT_CLASS* pFruit)
{

}

void FRUIT_CLASS::setLength(unsigned int bLength)
{

}