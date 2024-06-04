#pragma once
#include"BaseCommand.h"
class MessageCommand:public BaseCommand
{
private:
	string name;
	string message;
public:
	MessageCommand(string name, string message)
	{
		this->name = name;
		this->message = message;
	}
	void execute(vector<ParentGosip*>& gosips) override;
};