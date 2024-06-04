#pragma once
#include"BaseCommand.h"
#include"CreateCommand.h"
#include"LinkCommand.h"
#include"UnlinkCommand.h"
#include"MessageCommand.h"
#include"GossipsCommand.h"
#include"ListenersCommand.h"
class FactroryCommand
{
public:
	static BaseCommand* get_command(vector<string>& data, string command);
};

