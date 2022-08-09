#pragma once
#include<string>
using namespace std;
class Sales_item
{
public:
	Sales_item();
	~Sales_item();
    friend std::ostream& operator<<(std::ostream& output, Sales_item& r)
    {
        output << "width: " << r.ISBN << ", ";
        output << "height: " << r.Sale_nums << ", ";

        return output;
    }

    friend std::istream& operator>>(std::istream& input, Sales_item& r)
    {
        input >> r.ISBN >> r.Sale_nums;
        return input;
    }
	string ISBN;
	int Sale_nums;
	float Total;
private:

};

Sales_item::Sales_item()
{
	
}

Sales_item::~Sales_item()
{
}

