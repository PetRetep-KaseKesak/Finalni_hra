#include <iostream>
using namespace std;
void Gemuse_Kebab(){ //ohledne class jsem se radil s umelou inteligenci
    string jmeno = "Gemuse Kebab";
    int maxHP = 24;
    int aktHP = 12;
    int maxMana = 12;
    int aktMana = 6;
    int Turkoin = 5;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Gemuse Kebab" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: " << aktHP << endl << "   Utok: " << damage << endl << "   Mana: " << aktMana << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Majznuti zelim: poskozeni 3" << endl;
    cout << "   Placnuti salatem: plosne poskozeni, vsichni nepratele poskody o 2 HP - stoji 2 many" << endl << "   Omacka navic: Vyleci ti 4 HP - stoji 2 many";
}
void Kebab_Classic(){
    string jmeno = "Kebab Classic";
    int maxHP = 18;
    int aktHP = 9;
    int maxMana = 16;
    int aktMana = 8;
    int Turkoin = 7;
    int level = 1;
    int XP = 0;
    int damage = 4;
    cout << "Class: Kebab Classic" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: "  << aktHP << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl <<"Schopnosti: " << endl << "   Hod rajcetem: poskozeni 4" << endl;
    cout << "   dvojita omacka: uberes dvema cilum 3 HP - stoji 3 many" << endl << "   Masovy vypad: Ubere nepritely 8 HP - stoji 5 man";
}
void Magicky_Falafel(){
    string jmeno = "Magicky Falafel";
    int maxHP = 12;
    int aktHP = 6;
    int maxMana = 30;
    int aktMana = 15;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 2;
    cout << "Class: Magicky Falafel" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Zasah cizrnou: poskozeni 2" << endl;
    cout << "   Falafelova koule: vysoke poskozeni 10 HP - stoji 6 many" << endl << "   Omackova potopa: plosne poskozeni 4HP - stoji 4 many";
}
void Temny_Kebab(){
    string jmeno = "Temny Kebab";
    int maxHP = 16;
    int aktHP = 8;
    int maxMana = 20;
    int aktMana = 10;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Temny Kebab" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Spalena tortila: poskozeni 3" << endl << "   Vysati omacky: udeli poskozeni 4 a vyleci hrace o 2 HP - stoji 4 many" << endl;
    cout << "   zkazene maso: pristi utok da trojnasobne poskozeni, ale hrac ztrati 2 HP - stoji 2 many";
}

int main(){
    int maxHP;
    int aktHP;
    int maxMana;
    int aktMana;
    int Turkoin;
    int level;
    int XP;
    int damage;
    int volba_class;
    char potvrzeni;
    string boss = "Kebabex";
    cout << "___Zdravim dobrodruhu___" <<  endl << endl << "Vitej ve svete, kde lidska touha po kebabu prekonala veskere meze a stala se zhoubou lidstva." << endl;
    cout << "Vsechno zacalo docela nevinne. Objevilo se jedno uzasne jidlo: KEBAB. Od te chvile uz nikdy nebylo nic stejne." << endl;
    cout << "Kebab si oblibili skoro vsichni, coz vedlo k masovemu rozsireni teto pochoutky a nanestesti i k castejsim mene kvalitnim kebabum." << endl << endl;
    cout << "Zacatek konce prisel, kdyz se vyvoj kebabu dostal do rukou korporatu. Dlouho se snazili vytvorit nejnavykovejsi kebab   na svete, na kterem by vydelavali miliardy.";
    cout << endl << "Timto snazenim vytvorily spoustu odpornych kebabovych entit. Bohuzel s nimi vytvorili i ten nejhorsi, nejskodlivejsi a  nejnechutnejsi kebab na svete: KEBABEXE";
    cout << endl << "Kebabex s jeho Kebabovym syndikatem a jeho nejvernejsimi pomocniky rozpoutali po svete Kebabokalypsu. Tvym ukolem je    Kebabexe zastavit." << endl;
    cout << endl << "Jsi vytvorem poslednich etickych kucharo-vedcu, kteri byli utlacovani korporaty, avsak zachrana lidstva ted stoji na    jejich a tvych bedrech." << endl;
    cout << "Jsi posledni nadeje na lepsi zitrky a zachovani lidskeho druhu tak, jak ho zname. Na tve ceste te ocekava spousta       nebezpecenstvi." << endl;
    cout << "Pujdes po ceste vedouci skrze nekolik vesnic, ktere se jeste zvladli ubranit a meli by byt ochotne poskytnout ti za     Turkoiny pomoc." << endl;
    cout << "Na ceste potkas spoustu darebaku ze syndikatu a na jejim konci te ceka samotny Kebabex, jehoz porazenim zachranis svet." << endl << "Hodne stesti.";
    cout << endl << endl << endl << "Vyber si svoji classu:" << endl << "1 = Gemuse Kebab" << endl << "2 = Kebab Classic" << endl << "3 = Magicky Falafel" << endl << "4 = Temny Kebab" << endl;
    do {
        do {
            cout << endl << "Zadej cislo classy: ";
            cin >> volba_class;
            switch (volba_class){
            case 1:
                Gemuse_Kebab();
                break;
            case 2:
                Kebab_Classic();
                break;
            case 3:
                Magicky_Falafel();
                break;
            case 4:
                Temny_Kebab();
                break;
            default:
                cout << "Nezadal jsi spravne cislo nebo znak. Zkus to znovu: ";
            }
        }while(volba_class <= 0 || volba_class > 4);
        cout << endl << endl <<"Prejes si hrat s touto classou? Zadej A pro souhlas, pro pokracovani ve vyberu zadej jiny znak: ";
        cin >> potvrzeni;
    }while(potvrzeni != 'A');
}
