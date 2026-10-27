#include <iostream>
#include <string>

using namespace std;

class Laptop {
private:
    int RAM;

public:
    class Tastatura {
    public:
        int nrTaste;

        Tastatura(int n = 104) {
            nrTaste = n;
        }
    };

    Tastatura tastatura;

    Laptop(int ram = 8, int nrTaste = 104)
        : tastatura(nrTaste) {
        RAM = ram;
    }

    friend void afisareRAM(Laptop l);

    Laptop operator+(Laptop l) {
        Laptop temp;
        temp.RAM = this->RAM + l.RAM;
        return temp;
    }

    int getRAM() {
        return RAM;
    }
};

void afisareRAM(Laptop l) {
    cout << "RAM: " << l.RAM << " GB\n";
}

class Programator {
private:
    string nume;
    Laptop laptop;

public:
    Programator(string n, Laptop l) {
        nume = n;
        laptop = l;
    }

    void afisare() {
        cout << "Programator: " << nume << endl;
        cout << "RAM laptop: " << laptop.getRAM() << " GB" << endl;
    }

    void lucreaza(int ore) {
        cout << nume << " lucreaza " << ore << " ore.\n";
    }

    void lucreaza(int ore, string proiect) {
        cout << nume << " lucreaza " << ore
            << " ore la proiectul "
            << proiect << ".\n";
    }
};

int main() {

    Laptop l1(8);
    Laptop l2(16);

    Laptop l3 = l1 + l2;

    afisareRAM(l3);

    Laptop::Tastatura t(105);
    cout << "Numar taste: "
        << t.nrTaste << endl;

    Programator p("Andrei", l3);

    p.afisare();

    p.lucreaza(5);
    p.lucreaza(8, "Magazin Online");

    return 0;
}