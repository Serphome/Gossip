#include "GosipSpammer.h"

void GosipSpammer::send_message(string message)
{
	int temp = rand() % 4 + 2;
	for (int i = 0; i < temp; i++)
	{
		ParentGosip::send_message(message);
	}
}
