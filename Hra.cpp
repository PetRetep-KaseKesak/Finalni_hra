#include <iostream>
using namespace std;
void Gemuse_Kebab(){ //ohledne class jsem se radil s umelou inteligenci
    string jmeno = "Gemuse Kebab";
    int maxHP = 24;
    int aktHP = 12;
    int maxMana = 12;
    int aktMana = 6;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Gemuse Kebab" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: " << aktHP << endl << "   Utok: " << damage << endl << "   Mana: " << aktMana << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Majznuti zelim: poskozeni 3" << endl;
    cout << "   Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o 2 HP - stoji 2 many" << endl << "   Omacka navic: Vyleci ti 4 HP - stoji 2 many";
}
void Kebab_Classic(){
    string jmeno = "Kebab Classic";
    int maxHP = 18;
    int aktHP = 9;
    int maxMana = 16;
    int aktMana = 8;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 4;
    cout << "Class: Kebab Classic" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: "  << aktHP << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl <<"Schopnosti: " << endl << "   Hod rajcetem: poskozeni 4" << endl;
    cout << "   zelna potopa: uberes vsem cilum 3 HP - stoji 3 many" << endl << "   Masovy vypad: Ubere nepritely 8 HP - stoji 5 man";
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
    int maxHP = 14;
    int aktHP = 7;
    int maxMana = 20;
    int aktMana = 10;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Temny Kebab" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Spalena tortila: poskozeni 3" << endl << "   Vysati omacky: udeli poskozeni 4 a vyleci hrace o 2 HP - stoji 4 many" << endl;
    cout << "   zkazene maso: pristi utok da trojnasobne poskozeni, ale hrac ztrati 2 HP - stoji 3 many";
}
int schopnost1(){

}

int main(){
    string jmeno;
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
    int volba_nakupu;
    int HP;
    int schopnost1;
    int schopnost2;
    int Mana1;
    int Mana2;
    int heal;
    int SnizeniHP;
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
    potvrzeni = 'z';
    if (volba_class == 1){
        jmeno = "Gemuse Kebab";
        maxHP = 24;
        aktHP = 12;
        maxMana = 12;
        aktMana = 6;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 3;
        schopnost1 = 2;
        Mana1 = 2;
        schopnost2 = 4;
        Mana2 = 2;
    } else if (volba_class == 2){
        jmeno = "Kebab Classic";
        maxHP = 18;
        aktHP = 9;
        maxMana = 16;
        aktMana = 8;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 4;
        schopnost1 = 3;
        Mana1 = 3;
        schopnost2 = 8;
        Mana2 = 5;
    } else if (volba_class == 3){
        jmeno = "Magicky Falafel";
        maxHP = 12;
        aktHP = 6;
        maxMana = 30;
        aktMana = 15;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 2;
        schopnost1 = 10;
        Mana1 = 6;
        schopnost2 = 4;
        Mana2 = 4;
    } else if (volba_class == 4){
        jmeno = "Temny Kebab";
        maxHP = 16;
        aktHP = 8;
        maxMana = 20;
        aktMana = 10;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 3;
        schopnost1 = 4;
        heal = 2;
        Mana1 = 4;
        schopnost2 = 3;
        SnizeniHP = 2;
        Mana2 = 3;


    }
    HP = aktHP;
    cout << endl << "Vitej ve vesnickem kebab shopu, hrdino, vylepsi zde sve statistiky a dovednosti, pokud na to mas Turkoiny.";
    do {
        cout << endl << endl << "HP: " << HP << "/" << aktHP << "   Mana: " << aktMana << "    Turkoiny: " << Turkoin;
        cout << endl << endl << "1) Doplneni zivotu:                                      1 Turkoin";
        cout << endl << "2) Vylepseni maximalnich zivotu o 1 a jejich doplneni:   3 Turkoiny" << endl;
        cout << "3) Vylepseni maximalni many o 1:                         3 Turkoiny" << endl << "4) Vylepseni zakladniho poskozeni o 1:                   4 turkoiny" << endl;
        cout << "5) Vylepseni vsech schopnosti o 1 poskozeni/vyleceni:    5 Turkoinu" << endl << "6) Opusteni obchodu" << endl <<"Pro vyber cinnosti zadej jeji cislo: ";
        do {
            cin >> volba_nakupu;
            switch (volba_nakupu){
            case 1:
                if (Turkoin >= 1){
                    HP = aktHP;
                    cout << endl << "Byly ti doplneny zivoty. Aktualni stav: " << HP << "/" << aktHP;
                    Turkoin--;
                } else {
                    cout << endl << "Nemas ani Turkoin, bohuzel zadne obchody probehnout nemuzou.";
                }
                break;
            case 2:
                if (Turkoin >= 3 && aktHP < maxHP){
                    aktHP++;
                    HP = aktHP;
                    cout << endl << "Maximalni zdravy bylo vylepseno. Aktualni stav: " << HP << "/" << aktHP;
                    Turkoin = Turkoin - 3;
                } else if (aktHP == maxHP){
                    cout << endl << "Zivoty uz mas vylepsene na maximum.";
                } else if (Turkoin < 3){
                    cout << endl << "Na tento kauf nemas dost Turkoinu.";
                }
                break;
            case 3:
                if (Turkoin >= 3 && aktMana < maxMana){
                    aktMana++;
                    cout << endl << "Maximalni Mana byla zvysena o 1";
                    Turkoin = Turkoin - 3;
                } else if (aktMana == maxMana){
                    cout << endl << "Manu uz mas vylepsenou na maximum.";
                } else if (Turkoin < 3){
                    cout << endl << "Na tento kauf nemas dost Turkoinu.";
                }
                break;
            case 4:
                if (Turkoin >= 4 && damage < 15){
                    damage++;
                    cout << endl <<"Maximalni poskozeni bylo zvyseno o 1";
                    Turkoin = Turkoin - 4;
                } else if (damage == 15){
                    cout << endl << "damage uz mas vymaxovan.";
                } else if (Turkoin < 4){
                    cout << endl << "Na tento kauf nemas dost Turkoinu.";
                }
                break;
            case 5:
                if (Turkoin >= 5){
                    schopnost1++;
                    schopnost2++;
                    cout << endl << "Schopnosti byly vylepseny.";
                    Turkoin = Turkoin - 5;
                } else if (Turkoin < 5){
                    cout << endl << "Na tento kauf nemas dost Turkoinu.";
                }
                break;
            case 6:
                cout << endl << endl << "Stastnou cestu, hrdino!";
                break;
            default:
                cout << "Zadal jsi spatne cislo, Zkus to znovu: ";
            }
        }while (volba_nakupu < 1 || volba_nakupu > 5);
    }while(volba_nakupu != 6);


}
