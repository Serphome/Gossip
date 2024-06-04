#include"ParentGosip.h"
#include"FactoryGosip.h"
#include"BaseCommand.h"
#include"FactroryCommand.h"

int main()
{
	vector<ParentGosip*> gossips;
	while (true)
	{
		string Stream;
		getline(cin, Stream);
		string command_name;
		vector<string> data;
		stringstream temp(Stream);
		temp >> command_name;
		while (!temp.eof())
		{
			string test;
			temp >> test;
			data.push_back(test);
		}
		try {
			BaseCommand* Command = FactroryCommand::get_command(data, command_name);
			Command->execute(gossips);
		}
		catch (exception A) {
			cout << A.what() << endl;
		}
	}
}