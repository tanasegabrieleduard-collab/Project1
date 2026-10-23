#include <iostream>
using namespace std;

class Masina {
private:
	char marca[30];
	int an;
public:

	Masina(const char* m, int a) {
		int i = 0;
		while (m[i] != '\0' && i < 29) {
			this->marca[i] = m[i];
			i++;
		}
		this->marca[i] = '\0';
		this->an = a;
	}
	~Masina() {
		cout << "destructorul apeplat pentru: " << marca << "\n";
	}

	const char* getMarca() const {
		return marca;

	}
	int getAn() const {
		return an;
	}
	void setAn(int anNou) {
		if (anNou > 2021) 
			this ->an = anNou;
		
		else
			cout << "Anul nu poate fi mai mic sau egal cu 2021\n";
	}

};
int main() {
	Masina m1("bmw", 2020);
		cout << "Masina: " << m1.getMarca() << ", An: " << m1.getAn() << "\n";
	m1.setAn(2024);
	cout << "AN actualizat" << m1.getAn() << "\n";
	return 0;
}