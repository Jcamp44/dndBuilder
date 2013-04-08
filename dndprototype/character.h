#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class character
{
public:
    character();

    QString getName();
    QString getRace();
    QString getAlignment();
    QString getReligion();

    int getLvl();
    int getStr();
    int getIntel();
    int getDex();
    int getWis();
    int getCon();
    int getCha();

    int getWizard();
    int getBarbarian();
    int getPaladin();

    int getAppraise();
    int getBalance();
    int getBluff();
    int getClimb();
    int getCraft();
    int getForgery();

    int getAgile();
    int getAlertness();
    int getAthletic();
    int getCleave();
    int getDiehard();
    int getDodge();

    bool getJump();
    bool getAlarm();
    bool getShield();
    bool getGrease();
    bool getSleep();
    bool getSilent();
    bool getChilltouch();

    bool getAbyssal();
    bool getCommon();
    bool getGiant();
    bool getOrc();

    void setName(QString s);
    void setRace(QString s);
    void setAlignment(QString s);
    void setReligion(QString s);

    void setLvl(int i);
    void setStr(int i);
    void setIntel(int i);
    void setDex(int i);
    void setWis(int i);
    void setCon(int i);
    void setCha(int i);

    void setWizard(int i);
    void setBarbarian(int i);
    void setPaladin(int i);

    void setAppraise(int i);
    void setBalance(int i);
    void setBluff(int i);
    void setClimb(int i);
    void setCraft(int i);
    void setForgery(int i);

    void setAgile(int i);
    void setAlertness(int i);
    void setAthletic(int i);
    void setCleave(int i);
    void setDiehard(int i);
    void setDodge(int i);

    void setJump(bool i);
    void setAlarm(bool i);
    void setShield(bool i);
    void setGrease(bool i);
    void setSleep(bool i);
    void setSilent(bool i);
    void setChilltouch(bool i);

    void setAbyssal(bool b);
    void setCommon(bool b);
    void setGiant(bool b);
    void setOrc(bool b);


private:
    QString name;
    QString race;
    QString alignment;
    QString religion;

    int lvl;
    int str;
    int intel;
    int dex;
    int wis;
    int con;
    int cha;

    int wizard;
    int barbarian;
    int paladin;

    int appraise;
    int balance;
    int bluff;
    int climb;
    int craft;
    int forgery;

    int agile;
    int alertness;
    int athletic;
    int cleave;
    int diehard;
    int dodge;

    bool jump;
    bool alarm;
    bool shield;
    bool grease;
    bool sleep;
    bool silent;
    bool chillTouch;

    bool abyssal;
    bool common;
    bool giant;
    bool orc;
};

#endif // CHARACTER_H
