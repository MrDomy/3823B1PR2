#pragma once
#include <iostream>

using namespace std;
class Animal
{
protected:
    string name;
    string place;
public:
    Animal(string _name = "", string _place = "") {}
    string get_name() { return name; }
    string get_place() { return place; }
    virtual void voice() {}
    virtual void printing() {
        cout << "имя - " << get_name()<<endl;
        cout << "Mесто - " << get_place()<<endl;
    }
};

class Cow : public Animal
{
protected:
    string klichka;
public:
    Cow(string _klichka)
    {
        name = "корова";
        place = "деревня";
        klichka = _klichka;
    }
    void voice() { cout << "му-муу\n"; }
    void printing()
    {
        Animal::printing();
        cout << "кличка - "<<klichka << endl;
    }
};

    class Tiger : public Animal
    {
    protected:
        string klichka;
    public:
        Tiger(string _klichka) : Animal(name, place)
        {
            name = "Тигр";
            place = "Тайга";
            klichka = _klichka;
        }
            void voice() { cout << "PPpPpppPppppPppp" << endl; }
        };

    class Tihohodka : public Animal
    {
    protected:
        string klichka;
    public:
        Tihohodka(string _klichka)
        {
            name = "тихоходка";
            place = "где угодно. Огонь, вода, чернобыль, марс..";
            klichka = _klichka;
        }
        void voice() { cout << "*звуки тихоходки...*" << endl; }
        void printing()
        {
            Animal::printing();
        }
    };
