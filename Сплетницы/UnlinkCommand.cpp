#include "UnlinkCommand.h"

UnlinkCommand::UnlinkCommand(string name1, string name2)
{
	this->name1 = name1;
	this->name2 = name2;
}

void UnlinkCommand::execute(vector<ParentGosip*>& gosips)
{
	ParentGosip* temp1 = ParentGosip::find_gosip(name1, gosips);
	ParentGosip* temp2 = ParentGosip::find_gosip(name2, gosips);
	if (temp1 != nullptr && temp2 != nullptr && temp1->del_gosip(temp2))
	{
		cout << name2 << " is unlinked from " << name1 << endl;
	}
	else
	{
		cout << name2 << " is not linked to " << name1 << endl;
	}
}
