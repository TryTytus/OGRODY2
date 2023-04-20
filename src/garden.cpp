// Adam Tyton

#include "garden.hpp"


// CONSTRUCTOR

GARDEN_CLASS::GARDEN_CLASS() {
    CONSTRUCTOR();
}

void GARDEN_CLASS::CONSTRUCTOR() {
    tLastID = 0;
    tNum = 0;
    bNum = 0;

    fNum = 0;
    fWeight = 0;

    head = TREE_CLASS(); // TREE_CLASS(0, 0, NULL, NULL, this);
    head.CONSTRUCTOR(0, 0, NULL, NULL, this);
    last = &head;
}


// ------- GETTERS -------

unsigned int GARDEN_CLASS::getTreesTotal() {
    return tNum;
}

unsigned int GARDEN_CLASS::getBranchesTotal() {
    return bNum;
}

unsigned int GARDEN_CLASS::getFruitsTotal() {
    return fNum;
}

unsigned int GARDEN_CLASS::getWeightsTotal() {
    return fWeight;
}


TREE_CLASS *GARDEN_CLASS::getTreePointer(unsigned int treeID) {
    return NULL;
}

// ------- SETTERS -------

void GARDEN_CLASS::plantTree() {

}

void GARDEN_CLASS::extractTree(unsigned int treeID) {

}

void GARDEN_CLASS::cloneTree(unsigned int treeID) {

}

void GARDEN_CLASS::growthGarden() {

}

void GARDEN_CLASS::fadeGarden() {

}

void GARDEN_CLASS::harvestGarden() {

}

void GARDEN_CLASS::decFWeight(unsigned int x) {
    fWeight -= x;
}

void GARDEN_CLASS::addFWeight(unsigned int x) {
    fWeight += x;
}

void GARDEN_CLASS::decFNum(unsigned int x) {
    fNum -= x;
}

void GARDEN_CLASS::addFNum(unsigned int x) {
    fNum += x;
}

void GARDEN_CLASS::decBNum(unsigned int x) {
    bNum -= x;
}

void GARDEN_CLASS::addBNum(unsigned int x) {
    bNum += x;
}

void GARDEN_CLASS::decTNum(unsigned int x) {
    tNum -= x;
}

void GARDEN_CLASS::addTNum(unsigned int x) {
    tNum += x;
}




