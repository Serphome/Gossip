#include "GossipsCommand.h"

void GossipsCommand::execute(vector<ParentGosip*>& gosips)
{
	sort(gosips.begin(), gosips.end(), [](ParentGosip* a, ParentGosip* b) {return a->get_name() > b->get_name(); });
	for (ParentGosip* a : gosips)
	{
		cout << a->get_name() << endl;
	}
}
