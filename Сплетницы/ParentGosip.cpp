#include "ParentGosip.h"

void ParentGosip::get_message(string message)
{
	print_message(message);
	send_message(message);
}

void ParentGosip::print_message(string message)
{
	cout << name << " " << number << " " << message << endl;
	number++;
}

void ParentGosip::send_message(string message)
{
	for (int i = 0; i < gosip_resend.size(); i++)
	{
		gosip_resend[i]->get_message(message);
	}
}

ParentGosip* ParentGosip::find_gosip(string name, vector<ParentGosip*> gosip_resend)
{
	for (ParentGosip* data : gosip_resend)
	{
		if (data->name == name)
		{
			return data;
		}
	}
	return nullptr;
}

void ParentGosip::add_gosip_listen(ParentGosip* a)
{
	gosip_resend.push_back(a);
}

bool ParentGosip::del_gosip(ParentGosip* a)
{
	for (int i = 0; i < gosip_resend.size(); i++)
	{
		if (gosip_resend[i] == a)
		{
			gosip_resend.erase(gosip_resend.begin() + i);
			return true;
		}
	}
	return false;
}

string ParentGosip::get_name()
{
	return name;
}

vector<ParentGosip*> ParentGosip::get_gosip_resend()
{
	return gosip_resend;
}
