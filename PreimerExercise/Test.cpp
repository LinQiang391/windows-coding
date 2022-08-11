#include<iostream>
#include"Sales_item.h"
void main() {
	Sales_item book1,book2,book3;
	cin >> book1>>book2;
	//book3 = book1.operator+(book2);
	book3 = book1 + book2;
	cout << book3 <<endl;
}