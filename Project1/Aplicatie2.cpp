//#include <iostream>
//using namespace std;
//
//class Telecomanda {
//public:
//	int nrButoane;
//	char* culoare;
//	Telecomanda() {
//		this->nrButoane = 5;
//		this->culoare = new char[strlen("Negru") + 1];
//		strcpy_s(culoare, strlen("Negru") + 1, "Negru");
//	}
//
//	Telecomanda(int nr, const char* culoare) {
//		this->nrButoane = nr;
//		this->culoare = new char[strlen(culoare) + 1];
//		strcpy_s(this->culoare, strlen(culoare) + 1, culoare);
//	}
//	Telecomanda(const Telecomanda& other) {
//		this->nrButoane = other.nrButoane;
//		this->culoare = new char[strlen(other.culoare) + 1];
//		strcpy_s(culoare, strlen(other.culoare) + 1, other.culoare);
//	}
//};
//int main() {
//	Telecomanda t1;
//	cout << "Telecomanda 1: " << t1.nrButoane << " butoane, culoare: " << t1.culoare << endl;
//	Telecomanda t2(10, "Alb");
//	cout << "Telecomanda 2: " << t2.nrButoane << " butoane, culoare: " << t2.culoare << endl;
//	Telecomanda t3(t2);
//	cout << "Telecomanda 3 (copie a telecomenzii 2): " << t3.nrButoane << " butoane, culoare: " << t3.culoare << endl;
//	return 0;
//}