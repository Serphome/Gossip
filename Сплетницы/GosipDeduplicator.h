#pragma once
#include<set>
#include"ParentGosip.h"

using std::set;

class GosipDeduplicator: public ParentGosip
{
private:
	set<string> messages;
public:
	GosipDeduplicator(string name): ParentGosip(name) {}
	void get_message(string message) override;
};

