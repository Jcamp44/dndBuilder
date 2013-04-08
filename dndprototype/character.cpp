#include "character.h"

character::character()
{
    name = "";
    race = "";
    alignment = "";
    religion = "";

    lvl = 0;
    str = 0;
    intel = 0;
    dex = 0;
    wis = 0;
    con = 0;
    cha = 0;

    wizard = 0;
    barbarian = 0;
    paladin = 0;

    appraise = 0;
    balance = 0;
    bluff = 0;
    climb = 0;
    craft = 0;
    forgery = 0;

    agile = 0;
    alertness = 0;
    athletic = 0;
    cleave = 0;
    diehard = 0;
    dodge = 0;

    jump = false;
    alarm = false;
    shield = false;
    grease = false;
    sleep = false;
    silent = false;
    chillTouch = false;

    abyssal = false;
    common = false;
    orc = false;
    giant = false;

}

QString character::getName(){
    return this->name;
}

QString character::getRace(){
    return this->race;
}

QString character::getAlignment(){
    return this->alignment;
}

QString character::getReligion(){
    return this->religion;
}

int character::getLvl(){
    return this->lvl;
}

int character::getStr(){
    return this->str;
}

int character::getIntel(){
    return this->intel;
}

int character::getDex(){
    return this->dex;
}

int character::getWis(){
    return this->wis;
}

int character::getCon(){
    return this->con;
}

int character::getCha(){
    return this->cha;
}

int character::getWizard(){
    return this->wizard;
}

int character::getBarbarian(){
    return this->barbarian;
}

int character::getPaladin(){
    return this->paladin;
}

int character::getAppraise(){
    return this->appraise;
}

int character::getBalance(){
    return this->balance;
}

int character::getBluff(){
    return this->bluff;
}

int character::getClimb(){
    return this->climb;
}

int character::getCraft(){
    return this->craft;
}

int character::getForgery(){
    return this->forgery;
}

int character::getAgile(){
    return this->agile;
}

int character::getAlertness(){
    return this->alertness;
}

int character::getCleave(){
    return this->cleave;
}

int character::getDiehard(){
    return this->diehard;
}

int character::getDodge(){
    return this->dodge;
}

int character::getAthletic(){
    return this->athletic;
}

bool character::getJump(){
    return this->jump;
}

bool character::getAlarm(){
    return this->alarm;
}

bool character::getShield(){
    return this->shield;
}

bool character::getGrease(){
    return this->grease;
}

bool character::getSleep(){
    return this->sleep;
}

bool character::getSilent(){
    return this->silent;
}

bool character::getChilltouch(){
    return this->chillTouch;
}

bool character::getAbyssal(){
    return this->abyssal;
}

bool character::getCommon(){
    return this->common;
}

bool character::getGiant(){
    return this->giant;
}

bool character::getOrc(){
    return this->orc;
}

void character::setName(QString s){
    this->name=s;
}

void character::setRace(QString s){
    this->race=s;
}

void character::setAlignment(QString s){
    this->alignment=s;
}

void character::setReligion(QString s){
    this->religion=s;
}

void character::setLvl(int i){
    this->lvl=i;
}

void character::setStr(int i){
    this->str=i;
}

void character::setIntel(int i){
    this->intel=i;
}

void character::setDex(int i){
    this->dex=i;
}

void character::setWis(int i){
    this->wis=i;
}

void character::setCon(int i){
    this->con=i;
}

void character::setCha(int i){
    this->cha=i;
}

void character::setWizard(int i){
    this->wizard=i;
}

void character::setBarbarian(int i){
    this->barbarian=i;
}

void character::setPaladin(int i){
    this->paladin=i;
}

void character::setAppraise(int i){
    this->appraise=i;
}

void character::setBalance(int i){
    this->balance=i;
}

void character::setBluff(int i){
    this->bluff=i;
}

void character::setClimb(int i){
    this->climb=i;
}

void character::setCraft(int i){
    this->craft=i;
}

void character::setForgery(int i){
    this->forgery=i;
}

void character::setAgile(int i){
    this->agile=i;
}

void character::setAlertness(int i){
    this->alertness=i;
}

void character::setAthletic(int i){
    this->athletic=i;
}

void character::setCleave(int i){
    this->cleave=i;
}

void character::setDiehard(int i){
    this->diehard=i;
}

void character::setDodge(int i){
    this->dodge=i;
}

void character::setJump(bool i){
    this->jump=i;
}

void character::setAlarm(bool i){
    this->alarm=i;
}

void character::setShield(bool i){
    this->shield=i;
}

void character::setGrease(bool i){
    this->grease=i;
}

void character::setSleep(bool i){
    this->sleep=i;
}

void character::setSilent(bool i){
    this->silent=i;
}

void character::setChilltouch(bool i){
    this->chillTouch=i;
}

void character::setAbyssal(bool b){
    this->abyssal=b;
}

void character::setCommon(bool b){
    this->common=b;
}

void character::setGiant(bool b){
    this->giant=b;
}

void character::setOrc(bool b){
    this->orc=b;
}
