#pragma once
#include<string>
using namespace std;
class Sales_item
{
public:
	Sales_item();
	~Sales_item();
    string ISBN;
    int Sale_nums;
    float Price;
    //Sales_item operator+(Sales_item s1);
    friend Sales_item operator+(Sales_item& s1, Sales_item& s2);
    friend ostream& operator<<(ostream& output, Sales_item& r)
    {
        output << r.ISBN << " " << r.Sale_nums << " " << r.Sale_nums*r.Price << " " << r.Price;
        return output;
    }

    friend istream& operator>>(istream& input, Sales_item& r)
    {
        input >> r.ISBN >> r.Sale_nums>>r.Price;
        return input;
    }


private:
 
};

Sales_item::Sales_item()
{
	
}

Sales_item::~Sales_item()
{
}
//Sales_item Sales_item::operator+(Sales_item s1) {
//    Sales_item temp;
//    temp.ISBN = this->ISBN;
//    temp.Sale_nums = this->Sale_nums + s1.Sale_nums;
//    //temp.Sale_total = this->Sale_total + s1.Sale_total;
//    temp.Price = (this->Price * this->Sale_nums + s1.Price * s1.Sale_nums) / temp.Sale_nums;
//    return temp;
//}
Sales_item operator+(Sales_item& s1,Sales_item& s2) {
    Sales_item temp;
    temp.ISBN = s1.ISBN;
    temp.Sale_nums = s1.Sale_nums + s2.Sale_nums;
    //temp.Sale_total = this->Sale_total + s1.Sale_total;
    temp.Price = (s1.Price *s1.Sale_nums + s2.Price * s2.Sale_nums) / temp.Sale_nums;
    return temp;
}

