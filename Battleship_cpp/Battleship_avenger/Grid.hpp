

class Grid{

public:
    Grid(void);
    virtual ~Grid(void);
    
    void setDimension(int,int);
    int getGridRows(void);
    int getGridCols(void);


private:
    
    int gridRows;
    int gridCols;
};