#include <iostream>

using namespace std;


class Box{
    
public:
    
    double length;
    double breadth;
    double height;
    
    
};
    


int main(int argc, char **argv)
{
    
    cout<<"Battleship: Avenge of the seven seas"<<endl;
    
    Box box1;

    double area = 0;
    
    box1.length = 2.0;
    box1.breadth = 3.0;
    
    area = box1.length * box1.length;
    cout<<"area = "<< area<<endl;
    
    
	return 0;
}


