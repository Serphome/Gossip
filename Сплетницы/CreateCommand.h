#pragma once
#include"BaseCommand.h"
#include"FactoryGosip.h"
class CreateCommand: public BaseCommand
{
private:
	string name;
	string type;
public:
	CreateCommand(string name, string type);
	void execute(vector<ParentGosip*>& gosips) override;
};

