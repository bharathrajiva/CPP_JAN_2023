#include <iostream>
using namespace std;
struct Smartphone {
	string name;
	string mode;

};
struct people {
	string name;
	int age{ 0 };
	Smartphone smartphone;
};
void printSmartphone(Smartphone smartphone) {
	cout << smartphone.name << endl;
	cout << smartphone.mode << endl;

}
void printPeople(people p) {
	cout << p.age << endl;
	cout << p.name << endl;
	printSmartphone(p.smartphone);

}
class id1 {
public:
	int mark{ 0 };
	int id{0};
	Smartphone smartphone;
	people p;
	void print(int mark,int id, Smartphone smartphone,people p ) {
		cout << mark << endl;
		cout << id << endl;
		printSmartphone(smartphone);
		printPeople(p);

	}
};
int main() {

	Smartphone smartphone1;
	smartphone1.name = "Iphone";
	smartphone1.mode = "5G";
	people p;
	p.age = 16;
	p.name = "boro1s";
	p.smartphone = smartphone1;
	printPeople(p);
	id1 a;
	a.mark = 90;
	a.id = 89;
	a.p = p;
	a.smartphone = smartphone1;
	a.print(a.mark, a.id, a.smartphone, a.p);
}




