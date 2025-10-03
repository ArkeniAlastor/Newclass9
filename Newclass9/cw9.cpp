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
	void onOff(); // ��� ����
	void setPosition(int pos); // ��������� �����
	int GetPosition()const;
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

int Elevator::GetPosition()const
{
	//this->position = 1000; // error
	return 0;
}

void Elevator::Call()
{
	cout << "������� ���� �� " << groundFloor << " �� " << topFloor << endl;
	cin >> position;
	cout << "������� �������  = " << position << endl;
}

const.Print()
{

}

int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();
}