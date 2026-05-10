#include <iostream>
#include <time.h>
using namespace std;
void Gemuse_Kebab(){ //ohledne class jsem se radil s umelou inteligenci
    string jmeno = "Gemuse Kebab";
    int maxHP = 20;
    int aktHP = 10;
    int maxMana = 14;
    int aktMana = 7;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Gemuse Kebab" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: " << aktHP << endl << "   Utok: " << damage << endl << "   Mana: " << aktMana << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Majznuti zelim: poskozeni 3" << endl;
    cout << "   Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o 2 HP - stoji 2 many" << endl << "   Omacka navic: Vyleci ti 6 HP - stoji 2 many";
}
void Kebab_Classic(){
    string jmeno = "Kebab Classic";
    int maxHP = 24;
    int aktHP = 12;
    int maxMana = 18;
    int aktMana = 9;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 4;
    cout << "Class: Kebab Classic" << endl << endl;
    cout << "Statistiky:"<< endl <<"   Zivot: "  << aktHP << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl <<"Schopnosti: " << endl << "   Hod rajcetem: poskozeni 5" << endl;
    cout << "   Salatovy katapult: uberes vsem cilum 3 HP - stoji 2 many" << endl << "   Masovy vypad: Ubere nepritely 7 HP - stoji 3 man";
}
void Magicky_Falafel(){
    string jmeno = "Magicky Falafel";
    int maxHP = 18;
    int aktHP = 9;
    int maxMana = 30;
    int aktMana = 15;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Magicky Falafel" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Zasah cizrnou: poskozeni 3" << endl;
    cout << "   Omackova potopa: plosne poskozeni 4HP - stoji 4 many" << endl << "   Falafelova koule: vysoke poskozeni 10 HP - stoji 6 many";
}
void Temny_Kebab(){
    string jmeno = "Temny Kebab";
    int maxHP = 14;
    int aktHP = 7;
    int maxMana = 24;
    int aktMana = 12;
    int Turkoin = 10;
    int level = 1;
    int XP = 0;
    int damage = 3;
    cout << "Class: Temny Kebab" << endl << endl;
    cout << "Statistiky:"<< endl << "   Zivot: " << aktHP  << endl << "   Utok: " << damage  << endl << "   Mana: " << aktMana  << endl << "   Turkoin: " << Turkoin;
    cout << endl << "Schopnosti: " << endl << "   Spalena tortila: poskozeni 3" << endl << "   Vysati omacky: udeli poskozeni 4 a vyleci hrace o 3 HP - stoji 4 many" << endl;
    cout << "   zkazene maso: pristi utok da trojnasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many";
}
void Vesnice(int HP, int aktHP, int aktMana, int Turkoin, int volba_nakupu, int maxHP, int maxMana, int damage, int schopnost1, int schopnost2, int &plusHP, int &plusaktHP, int &plusaktMana, int &aktTurkoin, int &plusdamage, int &plusschopnost1, int &plusschopnost2){
    cout << endl << "Vitej ve vesnickem kebab shopu, hrdino, vylepsi zde sve statistiky a dovednosti, pokud na to mas Turkoiny.";
    do {
        cout << endl << endl << "HP: " << HP << "/" << aktHP << "   Mana: " << aktMana << "    Turkoiny: " << Turkoin;
        cout << endl << endl << "1) Doplneni zivotu:                                      1 Turkoin";
        cout << endl << "2) Vylepseni maximalnich zivotu o 1 a jejich doplneni:   3 Turkoiny" << endl;
        cout << "3) Vylepseni maximalni many o 1:                         3 Turkoiny" << endl << "4) Vylepseni zakladniho poskozeni o 1:                   4 turkoiny" << endl;
        cout << "5) Vylepseni vsech schopnosti o 1:                       5 Turkoinu" << endl << "6) Opusteni obchodu" << endl <<"Pro vyber cinnosti zadej jeji cislo: ";
        do {
            cin >> volba_nakupu;
            switch (volba_nakupu){
            case 1:
                if (Turkoin >= 1){
                    HP = aktHP;
                    plusHP = aktHP;
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
                    plusaktHP = aktHP;
                    plusHP = aktHP;
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
                    plusaktMana = aktMana;
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
                    plusdamage = damage;
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
                    plusschopnost1 = schopnost1;
                    plusschopnost2 = schopnost2;
                    cout << endl << "Schopnosti byly vylepseny.";
                    Turkoin = Turkoin - 5;
                } else if (Turkoin < 5){
                    cout << endl << "Na tento kauf nemas dost Turkoinu.";
                }
                break;
            case 6:
                cout << endl << endl << "Stastnou cestu, hrdino!" << endl << endl;
                break;
            default:
                cout << "Zadal jsi spatne cislo, Zkus to znovu: ";
            }
        }while (volba_nakupu < 1 || volba_nakupu > 6);
    }while(volba_nakupu != 6);
    aktTurkoin = Turkoin;
}
void levelup(int XP, int level, int aktHP, int aktMana, int damage, int &plusaktHP, int &plusHP, int &plusMana, int &plusdamage, int &afterXP, int &plusLevel){
    do{
    if (XP >= 150){
        int nahodnyLvlUp = rand() % 3 + 1;
        level++;
        plusLevel = level;
        XP = XP - 150;
        afterXP = XP;
        cout << endl << endl << "Tvuj level se zvysil na " << level;
        cout << endl << "Buff za odmenu: ";
        switch(nahodnyLvlUp){
        case 1:
            aktHP++;
            cout << "zvyseni HP na " << aktHP;
            plusHP = aktHP;
            plusaktHP = aktHP;
            break;
        case 2:
            aktMana++;
            cout << "zvyseni Maximalni Many na " << aktMana;
            plusMana = aktMana;
            break;
        case 3:
            damage++;
            cout << "zvyseni damage na " << damage;
            plusdamage = damage;
            break;
        }
    }
    }while(XP > 100);
}
void Kebabloater(string &name, int &zivoty, int &uder){
    name = "Kebabloater";
    zivoty = 35;
    uder = 2;
}
void Kebabrain(string &name, int &zivoty, int &uder){
    name = "Kebabrain";
    zivoty = 15;
    uder = 4;
}
void Rajcatove_monstrum(string &name, int &zivoty, int &uder){
    name = "Rajcatove mostrum";
    zivoty = 15;
    uder = 2;
}
void Salatove_monstrum(string &name, int &zivoty, int &uder){
    name = "Salatove mostrum";
    zivoty = 18;
    uder = 2;
}
void Zelne_monstrum(string &name, int &zivoty, int &uder){
    name = "Zelne mostrum";
    zivoty = 11;
    uder = 3;
}
void Doner_a_Durum(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2){
    name = "Durum";
    zivoty = 6;
    uder = 3;
    name2 = "Doner";
    zivoty2 = 12;
    uder2 = 1;
}
void Kureci_a_Teleci(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2){
    name = "Kureci";
    zivoty = 17;
    uder = 1;
    name2 = "Teleci";
    zivoty2 = 12;
    uder2 = 2;
}
void Hranolek_a_Hranolka(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2){
    name = "Hranolek";
    zivoty = 9;
    uder = 2;
    name2 = "Hranolka";
    zivoty2 = 7;
    uder2 = 1;
}
void Halloumi_a_Hummus(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2){
    name = "Halloumi";
    zivoty = 4;
    uder = 4;
    name2 = "Hummus";
    zivoty2 = 15;
    uder2 = 2;
}
void Shawarma_a_Falafel(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2){
    name = "Shawarma";
    zivoty = 13;
    uder = 1;
    name2 = "Falafel";
    zivoty2 = 24;
    uder2 = 1;
}
void Omackove_trio(string &name, int &zivoty, int &uder, string &name2, int &zivoty2, int &uder2, string &name3, int &zivoty3, int &uder3){
    name = "bylinkova";
    zivoty = 15;
    uder = 2;
    name2 = "cesnekova";
    zivoty2 = 20;
    uder2 = 1;
    name3 = "paliva";
    zivoty3 = 5;
    uder3 = 10;
}
void souboj1(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    int zivoty;
    int uder;
    int volba_tahu;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 3 + 1;
    switch (nahoda2){
    case 1:
        Rajcatove_monstrum(name, zivoty, uder);
        break;
    case 2:
        Salatove_monstrum(name, zivoty, uder);
        break;
    case 3:
        Zelne_monstrum(name, zivoty, uder);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name;
    do {
    do {
        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Majznuti zelim: poskozeni " << damage << endl << "2) Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o " << schopnost1 << " HP - stoji 2 many" << endl << "3) Omacka navic: Vyleci ti " << schopnost2 << " HP - stoji 2 many"<< endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                HP = HP + schopnost2;
                if (HP > aktHP){
                    HP = aktHP;
                }
                aktMana = aktMana - Mana2;
                cout << endl << "Vyhealoval jsi se";
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    if (zivoty > 0){
        HP = HP - uder;
        cout << endl << name << " ti ubralo " << uder << " HP." << endl;
    }
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 50 XP";
        aktXP = XP + 50;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            aktTurkoin = Turkoin + 5;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj2(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    int zivoty;
    int uder;
    int volba_tahu;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 3 + 1;
    switch (nahoda2){
    case 1:
        Rajcatove_monstrum(name, zivoty, uder);
        break;
    case 2:
        Salatove_monstrum(name, zivoty, uder);
        break;
    case 3:
        Zelne_monstrum(name, zivoty, uder);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name;
    do {
    do {
        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Hod rajcetem: poskozeni " << damage << endl << "2) Salatovy katapult: uberes vsem cilum " << schopnost1 << " HP - stoji 2 many" << endl << "3)  Masovy vypad: Ubere nepritely " << schopnost2 << " HP - stoji 3 man" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
             if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                if (zivoty >= schopnost2){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < schopnost2){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2;
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    if (zivoty > 0){
        HP = HP - uder;
        cout << endl << name << " ti ubralo " << uder << " HP." << endl;
    }
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 50 XP";
        aktXP = XP + 50;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            aktTurkoin = Turkoin + 5;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj3(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    int zivoty;
    int uder;
    int volba_tahu;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 3 + 1;
    switch (nahoda2){
    case 1:
        Rajcatove_monstrum(name, zivoty, uder);
        break;
    case 2:
        Salatove_monstrum(name, zivoty, uder);
        break;
    case 3:
        Zelne_monstrum(name, zivoty, uder);
        break;
    }
    cout << endl << "Pozor!!!" << endl << "Bojujes proti : " << name;
    do {
    do {
        cout << endl << endl << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Zasah cizrnou: poskozeni " << damage << endl << "2) Omackova potopa: plosne poskozeni " << schopnost1 << " HP - stoji 4 many" << endl << "3) Falafelova koule: vysoke poskozeni " << schopnost2 << " HP - stoji 6 many" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
             if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                if (zivoty >= schopnost2){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < schopnost2){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2;
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    if (zivoty > 0){
        HP = HP - uder;
        cout << endl << name << " ti ubralo " << uder << " HP." << endl;
    }
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 50 XP";
        aktXP = XP + 50;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            aktTurkoin = Turkoin + 5;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj4(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    int zivoty;
    int uder;
    int volba_tahu;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 3 + 1;
    switch (nahoda2){
    case 1:
        Rajcatove_monstrum(name, zivoty, uder);
        break;
    case 2:
        Salatove_monstrum(name, zivoty, uder);
        break;
    case 3:
        Zelne_monstrum(name, zivoty, uder);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name;
    do {
    do {
        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Spalena tortila: poskozeni " << damage << endl << "2) Vysati omacky: udeli poskozeni " << schopnost1 << " a vyleci hrace o 3 HP - stoji 4 many" << endl << "3) Zkazene maso: pristi utok da " << schopnost2 << "nasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                HP = HP - 1;
                if (HP <= 0){
                    cout << "Zabil ses LOL :-D";
                    abort();
                }
                if (zivoty >= (schopnost2 * damage)){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 * damage<< " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < (schopnost2 * damage)){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2 * damage;

            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    if (zivoty > 0){
        HP = HP - uder;
        cout << endl << name << " ti ubralo " << uder << " HP." << endl;
    }
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 50 XP";
        aktXP = XP + 50;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            aktTurkoin = Turkoin + 5;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void MiniBoss1(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP , int uloz, int &ulozeni ){
    string name;
    int zivoty;
    int uder;
    int nahoda = rand() % 2 + 1;
    ulozeni = uloz;
    if (ulozeni > 0){
        nahoda = ulozeni;
    }
    switch (nahoda){
    case 1:
        Kebabloater(name, zivoty, uder);
        ulozeni = 2;
        break;
    case 2:
        Kebabrain(name, zivoty, uder);
        ulozeni = 1;
        break;
    }

    int volba_tahu;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti Mini bossovi: " << name;
    do {

        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        HP = HP - uder;
        cout << endl << endl << name << " ti ubral " << uder << " HP." << endl;
        if (HP <= 0){
            cout << "Mini boss te low-key zabil.";
            abort();
        }
        do {
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Majznuti zelim: poskozeni " << damage << endl << "2) Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o " << schopnost1 << " HP - stoji 2 many" << endl << "3) Omacka navic: Vyleci ti " << schopnost2 << " HP - stoji 2 many"<< endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                HP = HP + schopnost2;
                if (HP > aktHP){
                    HP = aktHP;
                }
                aktMana = aktMana - Mana2;
                cout << endl << "Vyhealoval jsi se";
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        cout << endl << "Mini boss mel u sebe 10 Turkoinu.";
        aktTurkoin = Turkoin + 10;
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    }
}
void MiniBoss2(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP, int uloz, int &ulozeni ){
    string name;
    int zivoty;
    int uder;
    int nahoda = rand() % 2 + 1;
    ulozeni = uloz;
    if (ulozeni > 0){
        nahoda = ulozeni;
    }
    switch (nahoda){
    case 1:
        Kebabloater(name, zivoty, uder);
        ulozeni = 2;
        break;
    case 2:
        Kebabrain(name, zivoty, uder);
        ulozeni = 1;
        break;
    }

    int volba_tahu;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti Mini bossovi: " << name;
    do {

        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        HP = HP - uder;
        cout << endl << endl << name << " ti ubral " << uder << " HP." << endl;
        if (HP <= 0){
            cout << "Mini boss te low-key zabil.";
            abort();
        }
        do {
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Hod rajcetem: poskozeni " << damage << endl << "2) Salatovy katapult: uberes vsem cilum " << schopnost1 << " HP - stoji 2 many" << endl << "3)  Masovy vypad: Ubere nepritely " << schopnost2 << " HP - stoji 3 man" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
             if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                if (zivoty >= schopnost2){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < schopnost2){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2;
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        cout << endl << "Mini boss mel u sebe 10 Turkoinu.";
        aktTurkoin = Turkoin + 10;
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    }
}
void MiniBoss3(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP, int uloz, int &ulozeni ){
    string name;
    int zivoty;
    int uder;
    int nahoda = rand() % 2 + 1;
    ulozeni = uloz;
    if (ulozeni > 0){
        nahoda = ulozeni;
    }
    switch (nahoda){
    case 1:
        Kebabloater(name, zivoty, uder);
        ulozeni = 2;
        break;
    case 2:
        Kebabrain(name, zivoty, uder);
        ulozeni = 1;
        break;
    }

    int volba_tahu;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti Mini bossovi: " << name;
    do {

        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        HP = HP - uder;
        cout << endl << endl << name << " ti ubral " << uder << " HP." << endl;
        if (HP <= 0){
            cout << "Mini boss te low-key zabil.";
            abort();
        }
        do {
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Zasah cizrnou: poskozeni " << damage << endl << "2) Omackova potopa: plosne poskozeni " << schopnost1 << " HP - stoji 4 many" << endl << "3) Falafelova koule: vysoke poskozeni " << schopnost2 << " HP - stoji 6 many" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
             if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                if (zivoty >= schopnost2){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < schopnost2){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2;
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        cout << endl << "Mini boss mel u sebe 10 Turkoinu.";
        aktTurkoin = Turkoin + 10;
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    }
}
void MiniBoss4(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP, int uloz, int &ulozeni ){
    string name;
    int zivoty;
    int uder;
    int nahoda = rand() % 2 + 1;
    ulozeni = uloz;
    if (ulozeni > 0){
        nahoda = ulozeni;
    }
    switch (nahoda){
    case 1:
        Kebabloater(name, zivoty, uder);
        ulozeni = 2;
        break;
    case 2:
        Kebabrain(name, zivoty, uder);
        ulozeni = 1;
        break;
    }

    int volba_tahu;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti Mini bossovi: " << name;
    do {

        cout << endl << "Poskozeni nepritele: " << uder << "    Zivoty nepritele: " << zivoty;
        HP = HP - uder;
        cout << endl << endl << name << " ti ubral " << uder << " HP." << endl;
        if (HP <= 0){
            cout << "Mini boss te low-key zabil.";
            abort();
        }
        do {
        cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
        cout << endl << " Mozne tahy: " << endl << "1) Spalena tortila: poskozeni " << damage << endl << "2) Vysati omacky: udeli poskozeni " << schopnost1 << " a vyleci hrace o 3 HP - stoji 4 many" << endl << "3) Zkazene maso: pristi utok da " << schopnost2 << "nasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many" << endl << "Co chces hrat? ";
        cin >> volba_tahu;
        switch(volba_tahu){
        case 1:
            if (zivoty >= damage){
                cout << endl << "Ubral jsi nepriteli " << damage << " HP";
            }else if (zivoty < damage){
                cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
            }
            zivoty = zivoty - damage;
            break;
        case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                }
                zivoty = zivoty - schopnost1;
            }
            break;
        case 3:
            if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
                break;
            } else if (aktMana >= Mana2){
                aktMana = aktMana - Mana2;
                HP = HP - 1;
                if (HP <= 0){
                    cout << "Zabil ses LOL :-D";
                    abort();
                }
                if (zivoty >= schopnost2 * damage){
                    cout << endl << "Ubral jsi nepritely " << schopnost2 * damage<< " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                } else if (zivoty < schopnost2 * damage){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                }
                zivoty = zivoty - schopnost2 * damage;
            }
            break;
        default:
            cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
        }
    } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit " << name << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        cout << endl << "Mini boss mel u sebe 10 Turkoinu.";
        aktTurkoin = Turkoin + 10;
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    }
}
void souboj_se_dvemi1(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    int zivoty;
    int zivoty2;
    int uder;
    int uder2;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 5 + 1;
    switch (nahoda2){
    case 1:
        Doner_a_Durum(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 2:
        Kureci_a_Teleci(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 3:
        Hranolek_a_Hranolka(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 4:
        Halloumi_a_Hummus(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 5:
        Shawarma_a_Falafel(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name << " a " << name2;
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Majznuti zelim: poskozeni " << damage << endl << "2) Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o " << schopnost1 << " HP - stoji 2 many" << endl << "3) Omacka navic: Vyleci ti " << schopnost2 << " HP - stoji 2 many"<< endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    HP = HP + schopnost2;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                    aktMana = aktMana - Mana2;
                    cout << endl << "Vyhealoval jsi se";
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 )&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << ".";
        cout << endl << "Dostal jsi 100 XP";
        aktXP = XP + 100;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_dvemi2(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    int zivoty;
    int zivoty2;
    int uder;
    int uder2;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 5 + 1;
    switch (nahoda2){
    case 1:
        Doner_a_Durum(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 2:
        Kureci_a_Teleci(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 3:
        Hranolek_a_Hranolka(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 4:
        Halloumi_a_Hummus(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 5:
        Shawarma_a_Falafel(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name << " a " << name2;
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Hod rajcetem: poskozeni " << damage << endl << "2) Salatovy katapult: uberes vsem cilum " << schopnost1 << " HP - stoji 2 many" << endl << "3)  Masovy vypad: Ubere nepritely " << schopnost2 << " HP - stoji 3 man" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    aktMana = aktMana - Mana2;
                    if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - schopnost2;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty2 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - schopnost2;
                    break;
                }
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 )&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << ".";
        cout << endl << "Dostal jsi 100 XP";
        aktXP = XP + 100;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_dvemi3(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    int zivoty;
    int zivoty2;
    int uder;
    int uder2;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 5 + 1;
    switch (nahoda2){
    case 1:
        Doner_a_Durum(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 2:
        Kureci_a_Teleci(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 3:
        Hranolek_a_Hranolka(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 4:
        Halloumi_a_Hummus(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 5:
        Shawarma_a_Falafel(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name << " a " << name2;
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Zasah cizrnou: poskozeni " << damage << endl << "2) Omackova potopa: plosne poskozeni " << schopnost1 << " HP - stoji 4 many" << endl << "3) Falafelova koule: vysoke poskozeni " << schopnost2 << " HP - stoji 6 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    aktMana = aktMana - Mana2;
                    if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - schopnost2;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty2 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - schopnost2;
                    break;
                }
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 )&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << ".";
        cout << endl << "Dostal jsi 100 XP";
        aktXP = XP + 100;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_dvemi4(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    int zivoty;
    int zivoty2;
    int uder;
    int uder2;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    int nahoda2 = rand() % 5 + 1;
    switch (nahoda2){
    case 1:
        Doner_a_Durum(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 2:
        Kureci_a_Teleci(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 3:
        Hranolek_a_Hranolka(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 4:
        Halloumi_a_Hummus(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    case 5:
        Shawarma_a_Falafel(name, zivoty, uder, name2, zivoty2, uder2);
        break;
    }
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : " << name << " a " << name2;
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Spalena tortila: poskozeni " << damage << endl << "2) Vysati omacky: udeli poskozeni " << schopnost1 << " a vyleci hrace o 3 HP - stoji 4 many" << endl << "3) Zkazene maso: pristi utok da " << schopnost2 << "nasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                }
                if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:

                    if (aktMana >= Mana1){
                        aktMana = aktMana - Mana1;
                        if (zivoty >= schopnost1){
                            cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                        } else if (zivoty < schopnost1){
                            cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                        }
                        zivoty = zivoty - schopnost1;
                        HP = HP + 3;
                        if (HP > aktHP){
                            HP = aktHP;
                        }
                    }
                    break;
                case 2:
                        if (aktMana >= Mana1){
                            aktMana = aktMana - Mana1;
                        if (zivoty2 >= schopnost1){
                            cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                        } else if (zivoty2 < schopnost1){
                            cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                        }
                        zivoty2 = zivoty2 - schopnost1;
                        HP = HP + 3;
                        if (HP > aktHP){
                            HP = aktHP;
                        }
                    }
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    aktMana = aktMana - Mana2;
                    HP = HP - 1;
                if (HP <= 0){
                    cout << "Zabil ses LOL :-D";
                    abort();
                }
                    if (zivoty <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0){
                    volba_monstra = 1;
                }
                if (zivoty > 0 && zivoty2 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 * damage << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }else if (zivoty < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty = zivoty - schopnost2 * damage;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 * damage<< " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }else if (zivoty2 < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty2 = zivoty2 - schopnost2 * damage;
                    break;
                }
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 )&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << ".";
        cout << endl << "Dostal jsi 100 XP";
        aktXP = XP + 100;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, monstrum u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_tremi1(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    string name3;
    int zivoty;
    int zivoty2;
    int zivoty3;
    int uder;
    int uder2;
    int uder3;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    Omackove_trio(name, zivoty, uder, name2, zivoty2, uder2, name3, zivoty3, uder3);
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : Bylinkove, Cesnekove a Palive omacce!";
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            if (zivoty3 > 0){
                cout << endl << "Poskozeni nepritele " << name3 << " : " << uder3 << "    Zivoty nepritele " << name3 << " : " << zivoty3;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Majznuti zelim: poskozeni " << damage << endl << "2) Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o " << schopnost1 << " HP - stoji 2 many" << endl << "3) Omacka navic: Vyleci ti " << schopnost2 << " HP - stoji 2 many"<< endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                case 3:
                    if (zivoty3 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty3 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty3 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << zivoty3 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                    zivoty3 = zivoty3 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    HP = HP + schopnost2;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                    aktMana = aktMana - Mana2;
                    cout << endl << "Vyhealoval jsi se";
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
                }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
        if (zivoty3 > 0){
            HP = HP - uder3;
            cout << endl << name3 << " ti ubral/o " << uder3 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 || zivoty3 > 0)&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0 && zivoty3 <= 0 ){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << " a " << name3 << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name2 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name3 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_tremi2(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    string name3;
    int zivoty;
    int zivoty2;
    int zivoty3;
    int uder;
    int uder2;
    int uder3;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    Omackove_trio(name, zivoty, uder, name2, zivoty2, uder2, name3, zivoty3, uder3);
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : Bylinkove, Cesnekove a Palive omacce!";
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            if (zivoty3 > 0){
                cout << endl << "Poskozeni nepritele " << name3 << " : " << uder3 << "    Zivoty nepritele " << name3 << " : " << zivoty3;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Hod rajcetem: poskozeni " << damage << endl << "2) Salatovy katapult: uberes vsem cilum " << schopnost1 << " HP - stoji 2 many" << endl << "3)  Masovy vypad: Ubere nepritely " << schopnost2 << " HP - stoji 3 man" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                case 3:
                    if (zivoty3 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty3 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty3 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << zivoty3 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                    zivoty3 = zivoty3 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                }
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - schopnost2;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty2 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - schopnost2;
                    break;
                case 3:
                    if (zivoty3 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty3 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - schopnost2;
                    break;
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
                }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
        if (zivoty3 > 0){
            HP = HP - uder3;
            cout << endl << name3 << " ti ubral/o " << uder3 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 || zivoty3 > 0)&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0 && zivoty3 <= 0 ){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << " a " << name3 << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name2 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name3 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_tremi3(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    string name3;
    int zivoty;
    int zivoty2;
    int zivoty3;
    int uder;
    int uder2;
    int uder3;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    Omackove_trio(name, zivoty, uder, name2, zivoty2, uder2, name3, zivoty3, uder3);
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : Bylinkove, Cesnekove a Palive omacce!";
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            if (zivoty3 > 0){
                cout << endl << "Poskozeni nepritele " << name3 << " : " << uder3 << "    Zivoty nepritele " << name3 << " : " << zivoty3;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Zasah cizrnou: poskozeni " << damage << endl << "2) Omackova potopa: plosne poskozeni " << schopnost1 << " HP - stoji 4 many" << endl << "3) Falafelova koule: vysoke poskozeni " << schopnost2 << " HP - stoji 6 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                case 3:
                    if (zivoty3 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty3 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name << " " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name2 << " " << zivoty2 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    if (zivoty3 >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << name3 << " " << zivoty3 << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    zivoty2 = zivoty2 - schopnost1;
                    zivoty3 = zivoty3 - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                }
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - schopnost2;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty2 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - schopnost2;
                    break;
                case 3:
                    if (zivoty3 >= schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 << " HP";
                    }else if (zivoty3 < schopnost2){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - schopnost2;
                    break;
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
                }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
        if (zivoty3 > 0){
            HP = HP - uder3;
            cout << endl << name3 << " ti ubral/o " << uder3 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 || zivoty3 > 0)&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0 && zivoty3 <= 0 ){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << " a " << name3 << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name2 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name3 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void souboj_se_tremi4(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name;
    string name2;
    string name3;
    int zivoty;
    int zivoty2;
    int zivoty3;
    int uder;
    int uder2;
    int uder3;
    int volba_tahu;
    int volba_monstra;
    int nahoda = rand() % 2 + 1;
    Omackove_trio(name, zivoty, uder, name2, zivoty2, uder2, name3, zivoty3, uder3);
    cout << endl << endl << endl << "Pozor!!!" << endl << "Bojujes proti : Bylinkove, Cesnekove a Palive omacce!";
    do {
        do {
            if (zivoty > 0){
                cout << endl << "Poskozeni nepritele " << name << " : " << uder << "    Zivoty nepritele " << name << " : " << zivoty;
            }
            if (zivoty2 > 0){
                cout << endl << "Poskozeni nepritele " << name2 << " : " << uder2 << "    Zivoty nepritele " << name2 << " : " << zivoty2;
            }
            if (zivoty3 > 0){
                cout << endl << "Poskozeni nepritele " << name3 << " : " << uder3 << "    Zivoty nepritele " << name3 << " : " << zivoty3;
            }
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Spalena tortila: poskozeni " << damage << endl << "2) Vysati omacky: udeli poskozeni " << schopnost1 << " a vyleci hrace o 3 HP - stoji 4 many" << endl << "3) Zkazene maso: pristi utok da " << schopnost2 << "nasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                    }
                    zivoty = zivoty - damage;
                    break;
                case 2:
                    if (zivoty2 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty2 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP";
                    }
                    zivoty2 = zivoty2 - damage;
                    break;
                case 3:
                    if (zivoty3 >= damage){
                        cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                    }else if (zivoty3 < damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP";
                    }
                    zivoty3 = zivoty3 - damage;
                    break;
                }

                break;
            case 2:
                if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << schopnost1 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                    break;
                case 2:
                    if (zivoty2 >= schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << schopnost1 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }else if (zivoty2 < schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty2 = zivoty2 - schopnost1;
                    break;
                case 3:
                    if (zivoty3 >= schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << schopnost1 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }else if (zivoty3 < schopnost1){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP, vyhealoval sis 3 HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty3 = zivoty3 - schopnost1;
                    break;
                }
                HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                }
                if (aktMana >= Mana2){
                        aktMana = aktMana - Mana2;
                    HP = HP - 1;
                if (HP <= 0){
                    cout << "Zabil ses LOL :-D";
                    abort();
                }
                if (zivoty <= 0 && zivoty3 <= 0){
                    volba_monstra = 2;
                } else if (zivoty2 <= 0 && zivoty3 <= 0){
                    volba_monstra = 1;
                } else if (zivoty2 <= 0 && zivoty <= 0){
                    volba_monstra = 3;
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << " , 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                }
                if (zivoty > 0 && zivoty2 > 0 && zivoty3 <= 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 2 pro " << name2 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 1 || volba_monstra > 2){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                    }
                } else if (zivoty > 0 && zivoty2 <= 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 1 pro " << name << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra != 1 || volba_monstra != 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }else if (zivoty <= 0 && zivoty2 > 0 && zivoty3 > 0){
                    cout << endl << "Na koho chces zautocit? 2 pro " << name2 << ", 3 pro " << name3 << ": ";
                    cin >> volba_monstra;
                    while (volba_monstra < 2 || volba_monstra > 3){
                        cout << "Zadal jsi spatne cislo, zkus to znovu: ";
                        cin >> volba_monstra;
                        }
                }
                switch (volba_monstra){
                case 1:
                    if (zivoty >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2  * damage<< " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }else if (zivoty < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty = zivoty - schopnost2 * damage;
                    break;
                case 2:
                    if (zivoty2 >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 * damage << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }else if (zivoty2 < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty2 * damage << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty2 = zivoty2 - schopnost2 * damage;
                    break;
                case 3:
                    if (zivoty3 >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << schopnost2 * damage << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }else if (zivoty3 < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepriteli " << zivoty3 << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty3 = zivoty3 - schopnost2 * damage;
                    break;
                }
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
                }
        } while (volba_tahu < 1 || volba_tahu > 3);
        if (zivoty > 0){
            HP = HP - uder;
            cout << endl << endl << name << " ti ubral/o " << uder << " HP." << endl;
        }
        if (zivoty2 > 0){
            HP = HP - uder2;
            cout << endl << name2 << " ti ubral/o " << uder2 << " HP." << endl;
        }
        if (zivoty3 > 0){
            HP = HP - uder3;
            cout << endl << name3 << " ti ubral/o " << uder3 << " HP." << endl;
        }
    } while ((zivoty > 0 || zivoty2 > 0 || zivoty3 > 0)&& HP > 0);
    if (zivoty <= 0 && zivoty2 <= 0 && zivoty3 <= 0 ){
        cout << endl << "Podarilo se ti zabit " << name << " a " << name2 << " a " << name3 << ".";
        cout << endl << "Dostal jsi 150 XP";
        aktXP = XP + 150;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name2 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        nahoda = rand() % 2 + 1;
        if (nahoda == 1){
            cout << endl << "Mas stesti, " << name3 << " u sebe melo Turkoiny. Dostal jsi 5 Turkoinu.";
            Turkoin = Turkoin + 5;
            aktTurkoin = Turkoin;
        }
        afterHP = aktHP - HP;
        afterHP = afterHP / 2;
        afterHP = afterHP + HP;
    } else if (HP <= 0){
        cout << " Zemrel jsi.";
        abort(); //Tohle jsem si našel na google. Nevìdìl jsem jak se program mùže ukonèit ve funkci.
    }
}
void Kebabex1(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name = "KEBABEX";
    int Max_zivoty = 75;
    int zivoty = 75;
    int uder = 3;
    int volba_tahu;
    int Keba_tah = 0;
    int Tuk_poskozeni = 2;
    int random_omacka;
    int navrat_many = aktMana;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Konecne jsi se dostal ke konci sve vypravy. Jdes ted bojovat se samotnym KEBABEXEM!!!";
    cout << endl << "Kebabex ma 4 kola:" << endl << "1. kolo bosse - Kebabex se otaci na spizu, priprav se. Zadny efekt na hrace.";
    cout << endl << "2. kolo bosse - Kebabex preteka tukem. Udeluje 2 poskozeni ( kazde dalsi druhe kolo se poskozeni zvedne o 1)";
    cout << endl << "3. kolo bosse - Kebabex se roztristil na opecene kousky, ktere na hrace utoci. ( 1 * (za kazdych 5 Hp hrace)";
    cout << endl << "4. kolo bosse - Kebabex se namocil v cesnekove-bylinkove omacce. Nahodne se vybere jedna z omacek:" << endl << "1) Cesnekova: Kebabex si vyhealuje 7 HP" << endl << "2) Bylinkova: Kebabex si vyhealuje 14 HP a hrac dostane 7 HP" << endl;
    do {


            Keba_tah++;
            switch (Keba_tah){
            case 1:
                cout << endl << endl << "1. kolo - Kebabex se otaci na spizu, nic se nedeje.";
                break;
            case 2:
                cout << endl << endl << "2. kolo - Kebabex preteka tukem, udeluje " << Tuk_poskozeni << " poskozeni.";
                HP = HP - Tuk_poskozeni;
                Tuk_poskozeni++;
                break;
            case 3:
                cout << endl << endl << "3. kolo - Kebabex se roztristil na opecene kousky, ubira ti " << HP / 5 << " poskozeni.";
                HP = HP - HP / 5;
                if (HP < 5){
                    HP--;
                }
                break;
            case 4:
                random_omacka = rand() % 2 + 1;
                cout << endl << endl << "4. kolo - Kebabex si vybira jednu z omacek";
                switch (random_omacka){
                case 1:
                    cout << endl << "Byla zvolena cesnekova omacka, Kebabex se vyhealoval";
                    if ((zivoty + 7) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 7) < Max_zivoty){
                        zivoty = zivoty + 7;
                    }
                    break;
                case 2:
                    cout << endl << "Byla zvolena bylinkova omacka, Kebabex i ty jste vyhealovani.";
                    if ((zivoty + 14) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 14) < Max_zivoty){
                        zivoty = zivoty + 14;
                    }
                    if ((HP + 7) >= aktHP){
                        HP = aktHP;
                    } else if ((HP + 7) < aktHP){
                        HP = HP + 7;
                    }

                }
                aktMana = navrat_many;
                Keba_tah = 0;
                break;
            }
            if (HP <= 0){
                cout << endl << endl << "Kebabex te high-key zabil, svet projde kebabizaci a lidstvo se zmeni k nepoznani.";
                abort();
            }
            do {
            cout << endl << endl <<"    Zivoty nepritele: " << zivoty;
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Majznuti zelim: poskozeni " << damage << endl << "2) Placnuti salatem: plosne poskozeni, vsechny nepratele poskody o " << schopnost1 << " HP - stoji 2 many" << endl << "3) Omacka navic: Vyleci ti " << schopnost2 << " HP - stoji 2 many"<< endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty >= damage){
                    cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                }else if (zivoty < damage){
                    cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                }
                zivoty = zivoty - damage;
                break;
            case 2:
                 if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
            } else if (aktMana >= Mana2){
                HP = HP + schopnost2;
                if (HP > aktHP){
                    HP = aktHP;
                }
                aktMana = aktMana - Mana2;
                cout << endl << "Vyhealoval jsi se";
            }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit Kebabexe. Zachranil jsi svet a lide budou moct vzit vareni kebabu zase do svych rukou. Korporaty maji od ted zakazano pracovat se vsim kebabovym. Jsi hrdina!!!";
        abort();
    }
}
void Kebabex2(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name = "KEBABEX";
    int Max_zivoty = 75;
    int zivoty = 75;
    int uder = 3;
    int volba_tahu;
    int Keba_tah = 0;
    int Tuk_poskozeni = 2;
    int random_omacka;
    int navrat_many = aktMana;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Konecne jsi se dostal ke konci sve vypravy. Jdes ted bojovat se samotnym KEBABEXEM!!!";
    cout << endl << "Kebabex ma 4 kola:" << endl << "1. kolo bosse - Kebabex se otaci na spizu, priprav se. Zadny efekt na hrace.";
    cout << endl << "2. kolo bosse - Kebabex preteka tukem. Udeluje 2 poskozeni ( kazde dalsi druhe kolo se poskozeni zvedne o 1)";
    cout << endl << "3. kolo bosse - Kebabex se roztristil na opecene kousky, ktere na hrace utoci. ( 1 * (za kazdych 5 Hp hrace)";
    cout << endl << "4. kolo bosse - Kebabex se namocil v cesnekove-bylinkove omacce. Nahodne se vybere jedna z omacek:" << endl << "1) Cesnekova: Kebabex si vyhealuje 7 HP" << endl << "2) Bylinkova: Kebabex si vyhealuje 14 HP a hrac dostane 7 HP" << endl;
        do {


            Keba_tah++;
            switch (Keba_tah){
            case 1:
                cout << endl << endl << "1. kolo - Kebabex se otaci na spizu, nic se nedeje.";
                break;
            case 2:
                cout << endl << endl << "2. kolo - Kebabex preteka tukem, udeluje " << Tuk_poskozeni << " poskozeni.";
                HP = HP - Tuk_poskozeni;
                Tuk_poskozeni++;
                break;
            case 3:
                cout << endl << endl << "3. kolo - Kebabex se roztristil na opecene kousky, ubira ti " << HP / 5 << " poskozeni.";
                HP = HP - HP / 5;
                if (HP < 5){
                    HP--;
                }
                break;
            case 4:
                random_omacka = rand() % 2 + 1;
                cout << endl << endl << "4. kolo - Kebabex si vybira jednu z omacek";
                switch (random_omacka){
                case 1:
                    cout << endl << "Byla zvolena cesnekova omacka, Kebabex se vyhealoval";
                    if ((zivoty + 7) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 7) < Max_zivoty){
                        zivoty = zivoty + 7;
                    }
                    break;
                case 2:
                    cout << endl << "Byla zvolena bylinkova omacka, Kebabex i ty jste vyhealovani.";
                    if ((zivoty + 14) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 14) < Max_zivoty){
                        zivoty = zivoty + 14;
                    }
                    if ((HP + 7) >= aktHP){
                        HP = aktHP;
                    } else if ((HP + 7) < aktHP){
                        HP = HP + 7;
                    }

                }
                aktMana = navrat_many;
                Keba_tah = 0;
                break;
            }
            if (HP <= 0){
                cout << endl << endl << "Kebabex te high-key zabil, svet projde kebabizaci a lidstvo se zmeni k nepoznani.";
                abort();
            }
            do {
            cout << endl << endl <<"    Zivoty nepritele: " << zivoty;
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Hod rajcetem: poskozeni " << damage << endl << "2) Salatovy katapult: uberes vsem cilum " << schopnost1 << " HP - stoji 2 many" << endl << "3)  Masovy vypad: Ubere nepritely " << schopnost2 << " HP - stoji 3 man" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty >= damage){
                    cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                }else if (zivoty < damage){
                    cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                }
                zivoty = zivoty - damage;
                break;
            case 2:
                 if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    aktMana = aktMana - Mana2;
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                    } else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty = zivoty - schopnost2;
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit Kebabexe. Zachranil jsi svet a lide budou moct vzit vareni kebabu zase do svych rukou. Korporaty maji od ted zakazano pracovat se vsim kebabovym. Jsi hrdina!!!";
        abort();
    }
}
void Kebabex3(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name = "KEBABEX";
    int Max_zivoty = 75;
    int zivoty = 75;
    int uder = 3;
    int volba_tahu;
    int Keba_tah = 0;
    int Tuk_poskozeni = 2;
    int random_omacka;
    int navrat_many = aktMana;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Konecne jsi se dostal ke konci sve vypravy. Jdes ted bojovat se samotnym KEBABEXEM!!!";
    cout << endl << "Kebabex ma 4 kola:" << endl << "1. kolo bosse - Kebabex se otaci na spizu, priprav se. Zadny efekt na hrace.";
    cout << endl << "2. kolo bosse - Kebabex preteka tukem. Udeluje 2 poskozeni ( kazde dalsi druhe kolo se poskozeni zvedne o 1)";
    cout << endl << "3. kolo bosse - Kebabex se roztristil na opecene kousky, ktere na hrace utoci. ( 1 * (za kazdych 5 Hp hrace)";
    cout << endl << "4. kolo bosse - Kebabex se namocil v cesnekove-bylinkove omacce. Nahodne se vybere jedna z omacek:" << endl << "1) Cesnekova: Kebabex si vyhealuje 7 HP" << endl << "2) Bylinkova: Kebabex si vyhealuje 14 HP a hrac dostane 7 HP" << endl;
    do {


            Keba_tah++;
            switch (Keba_tah){
            case 1:
                cout << endl << endl << "1. kolo - Kebabex se otaci na spizu, nic se nedeje.";
                break;
            case 2:
                cout << endl << endl << "2. kolo - Kebabex preteka tukem, udeluje " << Tuk_poskozeni << " poskozeni.";
                HP = HP - Tuk_poskozeni;
                Tuk_poskozeni++;
                break;
            case 3:
                cout << endl << endl << "3. kolo - Kebabex se roztristil na opecene kousky, ubira ti " << HP / 5 << " poskozeni.";
                HP = HP - HP / 5;
                if (HP < 5){
                    HP--;
                }
                break;
            case 4:
                random_omacka = rand() % 2 + 1;
                cout << endl << endl << "4. kolo - Kebabex si vybira jednu z omacek";
                switch (random_omacka){
                case 1:
                    cout << endl << "Byla zvolena cesnekova omacka, Kebabex se vyhealoval";
                    if ((zivoty + 7) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 7) < Max_zivoty){
                        zivoty = zivoty + 7;
                    }
                    break;
                case 2:
                    cout << endl << "Byla zvolena bylinkova omacka, Kebabex i ty jste vyhealovani.";
                    if ((zivoty + 14) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 14) < Max_zivoty){
                        zivoty = zivoty + 14;
                    }
                    if ((HP + 7) >= aktHP){
                        HP = aktHP;
                    } else if ((HP + 7) < aktHP){
                        HP = HP + 7;
                    }

                }
                aktMana = navrat_many;
                Keba_tah = 0;
                break;
            }
            if (HP <= 0){
                cout << endl << endl << "Kebabex te high-key zabil, svet projde kebabizaci a lidstvo se zmeni k nepoznani.";
                abort();
            }
            do {
            cout << endl << endl <<"    Zivoty nepritele: " << zivoty;
            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Zasah cizrnou: poskozeni " << damage << endl << "2) Omackova potopa: plosne poskozeni " << schopnost1 << " HP - stoji 4 many" << endl << "3) Falafelova koule: vysoke poskozeni " << schopnost2 << " HP - stoji 6 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty >= damage){
                    cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                }else if (zivoty < damage){
                    cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                }
                zivoty = zivoty - damage;
                break;
            case 2:
                 if (aktMana < Mana1){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana1){
                    aktMana = aktMana - Mana1;
                    if (zivoty >= schopnost1){
                        cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP a stalo te to " << Mana1 << " many.";
                    } else if (zivoty < schopnost1){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana1 << " many.";
                    }
                    zivoty = zivoty - schopnost1;
                }
                break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    aktMana = aktMana - Mana2;
                    if (zivoty >= schopnost2){
                        cout << endl << "Ubral jsi nepritely " << schopnost2 << " HP a stalo te to " << Mana2 << " many.";
                    } else if (zivoty < schopnost2){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty = zivoty - schopnost2;
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit Kebabexe. Zachranil jsi svet a lide budou moct vzit vareni kebabu zase do svych rukou. Korporaty maji od ted zakazano pracovat se vsim kebabovym. Jsi hrdina!!!";
        abort();
    }
}
void Kebabex4(int Turkoin, int aktHP, int HP, int aktMana, int damage, int schopnost1, int Mana1, int schopnost2, int Mana2, int heal, int SnizeniHP, int XP, int &aktXP, int &aktTurkoin, int &afterHP){
    string name = "KEBABEX";
    int Max_zivoty = 75;
    int zivoty = 75;
    int uder = 3;
    int volba_tahu;
    int Keba_tah = 0;
    int Tuk_poskozeni = 2;
    int random_omacka;
    int navrat_many = aktMana;
    cout << endl << endl << endl << "Pozor!!!" << endl << "Konecne jsi se dostal ke konci sve vypravy. Jdes ted bojovat se samotnym KEBABEXEM!!!";
    cout << endl << "Kebabex ma 4 kola:" << endl << "1. kolo bosse - Kebabex se otaci na spizu, priprav se. Zadny efekt na hrace.";
    cout << endl << "2. kolo bosse - Kebabex preteka tukem. Udeluje 2 poskozeni ( kazde dalsi druhe kolo se poskozeni zvedne o 1)";
    cout << endl << "3. kolo bosse - Kebabex se roztristil na opecene kousky, ktere na hrace utoci. ( 1 * (za kazdych 5 Hp hrace)";
    cout << endl << "4. kolo bosse - Kebabex se namocil v cesnekove-bylinkove omacce. Nahodne se vybere jedna z omacek:" << endl << "1) Cesnekova: Kebabex si vyhealuje 7 HP" << endl << "2) Bylinkova: Kebabex si vyhealuje 14 HP a hrac dostane 7 HP" << endl;
    do {


            Keba_tah++;
            switch (Keba_tah){
            case 1:
                cout << endl << endl << "1. kolo - Kebabex se otaci na spizu, nic se nedeje.";
                break;
            case 2:
                cout << endl << endl << "2. kolo - Kebabex preteka tukem, udeluje " << Tuk_poskozeni << " poskozeni.";
                HP = HP - Tuk_poskozeni;
                Tuk_poskozeni++;
                break;
            case 3:
                cout << endl << endl << "3. kolo - Kebabex se roztristil na opecene kousky, ubira ti " << HP / 5 << " poskozeni.";
                HP = HP - HP / 5;
                if (HP < 5){
                    HP--;
                }
                break;
            case 4:
                random_omacka = rand() % 2 + 1;
                cout << endl << endl << "4. kolo - Kebabex si vybira jednu z omacek";
                switch (random_omacka){
                case 1:
                    cout << endl << "Byla zvolena cesnekova omacka, Kebabex se vyhealoval";
                    if ((zivoty + 7) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 7) < Max_zivoty){
                        zivoty = zivoty + 7;
                    }
                    break;
                case 2:
                    cout << endl << "Byla zvolena bylinkova omacka, Kebabex i ty jste vyhealovani.";
                    if ((zivoty + 14) >= Max_zivoty){
                        zivoty = Max_zivoty;
                    } else if ((zivoty + 14) < Max_zivoty){
                        zivoty = zivoty + 14;
                    }
                    if ((HP + 7) >= aktHP){
                        HP = aktHP;
                    } else if ((HP + 7) < aktHP){
                        HP = HP + 7;
                    }

                }
                aktMana = navrat_many;
                Keba_tah = 0;
                break;
            }
            if (HP <= 0){
                cout << endl << endl << "Kebabex te high-key zabil, svet projde kebabizaci a lidstvo se zmeni k nepoznani.";
                abort();
            }
            do {
            cout << endl << endl <<"    Zivoty nepritele: " << zivoty;

            cout << endl << endl << "Tvoje HP: " << HP << "/" << aktHP << "    tvoje Mana: " << aktMana;
            cout << endl << " Mozne tahy: " << endl << "1) Spalena tortila: poskozeni " << damage << endl << "2) Vysati omacky: udeli poskozeni " << schopnost1 << " a vyleci hrace o 3 HP - stoji 4 many" << endl << "3) Zkazene maso: pristi utok da " << schopnost2 << "nasobne poskozeni, ale hrac ztrati 1 HP - stoji 3 many" << endl << "Co chces hrat? ";
            cin >> volba_tahu;
            switch(volba_tahu){
            case 1:
                if (zivoty >= damage){
                    cout << endl << "Ubral jsi nepriteli " << damage << " HP";
                }else if (zivoty < damage){
                    cout << endl << "Ubral jsi nepriteli " << zivoty << " HP";
                }
                zivoty = zivoty - damage;
                break;
            case 2:
            if (aktMana < Mana1){
                cout << endl << "Na tohle nemas dost Many";
                volba_tahu = 5;
            } else if (aktMana >= Mana1){
                aktMana = aktMana - Mana1;
                if (zivoty >= schopnost1){
                    cout << endl << "Ubral jsi nepritely " << schopnost1 << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                } else if (zivoty < schopnost1){
                    cout << endl << "Ubral jsi nepritely " << zivoty << " HP, vyhealoval sis " << heal << " HP a stalo te to " << Mana1 << " many.";
                    HP = HP + 3;
                    if (HP > aktHP){
                        HP = aktHP;
                    }
                }
                zivoty = zivoty - schopnost1;
            }
            break;
            case 3:
                if (aktMana < Mana2){
                    cout << endl << "Na tohle nemas dost Many";
                    volba_tahu = 5;
                } else if (aktMana >= Mana2){
                    HP = HP - 1;
                if (HP <= 0){
                    cout << "Zabil ses LOL :-D";
                    abort();
                }
                    aktMana = aktMana - Mana2;
                    if (zivoty >= schopnost2 * damage){
                        cout << endl << "Ubral jsi nepritely " << schopnost2 * damage<< " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    } else if (zivoty < schopnost2 * damage){
                        cout << endl << "Ubral jsi nepritely " << zivoty << " HP, ubral sis 1 HP a stalo te to " << Mana2 << " many.";
                    }
                    zivoty = zivoty - schopnost2 * damage;
                }
                break;
            default:
                cout << endl << "Zadal jsi spatne cislo, zkus to znovu";
            }
        } while (volba_tahu < 1 || volba_tahu > 3);
    } while (zivoty > 0 && HP > 0);
    if (zivoty <= 0){
        cout << endl << "Podarilo se ti zabit Kebabexe. Zachranil jsi svet a lide budou moct vzit vareni kebabu zase do svych rukou. Korporaty maji od ted zakazano pracovat se vsim kebabovym. Jsi hrdina!!!";
        abort();
    }
}
int main(){
    srand (time(NULL));
    string jmeno;
    int maxHP;
    int aktHP;
    int maxMana;
    int aktMana;
    int Turkoin;
    int level;
    int XP = 0;
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
    int uloz = 0;
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
        maxHP = 20;
        aktHP = 10;
        maxMana = 14;
        aktMana = 7;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 3;
        schopnost1 = 2;
        Mana1 = 2;
        schopnost2 = 6;
        Mana2 = 2;
    } else if (volba_class == 2){
        jmeno = "Kebab Classic";
        maxHP = 24;
        aktHP = 12;
        maxMana = 18;
        aktMana = 9;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 4;
        schopnost1 = 3;
        Mana1 = 2;
        schopnost2 = 7;
        Mana2 = 3;
    } else if (volba_class == 3){
        jmeno = "Magicky Falafel";
        maxHP = 18;
        aktHP = 9;
        maxMana = 30;
        aktMana = 15;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 3;
        schopnost1 = 5;
        Mana1 = 4;
        schopnost2 = 10;
        Mana2 = 6;
    } else if (volba_class == 4){
        jmeno = "Temny Kebab";
        maxHP = 14;
        aktHP = 7;
        maxMana = 24;
        aktMana = 12;
        Turkoin = 10;
        level = 1;
        XP = 0;
        damage = 3;
        schopnost1 = 4;
        heal = 3;
        Mana1 = 4;
        schopnost2 = 3;
        SnizeniHP = 2;
        Mana2 = 3;
    }
    HP = aktHP;
    Vesnice(HP, aktHP, aktMana, Turkoin, volba_nakupu, maxHP, maxMana, damage, schopnost1, schopnost2, HP, aktHP, aktMana, Turkoin, damage, schopnost1, schopnost2);
    switch (volba_class){
    case 1:
        souboj1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    switch (volba_class){
    case 1:
        souboj1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        souboj_se_dvemi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_dvemi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_dvemi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_dvemi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        MiniBoss1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 2:
        MiniBoss2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 3:
        MiniBoss3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 4:
        MiniBoss4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    Vesnice(HP, aktHP, aktMana, Turkoin, volba_nakupu, maxHP, maxMana, damage, schopnost1, schopnost2, HP, aktHP, aktMana, Turkoin, damage, schopnost1, schopnost2);
    switch (volba_class){
    case 1:
        souboj1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        souboj_se_dvemi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_dvemi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_dvemi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_dvemi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        souboj_se_dvemi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_dvemi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_dvemi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_dvemi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        MiniBoss1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 2:
        MiniBoss2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 3:
        MiniBoss3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    case 4:
        MiniBoss4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP , uloz, uloz);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    Vesnice(HP, aktHP, aktMana, Turkoin, volba_nakupu, maxHP, maxMana, damage, schopnost1, schopnost2, HP, aktHP, aktMana, Turkoin, damage, schopnost1, schopnost2);
    switch (volba_class){
    case 1:
        souboj_se_dvemi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_dvemi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_dvemi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_dvemi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        souboj_se_dvemi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_dvemi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_dvemi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_dvemi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    switch (volba_class){
    case 1:
        souboj_se_tremi1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        souboj_se_tremi2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        souboj_se_tremi3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        souboj_se_tremi4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
    levelup(XP, level, aktHP, aktMana, damage, aktHP, HP, aktMana, damage, XP, level);
    cout << endl << endl << endl << "---------------------UPOZORNENI--------------------" << endl << endl << "Toto je posledni vesnice pred hlavnim bossem hry, doporucuje se rozumne utratit vsechny zbyle penize." << endl << endl;
    Vesnice(HP, aktHP, aktMana, Turkoin, volba_nakupu, maxHP, maxMana, damage, schopnost1, schopnost2, HP, aktHP, aktMana, Turkoin, damage, schopnost1, schopnost2);
    switch (volba_class){
    case 1:
        Kebabex1(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 2:
        Kebabex2(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 3:
        Kebabex3(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    case 4:
        Kebabex4(Turkoin, aktHP, HP, aktMana, damage, schopnost1, Mana1, schopnost2, Mana2, heal, SnizeniHP, XP, XP, Turkoin, HP);
        break;
    }
}
