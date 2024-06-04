#include "MessageCommand.h"

void MessageCommand::execute(vector<ParentGosip*>& gosips)
{
	ParentGosip* temp = ParentGosip::find_gosip(name, gosips);
	temp->get_message(message);
}
