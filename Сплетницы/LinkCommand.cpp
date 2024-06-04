#include "LinkCommand.h"

LinkCommand::LinkCommand(string name1, string name2)
{
	this->name1 = name1;
	this->name2 = name2;
}

void LinkCommand::execute(vector<ParentGosip*>& gosips)
{
	ParentGosip* temp1 = ParentGosip::find_gosip(name1, gosips);
	ParentGosip* temp2 = ParentGosip::find_gosip(name2, gosips);
	if (temp1 != nullptr && temp2 != nullptr)
	{
		temp1->add_gosip_listen(temp2);
		cout << "Ok, " << name2 << " listens " << name1 << endl;
	}
	else
	{
		cout << "Unknown name" << endl;
	}
}