// Adam Tyton

class TREE_CLASS;

class GARDEN_CLASS {

private:

    /** Tree count */
    unsigned int tNum;
    TREE_CLASS* head;
    TREE_CLASS* last;

    /** last Tree id */
    unsigned int tLastID;


    /** Branch count */
    unsigned int bNum;

    /** Fruit count */
    unsigned int fNum;
    unsigned int fWeight;


public:

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

    void harvestGarden (int a);

};