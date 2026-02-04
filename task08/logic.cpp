//#include"util.h"
//string get_prime_numbers(int number) {
//	string msg;
//	for (int i = 2; i <= number; i++) {
//		bool is_prime = true;
//
//		for (int j = 2; j * j <= i; j++) {
//			if (i % j == 0) {
//				is_prime = false;
//				break;
//			}
//		}
//
//		if (is_prime) {
//			msg +=to_string(i)+ " ";
//		}
//	}
//	return msg+="\n";
//}