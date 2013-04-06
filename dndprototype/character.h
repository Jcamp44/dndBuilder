#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class character
{
public:
    character();

private:
    QString name;
    QString race;
    QString charClass;
    QString alignment;
    QString religion;
    int lvl;
    int str;
    int intel;
    int dex;
    int wis;
    int con;
    int cha;

};

#endif // CHARACTER_H
