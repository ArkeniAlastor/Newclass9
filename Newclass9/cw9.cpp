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
	int GetPosition();
	void Call();
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
	this->position = position;
}

int Elevator::GetPosition()
{
	return 0;
}

void Elevator::Call()
{
	cout << "Введите этаж от " << groundFloor << " до " << topFloor << endl;
	cin >> position;
	cout << "Текущая позиция = " << position << endl;

}


int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();
}