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
    race(string name_) { name = name_; }
    virtual void skill() {};
    string name;
    string race_name();
    race() {}
};

class argonians : public race {
public:
    argonians(string name_) : race(name_) {

    }
    string feature = "�����";
    void skill() {
        cout << "*������� ����*" << endl;
    }
};

class humans : public race {
public:
    humans(string name_) : race(name_, "�������") {

    }
    string feature = "";
    void skill() {
        cout << "���� �����.." << endl;
    }
};

class orks : public race {
public:
    orks(string name_) : race(name_, "���") {

    }
    string feature = "�����";
    void skill() {
        cout << "�����..." << endl;
    }
};

class elves : public race {
public:
    elves(string name_) : race(name_, "����") {

    }
    string feature = "���";
    void skills() {
        cout << "*��������� ��� ����*" << endl;
    }
};

class khadjits : public race {
public:
    khadjits(string name_) : race(name_, "������") {

    }
    string feature = "����";
    void skills() {
        cout << "���..." << endl;
    }
};

class dworves : public race {
public:
    dworves(string name_) : race(name_, "����") {

    }
    string feature = "������";
    void skills() {
        cout << "*����� ������...*" << endl;
    }
};

class fairies : public race {
public:
    fairies(string name_) : race(name_, "���") {

    }
    string feature = "������";
    void skills() {
        cout << "*������� ������*" << endl;
    }
};

class demons : public race {
public:
    demons(string name_) : race(name_, "�����") {

    }
    string feature = "����";

    void skills() {
        cout << "*��������� ����*" << endl;
    }
};

class vampires : public race {
public:
    vampires(string name_) : race(name_, "������") {

    }
    string feature = "������� ����";
    void skills() {
        cout << "*������������ � ������� ����*" << endl;
    }
};

class undead : public race {
public:
    undead(string name_) : race(name_, "������") {

    }
    string feature = "������� �����";
    void skills() {
        cout << "*����� ����������...*" << endl;
    }
};

class giants : public race {
public:
    giants(string name_) : race(name_, "�������") {

    }
    string feature = "�������";
    void skills() {
        cout << "*������������ � ����������� �����*"
    }
};

//

/*class Class{
    virtual string ;
};

class Knight{

};*/

int main() {
    string name;
    string to_do;
    cin >> name;
    argonians player(name);
    cout << "�� " << player.name << ", ���������" << endl;
    cin >> to_do;
    if (to_do == "�����") {
        player.skill();
    }
    return 0;
}