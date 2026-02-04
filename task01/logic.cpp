#include"logic.h"
string find_like(int like, int day) {
	int newlike;
	string msg;
	for (int i = 1; i <= day; i++) {
		newlike = i * like;
		msg += "day " + to_string(i) + ": " + to_string(newlike) + "\n";
	}

	return msg;
}