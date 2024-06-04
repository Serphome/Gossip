#pragma once
#include"BaseCommand.h"
class QuitCommand:public BaseCommand
{
public:
	void execute(vector<ParentGosip*>& gosips);
};