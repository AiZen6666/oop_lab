#include <iostream>
#include <string>
class Cybersport_team { 
public:
    std::string name_team; //название команды
    int players; //количество игроков в команде
    std::string country;// страна команды
    std::string coach; // тренер команды
    int killing; // убийсва команды
private:
    int money; // бюджет команды
    std::string owner; // владелец команды
    bool mood; // настрой игроков
};

class Player {
public:
    std::string name_of_player{}; //имя игрока
    int age; //возраст игрока
    int poss_of_player; //позиция игрока игрока
    int salary; //зарплата
    friend Player_Type1;
    void GdeIgraet(Cybersport_team& obj);

};
bool operator < (Player c1, Player c2)
{
    return c1.salary < c2.salary;
}

void Player::GdeIgraet(Cybersport_team& obj) {
    obj.name_team;
}
class Player_Type1 {
public:
    std::string nick;//ник игрока в фейсит
    int reiting; //рейтинг игрока на фейсит
    std::string citizenship;//гражданство игрока
    int agee; //возраст игрока
};
class Support : public Player { //игрок саппорт
public:
    float tacktik; //тактика игрока
    int defender; //общий показатель игры в защите
    int reflex; //рефлексы
};
class Sniper : public Player_Type1 { //игрок защитник
public:
    float hit; //попадание 
    int accuracy; //точность
    int kill; //убийства
    float game_komand;//игра в команде
};
class Attack : public Support { //нападающий
public:
    float reflexes; //рефлексы
    int posishion; //позиция на карте
    int killing; //убийства
    int plent_bomb; //плент бомбы
};
class Lider : public Sniper { //вратарь
public:
    int reflexes; //рефлексы
    float komand; //важные решения для команды
    int posishion; //позиция
    int raskit; //раскит игрока по карте
};

int main()
{
    return 0;
}