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
    race(string name_, string race_name_, string feature_) { name = name_; race_name = race_name_; feature = feature_; }
    virtual void skill() {};
    string name;
    string feature;
    string race_name;
    race() {}
};

class argonians : public race {
public:
    argonians(string name_) : race(name_, "аргонианин", feature) {

    }
    string feature = "Хвост";
    void skill() {
        cout << "*плюётся ядом*" << endl;
    }
};

class humans : public race {
public:
    humans(string name_) : race(name_, "человек", feature) {
    }
    string feature = "никакой";    void skill() {
        cout << "Хочу питсы.." << endl;
    }
};
class orks : public race {
public:
    orks(string name_) : race(name_, "орк", feature) {
    }    string feature = "Клыки";
    void skill() {
        cout << "Арргх..." << endl;
    }
};
class elves : public race {
public:    elves(string name_) : race(name_, "эльф", feature) {
}
      string feature = "Уши";    void skills() {
          cout << "*Призывает дух леса*" << endl;
      }
};
class khadjits : public race {
public:
    khadjits(string name_) : race(name_, "каджит", feature) {
    }    string feature = "Лапы";
    void skill() {
        cout << "Мяу..." << endl;
    }
};
class dworves : public race {
public:    dworves(string name_) : race(name_, "гном", feature) {
}
      string feature = "Низкий";    void skills() {
          cout << "*Чинит оружие...*" << endl;
      }
};
class fairies : public race {
public:
    fairies(string name_) : race(name_, "фея", feature) {
    }    string feature = "Крылья";
    void skill() {
        cout << "*Бросает пыльцу*" << endl;
    }
};
class demons : public race {
public:    demons(string name_) : race(name_, "демон", feature) {
}
      string feature = "Рога";
      void skill() {
          cout << "*Призывает тени*" << endl;
      }
};
class vampires : public race {
public:    vampires(string name_) : race(name_, "вампир", feature) {
}
      string feature = "Бледная кожа";    void skills() {
          cout << "*Превращается в летучую мышь*" << endl;
      }
};
class undead : public race {
public:
    undead(string name_) : race(name_, "нежить", feature) {
    }    string feature = "Красные глаза";
    void skill() {
        cout << "*Лежит неподвижно...*" << endl;
    }
};
class giants : public race {
public:    giants(string name_) : race(name_, "великан", feature) {
}
      string feature = "Большой";    void skills() {
          cout << "*Неуязвимость к физическому урону*";
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
    string race_arr[11] = { "Человек", "Орк", "Эльф", "Каджит", "Гном", "Фея", "Демон", "Вампир", "Нежить", "Великан", "Аргонианин" };
    string choice;
    string name;
    string to_do;
    cout << "Введите имя:" << endl;
    cin >> name;
    cout << "Выберите расу" << '\n';
    for (int i = 0; i < 11; i++) {
        cout << race_arr[i] << '\n';
    }
    cout << "Ваш выбор: " << '\t';
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

    cout << "Вы " << player.name << ", урождённый " << player.race_name << ", ваша особенность: " << player.feature << endl;
    //cout<<"Вы "<<player.name<<", урождённый "<<player.race_name<<", ваша особенность: "<<player.feature<<endl;
    while (true) {
        cout << "Чтобы использовать способность, напишите Скилл: " << endl;
        cin >> to_do;
        if (to_do == "Скилл") {
            player.skill();
        }
    }
    return 0;
}