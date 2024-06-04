#include "GosipDeduplicator.h"

void GosipDeduplicator::get_message(string message)
{
	if (!messages.contains(message))
	{
		messages.insert(message);
		ParentGosip::send_message(message);
	}
}
