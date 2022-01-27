#include<iostream>
using namespace std;
class person
{
private:
    string name,city,email,phone;
    int quantity;
public:
    getperson()
    {
        cout<<"Enter Name: "; cin>>name;
        cout<<"enter city : "; cin>>city;
        cout<<"Enter Phone : "; cin>>phone;
        cout<<"enter email : "; cin>>email;
    }
    showperson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"Phone : "<<phone<<endl;
        cout<<"Email : "<<email<<endl;
    }
};
class employee : public person
{
public:
    int emp_id;
public:
    cout<<"Enter Employee id : "; cin>>emp_id;
    Search_medicine();
};
class customer : public person
{
private:
    int order,quantity;
    string name;
public:
    order()
    {
        cout<<"Enter medicine name : "; cin>>name;
        cout<<"Enter quantity : "; cin>>quantity;

    }
};
class medicine
{
private:
    string name,mfg,exp;
    double price;
public:
    getmedicine()
    {
        cout<<"Enter medicine name : "; cin>>name;
        cout<<"enter medicine mfg Date : "; cin>>mfg;
        cout<<"Enter medicine exp Date : "; cin>>exp;
        cout<<"Enter medicine Price : "; cin>>price;
    }
    showmedicine()
    {
        cout<<"Medicine Name : "<<name<<endl;
        cout<<"Medicine mfg date : "<<mfg<<endl;
        cout<<"Medicine exp date : "<<exp<<endl;
        cout<<"Medicine Price : "<<price<<endl;
    }
};
class stockMedicine : public medicine
{
   private:
       int quantity,
};
class SellMedicine : public medicine
{

};
int main()
{

}
