#include <iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;
public:
	Elevator(int ground, int top);
	void onOff(); // вкл выкл
	void setPosition(int pos); // установка этажа
	int GetPosition()const;
	void Call();
	void Print() const;
};

Elevator::Elevator(int ground, int top)
{
	groundFloor = ground;
	topFloor = top;
	OnOff = false;
	works = false;
	position = 0;
}

void Elevator::onOff()
{
	OnOff = !OnOff;
}

void Elevator::setPosition(int pos)
{
	this->position = pos;
}

int Elevator::GetPosition()const
{
	//this->position = 1000; // error
	return 0;
}

void Elevator::Call()
{

	int too;
	do
	{
		cout << "Enter the floor from " << groundFloor << " to " << topFloor << ": ";
		cin >> too;

		if (too < groundFloor || too > topFloor)
		{
			cout << "Error! There is no such floor. Try again.\n";
		}
	} while (too < groundFloor || too > topFloor);

	position = too;
	cout << "Current position = " << position << endl;
}

void Elevator::Print() const
{
	cout << "|-! Elevator Info !-|\n";
	cout << "Ground floor: " << groundFloor << endl;
	cout << "Top floor: " << topFloor << endl;
	cout << "On/Off: " << (OnOff ? "On" : "Off") << endl;
	cout << "Works: " << (works ? "Yes" : "No") << endl;
	cout << "Current position: " << position << endl;
	cout << "|-------------------|\n";
}

int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();
	el.Print();
}