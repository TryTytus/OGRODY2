// Adam Tyton

#include "tree.hpp"
#include "branch.hpp"

#define NULL 0


// CONSTRUCTOR

TREE_CLASS::TREE_CLASS() {
    //CONSTRUCTOR(0, 0, NULL, NULL, NULL);
}


TREE_CLASS::TREE_CLASS(
        unsigned int treeID,
        unsigned int tHeight,
        TREE_CLASS* prev,
        TREE_CLASS* next,
        GARDEN_CLASS* parent
        ) {
    CONSTRUCTOR(
            treeID,
            tHeight,
            prev,
            next,
            parent
            );
}

void TREE_CLASS::CONSTRUCTOR(
        unsigned int treeID,
        unsigned int tHeight,
        TREE_CLASS *prev,
        TREE_CLASS *next,
        GARDEN_CLASS *parent
        ) {
    this->treeID = treeID;
    this->tHeight = tHeight;

    this->prev = prev;
    this->next = next;

    this->parent = parent;

    fNum = 0;
    bNum = 0;
    weight = 0;


    head = new BRANCH_CLASS(this, NULL, NULL);
    this->last = head;
    //head.CONSTRUCTOR();
}

// DESTRUCTOR

TREE_CLASS::~TREE_CLASS() {
    BRANCH_CLASS* cur = last;
    while (cur != head) {
        BRANCH_CLASS* prevCur = cur->getPrev();
        delete cur;
        cur = prevCur;
    }
    delete head;
}


unsigned int TREE_CLASS::getBranchesTotal ()
{
    return 0;
}
unsigned int TREE_CLASS::getFruitsTotal ()
{
    return 0;
}
unsigned int TREE_CLASS::getWeightsTotal ()
{
    return 0;
}

unsigned int TREE_CLASS::getNumber ()
{
    return 0;
}
unsigned int TREE_CLASS::getHeight ()
{
    return 0;
}

GARDEN_CLASS* TREE_CLASS::getGardenPointer ()
{
    return NULL;
}
BRANCH_CLASS* TREE_CLASS::getBranchPointer (unsigned int height)
{
    return NULL;
}

// ------- SETTERS -------

void TREE_CLASS::growthTree ()
{

}
void TREE_CLASS::fadeTree ()
{
    
}
void TREE_CLASS::harvestTree (unsigned int weightMax)
{

}
void TREE_CLASS::cutTree (unsigned int cutTo)
{

}
void TREE_CLASS::cloneBranch (BRANCH_CLASS* pBranch)
{

}

// OTHER METHODS

void TREE_CLASS::decFWeight(unsigned int x) {
    // weight -= x;
    // if (parent != NULL)
    //     parent->decFWeight(x);
}

void TREE_CLASS::addFWeight(unsigned int x) {
    // weight += x;
    // if (parent != NULL)
    //     parent->addFNum(x);
}

void TREE_CLASS::decFNum(unsigned int x) {
    // fNum -= x;
    // if (parent != NULL)
    //     parent->decFNum(x);
}

void TREE_CLASS::addFNum(unsigned int x) {
    // fNum += x;
    // if (parent != NULL)
    //     parent->addFNum(x);
}

void TREE_CLASS::decBNum(unsigned int x) {
    // bNum -= x;
    // if (parent != NULL)
    //     parent->decBNum(x);
}

void TREE_CLASS::addBNum(unsigned int x) {
    // bNum += x;
    // if (parent != NULL)
    //     parent->addBNum(x);
}

void TREE_CLASS::pushBranch(BRANCH_CLASS* pBranch) {
    pBranch->setPrev(last);
    last->setNext(pBranch);

    last = pBranch;

    addBNum(1);
}

void TREE_CLASS::popBranch() {
    if (last != head) {
        unsigned int fWeight = last->getWeightsTotal();
        unsigned int fNum = last->getFruitsTotal();

        BRANCH_CLASS* before = last->getPrev();
        before->setNext(NULL);

        delete last;
        last = before;

        decBNum(1);
        decFWeight(fWeight);
        decFNum(fNum);
    }
}


