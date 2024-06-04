#pragma once
#include"ParentGosip.h"

class GosipCensor: public ParentGosip
{
public:
	GosipCensor(string name) : ParentGosip(name) {}
	void send_message(string message) override;
};

