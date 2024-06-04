#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::exception;
using std::sort;
using std::getline;
using std::stringstream;
using std::exit;

class ParentGosip
{
private:
	string name;
	int number;
	vector<ParentGosip*> gosip_resend;
public:
	ParentGosip(string name)
	{
		this->name = name;
		this->number = 0;
	}
	virtual void get_message(string message);
	virtual void print_message(string message);
	virtual void send_message(string message);
	static ParentGosip* find_gosip(string name, vector<ParentGosip*> gosip_resend);
	void add_gosip_listen(ParentGosip* a);
	bool del_gosip(ParentGosip* a);
	string get_name();
	vector<ParentGosip*> get_gosip_resend();
};