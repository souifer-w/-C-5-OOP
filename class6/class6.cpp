
#include <iostream>
using namespace std;
class part
{
private :
	int x1;
	int x2;

public :
	part() :x1(0), x2(0) {}
	part(int v1, int v2) :x1(v1), x2(v2) {}

	void add(part p1, part p2);

	part sub(part p1);

	void show();
};

void part::add(part p1, part p2)
{
	x1 = p1.x1 + p2.x1;
	x2 = p1.x1 + p2.x2;

}

part part :: sub(part p1)
{
	part p3;
	p3.x1 = p1.x1 * x1;
	p3.x2 = p1.x2 * x2;
	return p3;
}
void part :: show()
{

	cout << " " << x1 << "  " << x2 << endl;
}

int main()
{
	part p1(12, 14), p2(12, 13), p3;
	p3.add(p1, p2);
	p3.show();
	p3 = p1.sub(p2);
	p3.show();
	return 0;
}

