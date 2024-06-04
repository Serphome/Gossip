#include "CreateCommand.h"

CreateCommand::CreateCommand(string name, string type)
{
	this->name = name;
	this->type = type;
}

void CreateCommand::execute(vector<ParentGosip*>& gosips)
{
	if (gosips.size() >= 100)
	{
		throw exception("Limit Gossips");
	}
	ParentGosip* temp = FactoryGosip::create(name, type);
	gosips.push_back(temp);
	cout << "Ok, " << temp->get_name() << " gossip created" << endl;
}
