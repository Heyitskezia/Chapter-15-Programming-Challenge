#include<iostream>
#include<string>
using namespace std ;

class Employee
{
 string name ;
 int number ;
 int date ;

 public :

 Employee()
 {
  this -> name = name;
  this -> number = number;
  this -> date = date;

 }

 void setName(string nam)
 {
  	name = nam;
 }
 	void setNumber(int num)
 {
 	number = num;
 }
 void setDate(int dat)
 {
    date = dat;
 }
 	string getName()
 {
    return name ;
 }
 int getNumber()
 {
    return number  ;
 }
 int getDate()
 {
    return date ;
 }

};

class ShiftSupervisor : public Employee
{
    private:
    double salary, bonus;
    public:
    ShiftSupervisor()
    {
        this -> salary = salary;
        this -> bonus = bonus;
    }
    void setSalary(double sal)
    {
        salary = sal;
    }
    void setBonus(double bon)
    {
        bonus = bon;
    }
    int getBonus()
    {
        return bonus;
    }
    int getSalary()
    {
        return salary;
    }
};


int main()
{
 string nam;
 int num, dat;
 double annualSalary, annualBonus;

Employee input;
ShiftSupervisor print;

 cout << "Please input your name: ";
 cin >> nam ;

 cout << "Please input your ID number: "; 
 cin >> num;

 cout << "Please input your hire date (DD''MM/YYY): ";
 cin >> dat;

 cout << "Please input your annual salary: $ ";
 cin >> annualSalary;

 cout << "Please input your annual bonus: $ ";
 cin >> annualBonus;

 input.setName(nam);
 input.setNumber(num);
 input.setDate(dat);
 print.setSalary(annualSalary);
 print.setBonus(annualBonus);

 cout << endl << endl;
 
 cout << "Employee infromation" << endl;
 cout << "Name: " << input.getName() << endl;
 cout << "ID: " << input.getNumber() << endl;;
 cout << "Hire Date: " << input.getDate() << endl;
 cout << "Annual Salary: $" << print.getSalary() << endl;
 cout << "Annual Bonus: $" << print.getBonus() << endl;

 return 0;
}
