#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double c) {
	if (c >= 70)
		return "Lulus";
	else
		return "Gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Lulus";
	else
		return "Gagal";
}

int main() {
	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan nilai Bahasa Inggris";
	cin >> nilB;
	cout << "Status Kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nStatus Kelulusan2 = " << status2(rerata(nilM, nilB), nilM);
	return 0;
}


