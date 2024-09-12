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
        cout << "��� - " << get_name()<<endl;
        cout << "M���� - " << get_place()<<endl;
    }
};

class Cow : public Animal
{
protected:
    string klichka;
public:
    Cow(string _klichka)
    {
        name = "������";
        place = "�������";
        klichka = _klichka;
    }
    void voice() { cout << "��-���\n"; }
    void printing()
    {
        Animal::printing();
        cout << "������ - "<<klichka << endl;
    }
};

    class Tiger : public Animal
    {
    protected:
        string klichka;
    public:
        Tiger(string _klichka) : Animal(name, place)
        {
            name = "����";
            place = "�����";
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
            name = "���������";
            place = "��� ������. �����, ����, ���������, ����..";
            klichka = _klichka;
        }
        void voice() { cout << "*����� ���������...*" << endl; }
        void printing()
        {
            Animal::printing();
        }
    };
