#pragma once
#include"ParentGosip.h"
#include"GosipNull.h"
#include"GosipCensor.h"
#include"GosipSpammer.h"
#include"GosipSimple.h"
#include"GosipDeduplicator.h"
#include"QuitCommand.h"
class FactoryGosip
{
public:
	static ParentGosip* create(string name, string type);
};

