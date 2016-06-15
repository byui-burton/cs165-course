/****************************************
* Team Activity 09
* Author: Br. Burton
****************************************/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;


public:
	string getName() const { return name; }
	void setName(string name) { this->name = name; }

	virtual void display()
	{
		cout << name << endl;
	}
};

class HourlyEmployee : public Employee
{
private:
	int hourlyWage;

public:
	int getHourlyWage() const { return hourlyWage; }
	void setHourlyWage(int hourlyWage) { this->hourlyWage = hourlyWage; }

	virtual void display()
	{
		cout << getName() << " - $" << hourlyWage << "/hour" << endl;
	}
};

class SalaryEmployee : public Employee
{
private:
	int salary;

public:
	int getSalary() const { return salary; }
	void setSalary(int salary) { this->salary = salary; }

	virtual void display()
	{
		cout << getName() << " - $" << salary << "/year" << endl;
	}
};

#define SIZE 3

int main()
{
	Employee* employees[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		char type;
		cout << "Enter employee type (h/s): ";
		cin >> type;

		// We could consider a getline here, but we'll assume no
		// spaces for now for simplicity
		string name;
		cout << "Enter name: ";
		cin >> name;

		if (type == 'h')
		{
			int wage;
			cout << "Enter the hourly wage: ";
			cin >> wage;

			// It would be best to check for valid integers here...

			HourlyEmployee* hourlyEmployee = new HourlyEmployee;
			hourlyEmployee->setName(name);
			hourlyEmployee->setHourlyWage(wage);

			employees[i] = hourlyEmployee;
		}
		else // type = 's'
		{
			int salary;
			cout << "Enter the salary: ";
			cin >> salary;

			// It would be best to check for valid integers here...

			SalaryEmployee* salaryEmployee = new SalaryEmployee;
			salaryEmployee->setName(name);
			salaryEmployee->setSalary(salary);

			employees[i] = salaryEmployee;
		}
	}

	// Now display them all
	for (int i = 0; i < SIZE; i++)
	{
		// Use polymorphism here, don't have an if statement...
		employees[i]->display();
	}

	// Clean up the memory. You must delete each employee object
	// separately. This is different than: delete[] employees; which
	// would delete a dynamically allocated array of regular employee
	// objects.
	for (int i = 0; i < SIZE; i++)
	{
		delete employees[i];

		// This is not technically necessary, but it considered good
		// programming practice to avoid pointing to memory that you
		// do not own any longer.
		employees[i] = NULL;
	}

	return 0;
}