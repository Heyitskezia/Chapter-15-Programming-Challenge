#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    int number;
    int date;

    public:
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
        return name;
    }
    int getNumber()
    {
        return number;
    }
    int getDate()
    {
        return date;
    }

};

class ProductionWorker : public Employee
{
 int shift;
 double hourlyPayment;

 public :
 ProductionWorker()
 {
  this -> shift = shift;
  this -> hourlyPayment = hourlyPayment;
 }

 void setShift(int shi)
 {
  shift = shi;

 }

 void setHourlyPayment(double hourlyPay)
 {
  hourlyPayment = hourlyPay;
 }

 int getShift()
 {
  return shift;
 }

 double getHourlyPayment()
 {
  return hourlyPayment;
 }


};


int main()
{
 string nam;
 int num,dat,shi;
 double hourlyPay;
 ProductionWorker input;

 cout << "Please input your name: ";
 cin >> nam ;

 cout << "Please input your ID: ";
 cin >> num ;

 cout << "Please input your hire date (DD/MM/YYY): ";
 cin >> dat ;

 cout << "Please input your shift (shift 1 / shift 2): ";
 cin >> shi;

 cout  << "Please input your hourly payment: $ ";
 cin >> hourlyPay ;

 input.setName(nam);
 input.setNumber(num);
 input.setDate(dat);
 input.setShift(shi);
 input.setHourlyPayment(hourlyPay);

 cout << endl << endl;

 cout << "Name: " << input.getName() << endl;
 cout << "ID: " << input.getNumber() << endl;
 cout << "Hire Date: " << input.getDate() << endl;
 cout << "Shift: " << input.getShift() << endl;
 cout << "Hourly Payment: $ " << input.getHourlyPayment() << endl;

 return 0;
}
