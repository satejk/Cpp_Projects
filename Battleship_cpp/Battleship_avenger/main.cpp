#include <iostream>

using namespace std;


class Box{
    
public:
    
    double length;
    double breadth;
    double height;
    Box(void);
    ~Box(void);
    
    double getVolume(void);
};
    
    
Box::Box(void)
{
   
  length = 5;
  breadth = 10;
height = 2;

  cout<<"consturctor called"<<endl;
     
}

Box::~Box(void)
{

  cout<<"Destructor called"<<endl;
     
}


double Box::getVolume(void)
{
    
    return (length * breadth * height);
}

int main(int argc, char **argv)
{
    
    cout<<"Battleship: Avenge of the seven seas"<<endl;
    
    Box box1;

    double area = 0;
    cout<<"Volume = "<< box1.getVolume()<<endl;
    box1.length = 2.0;
    box1.breadth = 3.0;
    
    area = box1.length * box1.length;
    cout<<"area = "<< area<<endl;
    
    cout<<"Volume = "<< box1.getVolume()<<endl;
	return 0;
}


