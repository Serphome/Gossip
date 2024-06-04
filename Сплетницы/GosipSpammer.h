#pragma once
#include"ParentGosip.h"

class GosipSpammer: public ParentGosip
{
public:
	GosipSpammer(string name): ParentGosip(name) {}
	void send_message(string message) override;
};

