#include "ListenersCommand.h"

ListenersCommand::ListenersCommand(string name)
{
	this->name = name;
}

void ListenersCommand::execute(vector<ParentGosip*>& gosips)
{
	ParentGosip* temp = ParentGosip::find_gosip(name, gosips);
	vector<ParentGosip*> data = temp->get_gosip_resend();
	sort(data.begin(), data.end(), [](ParentGosip* a, ParentGosip* b) {return a->get_name() > b->get_name(); });
	for (ParentGosip* a : gosips)
	{
		cout << a->get_name() << endl;
	}
}
