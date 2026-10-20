#include <bits/stdc++.h>
using namespace std;

class Senjata {
protected:
    string nama;
    int damage;
    string jangkauan;
    int amunisi;

public:
    Senjata(string n, int dmg, string jng, int ammo) {
        nama = n;
        damage = dmg;
        jangkauan = jng;
        amunisi = ammo;
    }

    virtual ~Senjata() {}
    virtual void tembak() = 0;

    void printInfo() {
        cout << "["<< nama <<"]\n";
        cout << "Damage : "<< damage <<"\n";
        cout << "Range : "<< jangkauan <<"\n";
        cout << "Ammo : "<< amunisi <<"\n";
    }
};

class Rifle : public Senjata {
public:
    Rifle(string n) : Senjata(n, 40, "Sedang", 30) {}

    void tembak() override {
        cout << nama << " burst shot, (Dmg: " << damage << " per peluru)\n";
    }
};

class Sniper : public Senjata {
public:
    Sniper(string n) : Senjata(n, 150, "Jauh", 5) {}

    void tembak() override {
        cout << nama << " snipe shot, (Dmg: " << damage << ")\n";
    }
};

class Shotgun : public Senjata {
public:
    Shotgun(string n) : Senjata(n, 100, "Dekat", 8) {}

    void tembak() override { 
        cout << nama << " spread shot, (Dmg total: " << damage << ")\n";
    }
};

int main() {
    Senjata* gudang[3];

    gudang[0] = new Rifle("M4A1");
    gudang[1] = new Sniper("AWP");
    gudang[2] = new Shotgun("Sawed-Off");

    cout << "Weapon Directory\n";
    for (int i = 0; i < 3; i++) {
        gudang[i]->printInfo();
    }

    cout << "Shoot\n";
    for (int i = 0; i < 3; i++) {
        gudang[i]->tembak();
    }

    for (int i = 0; i < 3; i++) {
        delete gudang[i];
    }

    return 0;
}
