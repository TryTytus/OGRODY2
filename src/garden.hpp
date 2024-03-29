// Adam Tyton

#include "tree.hpp"

#define NULL 0

class TREE_CLASS;


class GARDEN_CLASS {
private:

    /** Tree count */
    unsigned int tNum;
    TREE_CLASS head;
    TREE_CLASS* last;

    /** last Tree id */
    unsigned int tLastID;


    /** Branch count */
    unsigned int bNum;

    /** Fruit count */
    unsigned int fNum;
    unsigned int fWeight;

public:

    // CONSTRUCTOR

    GARDEN_CLASS();

    void CONSTRUCTOR();

    // ------- GETTERS -------

    unsigned int getTreesTotal ();
    unsigned int getBranchesTotal ();
    unsigned int getFruitsTotal ();
    unsigned int getWeightsTotal ();


    TREE_CLASS* getTreePointer (unsigned int treeID);

    // ------- SETTERS -------

    void plantTree ();
    void extractTree (unsigned int treeID);
    void cloneTree (unsigned int treeID);

    void growthGarden ();
    void fadeGarden ();
    void harvestGarden ();


    // OTHER METHODS

    void decFWeight(unsigned int x);
    void addFWeight(unsigned int x);

    void decFNum(unsigned int x);
    void addFNum(unsigned int x);

    void decBNum(unsigned int x);
    void addBNum(unsigned int x);

    void decTNum(unsigned int x);
    void addTNum(unsigned int x);


};