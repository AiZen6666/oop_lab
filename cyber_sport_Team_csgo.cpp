#include <iostream>
#include <string>
class Cybersport_team { 
public:
    std::string name_team; //�������� �������
    int players; //���������� ������� � �������
    std::string country;// ������ �������
    std::string coach; // ������ �������
    int killing; // ������� �������
private:
    int money; // ������ �������
    std::string owner; // �������� �������
    bool mood; // ������� �������
};

class Player {
public:
    std::string name_of_player{}; //��� ������
    int age; //������� ������
    int poss_of_player; //������� ������ ������
    int salary; //��������
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
    std::string nick;//��� ������ � ������
    int reiting; //������� ������ �� ������
    std::string citizenship;//����������� ������
    int agee; //������� ������
};
class Support : public Player { //����� �������
public:
    float tacktik; //������� ������
    int defender; //����� ���������� ���� � ������
    int reflex; //��������
};
class Sniper : public Player_Type1 { //����� ��������
public:
    float hit; //��������� 
    int accuracy; //��������
    int kill; //��������
    float game_komand;//���� � �������
};
class Attack : public Support { //����������
public:
    float reflexes; //��������
    int posishion; //������� �� �����
    int killing; //��������
    int plent_bomb; //����� �����
};
class Lider : public Sniper { //�������
public:
    int reflexes; //��������
    float komand; //������ ������� ��� �������
    int posishion; //�������
    int raskit; //������ ������ �� �����
};

int main()
{
    return 0;
}