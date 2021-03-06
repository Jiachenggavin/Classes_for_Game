#ifndef ITEMS_H
#define ITEMS_H
#include <string>
#include "../creature/Creature.h"
#include "../List/Linkedlist.h"

using std::cout;
using std::endl;
using std::string;

class items
{
private:
	int ID;
	string name;
	int amount;
	int maxamount;
	int price;
	bool usable;
public:
	items();
	items(string nam);
	items(int id, string nam, int amo, int maxam, int pri, int us);
	string getname();
	int getID();
	int getam();
	int getpri();
	int getmax();
	int amountadd();
	int amountadd(int n);
	int amountsub();
	int amountsub(int n);
	bool canbeused();
	virtual string getSpecies() = 0;
	virtual void* use() = 0;
	virtual void* use(Creature* sth);
	virtual void showinfo() = 0;
	virtual bool canbeequip() = 0;
};


#endif
