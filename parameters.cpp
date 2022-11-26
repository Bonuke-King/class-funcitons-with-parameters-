#include <iostream>
#include <string.h>
using namespace std;


class Car {
public :
int speed (int maxSpeed);
};

int Car :: speed (int maxSpeed)
{
    return maxSpeed;
}
int main ()
{
Car myObj; //create an object of car
cout <<myObj.speed(300);//Call the method with an argument
return 0;


}




































