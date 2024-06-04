#pragma once
#include"BaseCommand.h"
class LinkCommand:public BaseCommand
{
private:
	string name1;
	string name2;
public:
	LinkCommand(string name1, string name2);
	void execute(vector<ParentGosip*>& gosips);
};

