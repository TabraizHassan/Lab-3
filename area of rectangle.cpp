#include<iostream>
using namespace std;
class Rectangle
{
public:
float area_calculation(float length,float width)
{
  float area=length* width;
  return area;
}


private:
float length;
float width;
};

int main(int argc, char const *argv[])
{
Rectangle a1;
cout<<"Area of rectangle is: "<< a1.area_calculation(2.2,4.4)<<endl;
  return 0;
}
