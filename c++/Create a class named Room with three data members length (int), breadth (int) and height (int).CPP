#include<iostream>
using namespace std;
class Room {
private:
int length;
    int breadth;
    int height;
public:
    void calculateArea(int length, int breadth) {
        int area = length * breadth;
        cout << "Area of the room: " << area << " square units" <<endl;
    }
    void calculateVolume(int length, int breadth, int height) {

        int volume = length * breadth * height;

        cout << "Volume of the room: " << volume << " cubic units" <<endl;

    }
};
int main() {
    int roomLength = 5;
    int roomBreadth = 3;
    int roomHeight = 2;
    Room myRoom;
    myRoom.calculateArea(roomLength, roomBreadth);
    myRoom.calculateVolume(roomLength, roomBreadth, roomHeight);
    return 0;

}