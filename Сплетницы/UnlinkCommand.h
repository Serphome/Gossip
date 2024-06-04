#pragma once
#include"BaseCommand.h"
class UnlinkCommand:public BaseCommand
{
private:
	string name1;
	string name2;
public:
	UnlinkCommand(string name1, string name2);
	void execute(vector<ParentGosip*>& gosips) override;
};

