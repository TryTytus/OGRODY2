// Adam Tyton

#include "branch.hpp"
#include "fruit.hpp"
#include "tree.hpp"

#define NULL 0



// CONSTRUCTOR

BRANCH_CLASS::BRANCH_CLASS() {
    CONSTRUCTOR(NULL, NULL, NULL);
}


BRANCH_CLASS::BRANCH_CLASS(
        TREE_CLASS* parent,
        BRANCH_CLASS* prev,
        BRANCH_CLASS* next
        )  {
    CONSTRUCTOR(parent, prev, next);
}

void BRANCH_CLASS::CONSTRUCTOR(
        TREE_CLASS *parent,
        BRANCH_CLASS *prev,
        BRANCH_CLASS *next
        ) {
    this->parent = parent;
    this->prev = prev;
    this->next = next;

    bLen = 0;
    weight = 0;
    fNum = 0;
    tHeight = 0;

    // init fruit DBL
    head = new FRUIT_CLASS(
            this,
            NULL,
            NULL,
            0
            );
    last = head;
    //head.CONSTRUCTOR();
}

// DESTRUCTOR

BRANCH_CLASS::~BRANCH_CLASS() {
    FRUIT_CLASS* cur = last;

    while (cur != head) {
        FRUIT_CLASS* prevCur = cur->getPrev();
        delete cur;
        cur = prevCur;
    }

    delete head;
}


// GETTERS

unsigned int BRANCH_CLASS::getFruitsTotal()
{
    return 0;
}
unsigned int BRANCH_CLASS::getWeightsTotal()
{
    return 0;
}

unsigned int BRANCH_CLASS::getHeight()
{
    return 0;
}
unsigned int BRANCH_CLASS::getLength()
{
    return 0;
}

FRUIT_CLASS* BRANCH_CLASS::getFruitPointer(unsigned int inArea)
{
    return NULL;
}
TREE_CLASS* BRANCH_CLASS::getTreePointer()
{
    return NULL;
}

// SETTERS

void BRANCH_CLASS::growthBranch()
{

}
void BRANCH_CLASS::fadeBranch()
{

}

void BRANCH_CLASS::harvestBranch(unsigned int weightMax)
{

}
void BRANCH_CLASS::cutBranch(unsigned int cutTo)
{

}


// OTHER METHODS

void BRANCH_CLASS::decFWeight(unsigned int x) {
    // weight -= x;
    // if (parent != NULL)
    //     parent->decFWeight(x);
}

void BRANCH_CLASS::addFWeight(unsigned int x) {
    // weight += x;
    // if (parent != NULL)
    //     parent->addFWeight(x);
}

void BRANCH_CLASS::decFNum(unsigned int x) {
    // weight -= x;
    // if (parent != NULL)
    //     parent->decFNum(x);
}

void BRANCH_CLASS::addFNum(unsigned int x) {
    // weight += x;
    // if (parent != NULL)
    //     parent->addFNum(x);
}

void BRANCH_CLASS::pushFruit(FRUIT_CLASS* pFruit) {
    pFruit->setPrev(last);
    last->setNext(pFruit);

    last = pFruit;

    addFNum(1);
}

void BRANCH_CLASS::popFruit() {
    if (last != head) {
        unsigned int fWeight = last->getWeight();
        FRUIT_CLASS* before = last->getPrev();

        before->setNext(NULL);
        delete last;
        last = before;

        decFNum(1);
        decFWeight(fWeight);
    }
}

BRANCH_CLASS *BRANCH_CLASS::getPrev() {
    return prev;
}

BRANCH_CLASS *BRANCH_CLASS::getNext() {
    return next;
}

void BRANCH_CLASS::setPrev(BRANCH_CLASS *pBranch) {
    prev = pBranch;
}

void BRANCH_CLASS::setNext(BRANCH_CLASS *pBranch) {
    next = pBranch;
}

