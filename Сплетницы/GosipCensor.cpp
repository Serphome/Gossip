#include "GosipCensor.h"

void GosipCensor::send_message(string message)
{
	if (message.find("Java") || message.find("java"))
	{
		ParentGosip::send_message(message);
	}
}
