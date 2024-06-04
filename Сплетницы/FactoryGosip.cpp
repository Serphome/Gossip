#include "FactoryGosip.h"

ParentGosip* FactoryGosip::create(string name, string type)
{
    if (type == "null")
    {
        return new GosipNull(name);
    }
    else if (type == "censor")
    {
        return new GosipCensor(name);
    }
    else if (type == "spammer")
    {
        return new GosipSpammer(name);
    }
    else if (type == "simple")
    {
        return new GosipSimple(name);
    }
    else if (type == "deduplicator")
    {
        return new GosipDeduplicator(name);
    }
    else
    {
        throw exception("Incorrect type of Gossip");
    }
}
