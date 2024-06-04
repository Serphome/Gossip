#pragma once
#include"BaseCommand.h"
class ListenersCommand:public BaseCommand
{
private:
	string name;
public:
	ListenersCommand(string name);
	void execute(vector<ParentGosip*>& gosips) override;
};

