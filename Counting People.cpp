#include <iostream>
using namespace std;

int main() {
	//People that where in the room initially
	int PeopleInRoom = 3;
	cout << "People in the room: " << PeopleInRoom << "\n";
	
	//Two people left the room
	--PeopleInRoom;
	cout << "One person left the room. People in the room: " << PeopleInRoom << "\n";
	--PeopleInRoom;
	cout << "One person left the room. People in the room: " << PeopleInRoom << "\n";
	
	//One person entered the room
	++PeopleInRoom;
	cout << "One person enter the room. People in the room: " << PeopleInRoom;
	return 0;	
}
