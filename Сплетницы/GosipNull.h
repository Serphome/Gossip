#pragma once
#include"ParentGosip.h"

class GosipNull: public ParentGosip
{
public:
	GosipNull(string name) : ParentGosip(name){}
	void send_message(string message) override {};
};

