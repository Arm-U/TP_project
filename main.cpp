#include <iostream>
#include "Client/ClientMain.h"

using namespace std;

int main() {
	cout << "Select a nation: France or England\n";
	string nation;
	cin >> nation;
	int nat_num;
	if (nation == "England")
		nat_num = 1;
	else if (nation == "France")
		nat_num = 0;
	else
		return 0;
	shared_ptr<ClientMain> client = make_shared<ClientMain>(nat_num);
	while (1) {
		string action;
		cin >> action;
		if (action == "add") {
			int w, a, s;
			cin >> w >> a >> s;
			client->add(w, a, s);
		}
		else if (action == "attack")
			client->attack();
		else if (action == "retreat")
			client->retreat();
		else if (action == "upgrade")
			client->upgrade();
		else if (action == "recovery")
			client->recovery();
		else if (action == "stop") {
			cout << "Thanks for game\n";
			break;
		}
		else {
			cout << "Incorrect action\n";
		}
	}

	return 0;
}