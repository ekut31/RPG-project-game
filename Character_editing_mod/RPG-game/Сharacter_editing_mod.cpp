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
        if (class__=="Человек"){class_=human};

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
    string feature = "Хвост";
    void skill() {
        cout << "*плюётся ядом*" << endl;
    }
};

class humans : public race {
public:
    humans(string name_) : race(name_, "человек") {

    }
    string feature = "";
    void skill() {
        cout << "Хочу питсы.." << endl;
    }
};

class orks : public race {
public:
    orks(string name_) : race(name_, "орк") {

    }
    string feature = "Клыки";
    void skill() {
        cout << "Арргх..." << endl;
    }
};

class elves : public race {
public:
    elves(string name_) : race(name_, "эльф") {

    }
    string feature = "Уши";
    void skills() {
        cout << "*Призывает дух леса*" << endl;
    }
};

class khadjits : public race {
public:
    khadjits(string name_) : race(name_, "каджит") {

    }
    string feature = "Лапы";
    void skills() {
        cout << "Мяу..." << endl;
    }
};

class dworves : public race {
public:
    dworves(string name_) : race(name_, "гном") {

    }
    string feature = "Низкий";
    void skills() {
        cout << "*Чинит оружие...*" << endl;
    }
};

class fairies : public race {
public:
    fairies(string name_) : race(name_, "фея") {

    }
    string feature = "Крылья";
    void skills() {
        cout << "*Бросает пыльцу*" << endl;
    }
};

class demons : public race {
public:
    demons(string name_) : race(name_, "демон") {

    }
    string feature = "Рога";

    void skills() {
        cout << "*Призывает тени*" << endl;
    }
};

class vampires : public race {
public:
    vampires(string name_) : race(name_, "вампир") {

    }
    string feature = "Бледная кожа";
    void skills() {
        cout << "*Превращается в летучую мышь*" << endl;
    }
};

class undead : public race {
public:
    undead(string name_) : race(name_, "нежить") {

    }
    string feature = "Красные глаза";
    void skills() {
        cout << "*Лежит неподвижно...*" << endl;
    }
};

class giants : public race {
public:
    giants(string name_) : race(name_, "великан") {

    }
    string feature = "Большой";
    void skills() {
        cout << "*Неуязвимость к физическому урону*"
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
    cout << "Вы " << player.name << ", урождённый" << endl;
    cin >> to_do;
    if (to_do == "Скилл") {
        player.skill();
    }
    return 0;
}