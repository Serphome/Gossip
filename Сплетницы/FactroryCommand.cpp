#include "FactroryCommand.h"

BaseCommand* FactroryCommand::get_command(vector<string>& data, string command)
{
    if (command == "create")
    {
        return new CreateCommand(data[0], data[1]);
    }
    else if (command == "link")
    {
        return new LinkCommand(data[0], data[1]);
    }
    else if (command == "unlink")
    {
        return new UnlinkCommand(data[0], data[1]);
    }
    else if (command == "message")
    {
        string res;
        for (int i = 1; i < data.size(); i++)
        {
            res += data[i] + " ";
        }
        return new MessageCommand(data[0], res);
    }
    else if (command == "gossips")
    {
        return new GossipsCommand();
    }
    else if (command == "listeners")
    {
        return new ListenersCommand(data[0]);
    }
    else if (command == "quit")
    {
        return new QuitCommand();
    }
    else
    {
        throw exception("Unknown Command");
    }
}
