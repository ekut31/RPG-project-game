#include <iostream>
using namespace std;

/*class gamer {
public:
    humans human;
    race race_;
    Class class_;
    int health;
    string name;

    gamer(string name_, race race, Class class){
        name=name_;
        race_=race__;
        class_=class__;
    }

    gamer(string name_, race race__){
        name=name_;
        race_=race__;
    }

    void get_Class(string class__){
        if (class__=="�������"){class_=human};

    }
};*/

class race {
public:
    race(string name_, string race_name_, string feature_) { name = name_; race_name = race_name_; feature = feature_; }
    virtual void skill() {};
    string name;
    string feature;
    string race_name;
    race() {}
};

class argonians : public race {
public:
    argonians(string name_) : race(name_, "����������", feature) {

    }
    string feature = "�����";
    void skill() {
        cout << "*������� ����*" << endl;
    }
};

class humans : public race {
public:
    humans(string name_) : race(name_, "�������", feature) {
    }
    string feature = "�������";    void skill() {
        cout << "���� �����.." << endl;
    }
};
class orks : public race {
public:
    orks(string name_) : race(name_, "���", feature) {
    }    string feature = "�����";
    void skill() {
        cout << "�����..." << endl;
    }
};
class elves : public race {
public:    elves(string name_) : race(name_, "����", feature) {
}
      string feature = "���";    void skills() {
          cout << "*��������� ��� ����*" << endl;
      }
};
class khadjits : public race {
public:
    khadjits(string name_) : race(name_, "������", feature) {
    }    string feature = "����";
    void skill() {
        cout << "���..." << endl;
    }
};
class dworves : public race {
public:    dworves(string name_) : race(name_, "����", feature) {
}
      string feature = "������";    void skills() {
          cout << "*����� ������...*" << endl;
      }
};
class fairies : public race {
public:
    fairies(string name_) : race(name_, "���", feature) {
    }    string feature = "������";
    void skill() {
        cout << "*������� ������*" << endl;
    }
};
class demons : public race {
public:    demons(string name_) : race(name_, "�����", feature) {
}
      string feature = "����";
      void skill() {
          cout << "*��������� ����*" << endl;
      }
};
class vampires : public race {
public:    vampires(string name_) : race(name_, "������", feature) {
}
      string feature = "������� ����";    void skills() {
          cout << "*������������ � ������� ����*" << endl;
      }
};
class undead : public race {
public:
    undead(string name_) : race(name_, "������", feature) {
    }    string feature = "������� �����";
    void skill() {
        cout << "*����� ����������...*" << endl;
    }
};
class giants : public race {
public:    giants(string name_) : race(name_, "�������", feature) {
}
      string feature = "�������";    void skills() {
          cout << "*������������ � ����������� �����*";
      }
};

//

/*class Class{
    virtual string ;
};

class Knight{

};*/

void make_hero(race* u_player, race hero) {
    (*u_player) = hero;
}

int main() {
    string race_arr[11] = { "�������", "���", "����", "������", "����", "���", "�����", "������", "������", "�������", "����������" };
    string choice;
    string name;
    string to_do;
    cout << "������� ���:" << endl;
    cin >> name;
    cout << "�������� ����" << '\n';
    for (int i = 0; i < 11; i++) {
        cout << race_arr[i] << '\n';
    }
    cout << "��� �����: " << '\t';
    cin >> choice;
    //race player;
    //race * u_player = &player;
/*    if (choice==race_arr[0]){humans player(name);}
    if (choice==race_arr[1]){orks player(name);}
    if (choice==race_arr[2]){elves player(name);}
    if (choice==race_arr[3]){khadjits player(name);}
    if (choice==race_arr[4]){dworves player(name);}
    if (choice==race_arr[5]){fairies player(name);}
    if (choice==race_arr[6]){demons player(name);}
    if (choice==race_arr[7]){vampires player(name);}
    if (choice==race_arr[8]){undead player(name);}
    if (choice==race_arr[9]){giants player(name);}*/
    //if (choice==race_arr[10]){argonians player1(name);}
    //if (choice==race_arr[10]){cout<<"yes"<<endl; argonians player1(name);cout<<"yes"<<endl; make_hero(u_player, player1);
    //cout<<"yes"<<endl; }

    //argonians player(name);
    humans player(name);

    cout << "�� " << player.name << ", ��������� " << player.race_name << ", ���� �����������: " << player.feature << endl;
    //cout<<"�� "<<player.name<<", ��������� "<<player.race_name<<", ���� �����������: "<<player.feature<<endl;
    while (true) {
        cout << "����� ������������ �����������, �������� �����: " << endl;
        cin >> to_do;
        if (to_do == "�����") {
            player.skill();
        }
    }
    return 0;
}