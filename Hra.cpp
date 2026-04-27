#include <iostream>
using namespace std;
void Gemuse_Kebab(){
    string jmeno = "Gemuse_Kebab";
    int maxHP = 24;
    int aktHP = 12;
    int maxMana = 12;
    int aktMana = 6;
    int Turkoin = 5;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Gemuse_Kebab" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: " << aktHP << endl << "   Utok: " << damage << endl << "   Mana: " << aktMana << endl << "   Turkoin: " << Turkoin;
    cout << "Schopnosti: " << endl << "   Majznuti zelim: poskozeni 3" << endl << "   Placnuti salatem: plosne poskozeni, vsichni nepratele poskody o 2 HP - stoji 2 many" << endl << "   Omacka navic: Vyleci ti 4 HP - stoji 2 many";

}
void Kebab_Classic(){
    string jmeno = "Kebab_Classic";
    int maxHP = 18;
    int aktHP = 9;
    int maxMana = 16;
    int aktMana = 8;
    int Turkoin = 7;
    int level = 1;
    int XP = 0;
    int damage = 4;
    cout << "Class: Kebab_Classic" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: "  << aktHP << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << "Schopnosti: " << endl << "   Hod rajcetem: poskozeni 4" << endl << "   dvojita omacka: uberes dvema cilum 3 HP - stoji 3 many" << endl << "   Masovy vypad: Ubere nepritely 8 HP - stoji 5 man";

}
void Magicky_Falafel(){
    string jmeno = "Magicky_Falafel";
    int maxHP = 12;
    int aktHP = 6;
    int maxMana = 30;
    int aktMana = 15;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 2;
    cout << "Class: Magicky_Falafel" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << "Schopnosti: " << endl << "   Zasah cizrnou: poskozeni 2" << endl << "   Falafelova koule: vysoke poskozeni 10 HP - stoji 6 many" << endl << "   Omackova potopa: plosne poskozeni 4HP - stoji 4 many";

}
void Temny_Kebab(){
    string jmeno = "Temny_Kebab";
    int maxHP = 16;
    int aktHP = 8;
    int maxMana = 20;
    int aktMana = 10;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Temny_Kebab" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << "Schopnosti: " << endl << "   Spalena tortila: poskozeni 3" << endl << "   Vysati omacky: udeli poskozeni 4 a vyleci hrace o 2 HP - stoji 4 many" << endl << "   zkazene maso: pristi utok da trojnasobne poskozeni, ale hrac ztrati 2 HP - stoji 2 many";

}

int main(){
    string boss = "Kebabex";
}
