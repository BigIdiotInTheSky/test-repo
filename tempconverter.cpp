#include<iostream>

using namespace std;

double ftc(double& tempc, double tempf) {
	return tempc = (tempf - 32) * 0.56;
}

double ctf(double tempc, double& tempf) {
	return tempf = (tempc * 1.8) + 32;
}

int main() {
	bool cont = true;
	
	while (cont == true) {
		bool restart = false;
		double tempc, tempf;
		char c, s;

		cout << "Celsius to fahrenheit (c) or Fahrenheit to celsius (f) ? " << endl;
		cin >> s;

		switch (s) {

		case 'c':
			cout << "Enter temerature in celsius: " << endl;
			cin >> tempc;
			cout << round(ctf(tempc, tempf)) << " Degrees fahrenheit " << endl;
			break;

		case 'f':
			cout << "Enter temerature in fahrenheit: " << endl;
			cin >> tempf;
			cout << round(ftc(tempc, tempf)) << " Degrees celsius" << endl;
			break;

		default:
			cout << "Invalid response, restarting program..." << endl;
			restart = true;
			cont = true;
			break;
		}

		if (restart == false) {

			if (tempc < -5) {
				cout << "Its freezing outside" << endl;
			}
			else if (tempc >= -5 && tempc < 5) {
				cout << "Its cold outside" << endl;
			}
			else if (tempc >= 5 && tempc < 10) {
				cout << "Its chilly outside" << endl;
			}
			else if (tempc >= 10 && tempc < 15) {
				cout << "Its moderate outside" << endl;
			}
			else if (tempc >= 15 && tempc < 20) {
				cout << "Its warm outside" << endl;
			}
			else if (tempc >= 20 && tempc < 30) {
				cout << "Its hot outside" << endl;
			}
			else if (tempc > 30) {
				cout << "Its boiling outside" << endl;
			}

			cout << "Continue (c) or Quit program (q)? " << endl;
			cin >> c;

			switch (c) {
			case 'c':
				cout << "Restarting program..." << endl;
				cont = true;
				break;
			case 'q':
				cont = false;
				cout << "Quitting program..." << endl;
				break;
			default:
				cout << "Invalid response, quitting program..." << endl;
				cont = false;
				break;
			}
		}
	}

	return 0;
}