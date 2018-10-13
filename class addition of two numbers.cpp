#include<iostream>
using namespace std;
class Sum{
public:
Sum(int integer_1,int integer_2)
{
integer1= integer_1;
integer2= integer_2;
}

int add()
{
  int add= integer1+integer2;
  return add;
                            }



private:
int integer1,integer2;
};


int main(int argc, char const *argv[])
{
  int integer_1,integer_2;
  cout<<"Enter first integer"<<endl;
  cin>>integer_1;
  cout<<"Enter second integer"<<endl;
  cin>>integer_2;
 Sum s1(integer_1,integer_2);
  cout<<"Sum: "<< s1.add()<<endl;
  return 0;
}
