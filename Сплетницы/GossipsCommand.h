#pragma once
#include"BaseCommand.h"
class GossipsCommand:public BaseCommand
{
public:
	void execute(vector<ParentGosip*>& gosips) override;
};

