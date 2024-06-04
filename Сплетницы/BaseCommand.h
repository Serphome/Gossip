#pragma once
#include"ParentGosip.h"

class BaseCommand
{
public:
	virtual void execute(vector<ParentGosip*>& gosips) = 0;
};

