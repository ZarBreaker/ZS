#include "stdafx.h"
#include<iostream>
#include<windows.h>
#include <conio.h>
#include<string>

using namespace std;
int main() {
	int Plk_Rel = 0;
	
	int Per = 4;
	int Str = 3;
	int Int = 2;
	int Agl = 4;
	int Vit = 1;
	int Luk = 2;
	int Cha = 3;
	int Wil = 5;
	
	int gold = 0;
	char name;
	char origin;
	int age;

	cout << "\n�� �������� � ������� ������ ����� �� �����������...\n\n����� ���� ������ ��� � ������������ �������, ������� ������� � ��������� ��������.\n������������, ��� �������� ��� �����-��������� ������� �����, \n� ����� ������ ����� �� �������� ������,�������� �� �����.\n������ ����� ��� � �������....";

	cout << "\n\n ��������� �������� � ���� �� ������,�� �������� �� ���....";

	cout << "\n\n�������, � ������ ��������� �������,���� ��� ������,\n��������� ��������� ����� �����...����� �����,��������������� ����� �� �������...\n���� �� ��� ��� ����������.\n\n� ������� ����� ����� ������� ����,\n�� ������� ������ ����� � �����������. ��� ���� ����� ���������� ������ � ���������������� ������� /n� �������� '1986'. ��������� ������� ��������� ����� �������� ��������,\n����������� � �����...";

	cout << "\n\n��������� ��� �� ������������ � ������� ���� � ����� �������� � �����...";

	if (Plk_Rel>0)
	{
		cout << "\n\n'���� �� ������ ��� ������?'-������� ��.\n'������ ������ ���� ����!'-� ����� ������� ��������� ����� \n � ����� �� �������...";
		if (Per>1)
		{
			cout << "\n\n�� �������� ������ � ��������....������ ��������?";
			int intro1_thief1;

			cout << "\n\n   #�����:" << endl;
			cout << "\t>>������� '1',����� ��������!" << endl;
			cout << "\t>>������� '2',����� ������ ��������..." << endl;
		intro1_thief1:
			cout << "\n�������� ��������:";
			cin >> intro1_thief1;
			switch (intro1_thief1)
			{
			case 1:
			{cout << "\n�� �������� ������ � ����� ";
			int gold1;
			int range1 = 13 + 13 / Luk;
			int min1 = 5;
			gold1 = rand() / 100 % range1 + min1;
			gold += gold1;
			cout << gold1 << " ������!";
			exp += 50;
			goto intro1_interrogation;
			break; }
			case 2:
				cout << "\n�� ������ �� ������� ������...\n�������� � ��� ���������....������ ����,���������...";
				goto intro1_interrogation;
				break;
			default:
				cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������??";
				goto intro1_thief1;
				break;
			}
		}
		else
			goto intro1_interrogation;

	}
	else goto intro1_interrogation;
	goto intro1_interrogation;
intro1_interrogation:
	if (Plk_Rel>0)
		cout << "\n\n��������� �������� �� ������ � ������ ��� ����� �����.\n'������� ������ ����!'-�������� �� � ����.";
	cout << "\n\n��������� ������������ ���� �����....";

	cout << "\n???:���...." << name << ".";
	cout << "\n???:����� ��������....�� �������! ������ ��?";
	cout << "\n\n������� ��� �����:";
	cin >> origin;
	cout << "\n???:������� ���� ���?";
intro1_age:
	cout << "\n������� ��� �������(�� 20 �� 50):";
	cin >> age;
	if (age<20)
	{
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto intro1_age;
	}
	else if (age>50)
	{
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto intro1_age;
	}
	cout << "\n\n???:��������� ������ �����...";
	int age_bonus;
	if (19<age&&age<31)
		age_bonus = 1;
	if (30<age&&age<41)
		age_bonus = 2;
	else
		age_bonus = 3;
	switch (age_bonus)
	{
	case 1:
	{cout << "\n\n�� ������� � ��������! ��� ������������ ������� ����� \n� ����� �� ��������� ����������:\n����,��������,������������ ��� ����������!";
	int attr + ;
	cout << "\n\n    #�����:";
	cout << "\n\t>>������� '1',����� ��������� ����!";
	cout << "\n\t>>������� '2',����� ��������� ��������!";
	cout << "\n\t>>������� '3',����� ��������� ������������!";
	cout << "\n\t>>������� '4',����� ��������� ����������!";
	attr + _choice:
	cout << "\n�������� �������� ��������:";
	cin >> attr + ;
	switch (attr + )
	{
	case 1:
		cout << "\n\n����� � ��� ���� ������������� � �����,\n�� ������ ���������� �� ���� ��� ������,��� ��� ���� ����������...";
		Str++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\n�� ������ ��� ������� �������� � �������...";
		Agl++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\n����� � ��������� �������� ��������:'��� ������ ����� ��������!'\n'���! ��� ����!'-�������� �� � ���������� \n��������� 200 ����� ����� ������....��� ��� �����!";
		Vit++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\n�� � ������� ������ ������ ����-�����������,�������� ��� ������ ����...\n������ ���� ���...����� ��� ���� �� ������,\n��� ��� ���� ������� � �� ������ � ����� �����������,��....\n������� ��������� �������� �����-�� ������! ";
		Per++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto attr + _choice;
		break;
	}}
	break;
	case 2:
	{cout << "\n\n�� � ����� �������� ���!\n��� ������������ ������� ����� � ����� �� ��������� ����������:\n����,���������,�������,���� ����!";
	int attr2 + ;
	cout << "\n\n    #�����:";
	cout << "\n\t>>������� '1',����� ��������� ����!";
	cout << "\n\t>>������� '2',����� ��������� ���������!";
	cout << "\n\t>>������� '3',����� ��������� �������!";
	cout << "\n\t>>������� '4',����� ��������� ���� ����!";
	attr2 + _choice:
	cout << "\n�������� �������� ��������:";
	cin >> attr2 + ;
	switch (attr2 + )
	{
	case 1:
		cout << "\n\n����� � ��� ���� ������������� � �����,\n�� ������ ���������� �� ���� ��� ������,��� ��� ���� ����������...";
		Str++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\n�� ����� ������� ����������...\n� ���������, �� ������ ���� �������������:����� �� ������ ��� �����,������...\n�� ������� �������. ������ �����,����, ��� ���� �������...";
		Int++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\n� ���� ����� ���� ����������� � �����...\n������ ��� ����...��� � ���������� ����� ������� ��� ��������!";
		Cha++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\n���� ����� ��� ��� �� �������,������,��� ��� ��������� ��������...";
		Wil++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto attr2 + _choice;
		break;
	}}
	break;
	case 3:
	{cout << "\n\n���-�� ����� ������� ��� ������, ��....\n��� � ��� �������:'���� ����� �����-���� ���� 100 ���,�����!'\n(� � ��� � ���� ������� ���,������)\n������,��� ���������� ����� � ����� �� ��������� ����������:\n���������,�������,���� ����,�����!";
	int attr3 + ;

	cout << "\n\n    #�����:";
	cout << "\n\t>>������� '1',����� ��������� ���������!";
	cout << "\n\t>>������� '2',����� ��������� �������!";
	cout << "\n\t>>������� '3',����� ��������� ���� ����!";
	cout << "\n\t>>������� '4',����� ��������� �����!";
	attr3 + _choice:
	cout << "\n�������� �������� ��������:";
	cin >> attr3 + ;
	switch (attr2 + )
	{
	case 1:
		cout << "\n\n�� ����� ������� ����������...\n� ���������, �� ������ ���� �������������:����� �� ������ ��� �����,������...\n�� ������� �������. ������ �����,����, ��� ���� �������...";
		Int++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\n� ���� ����� ���� ����������� � �����...\n������ ��� ����...��� � ���������� ����� ������� ��� ��������!";
		Cha++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\n���� ����� ��� ��� �� �������,������,��� ��� ��������� ��������...";
		Wil++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\n������� � ������� � ��� ��������� ����������...\n� ���� �� ������� � ����� �� ���!";
		Luk++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto attr3 + _choice;
		break;
	}}
	break;
	}
intro1_interrogation_fun:
	string Str_catch[7] = {
		"���� ��� �����.", "��������� 20 ��� ����� ������", "����� ��������...��� ���� ��������,����...", "������� ������ �������,����� ������ ��� ���������", "�������� ���", "20 ��� ������ �������� �� ��������", "������" };
	string Agl_catch[5] = {
		"���-�� ��� ������ ����� � ������� ����,������...", "������ ��������-� ���� �����...", "����� ����������� �� �����..",
		"������ � ���������� �� �����", "������������ ��� 20 ���������,����." };
	string Int_catch[5] = {
		"��������.", "��,����� ���� �������������...","����������� � ���������� ���.","����� �������� ��� ����������� �������,��������� � �������, ��� '���������� � ����-������'", "�������� ��������� �� ������� �����...�� ���." };
	string Vit_catch[6] = {
		"��� � �� ����������...���� ��������,�����,��� ��������!", "�������� �� ��� ����� ���,��� ���� ������-� �� ������� ���.","'��������� �����'-����� ���� ���� �����-�� �� �����������,� ����� ������.",
		"������� ������� ������ ����.","�� � ����!", "����� ����� ����� �����,��� ���� ������ ���� ���������" };
	string Per_catch[4] = {
		"������ � ����.", "�� ��,�� ��", "����� ��� ��������,������ ��� �������.", "����� ����� �������������...���,��������." };

};
string Cha_catch[6] = {
	"�����", "������ ����������� �����","�������� ������ ������� �� �����","������� ������,������� �����...", "�����,��� �� ����� ��������...","����� ��������� � ���...��� �� ��������,�����....�������� �����!" };
string Wil_catch[5] = {
	"��������� ��������� �����:����� ����,��������,����� �������... ",
	"����� �������.","�������� ���������...","�������� ����� �� ��������� �� ����.","�������� ��������� �����!" };
string Luk_catch[6] = {
	"��������� ������� ����� �� �����������","����-�� ��� � ������� ������,��� ��� ������ �����","����-�� ������ � ����","��� ����� �������� ������ �� ����...���� �����","������� �������� ��������� � ������ �������� ����� � �����...�������,�������,�� ��������,�������� � ��� ��������.","������� ������-�� ������ ����������� ������� ��� ����...�� ������ ���� ������ � �����."
};
cout << "\n???:���....������ ����������� ��������.������� ����� �����:";
switch (Str) {
case 0:
	cout << Str_catch[0];
	break;
case 1:
	cout << Str_catch[0];
	break;
case 2:
	cout << Str_catch[1];
	break;
case 3:
	cout << Str_catch[1];
	break;
case 4:
	cout << Str_catch[2];
	break;
case 5:
	cout << Str_catch[3];
	break;
case 6:
	cout << Str_catch[4];
	break;
case 7:
	cout << Str_catch[5];
	break;
case 8:
	cout << Str_catch[6];
	break;
}
cout << "\n��, ��� ����� ���� ������ �� ��������� �����:";
switch (Vit) {
case 0:
	cout << Vit_catch[0];
	break;
case 1:
	cout << Vit_catch[0];
	break;
case 2:
	cout << Vit_catch[0];
	break;
case 3:
	cout << Vit_catch[1];
	break;
case 4:
	cout << Vit_catch[1];
	break;
case 5:
	cout << Vit_catch[2];
	break;
case 6:
	cout << Vit_catch[3];
	break;
case 7:
	cout << Vit_catch[4];
	break;
case 8:
	cout << Vit_catch[5];
	break;
	cout << "\n...������� �� ������ �������:";
	switch (Agl)
	{
	case 0:
		cout << Agl_catch[0];
		break;
	case 1:
		cout << Agl_catch[0];
		break;
	case 2:
		cout << Agl_catch[0];
		break;
	case 3:
		cout << Agl_catch[1];
		break;
	case 4:
		cout << Agl_catch[1];
		break;
	case 5:
		cout << Agl_catch[2];
		break;
	case 6:
		cout << Agl_catch[2];
		break;
	case 7:
		cout << Agl_catch[3];
		break;
	case 8:
		cout << Agl_catch[4];
		break;
	}
	cout << "\n...������ � ����������� ���������� ���������...";
	switch (Int)
	{
	case 0:
		cout << Int_catch[0];
		break;
	case 1:
		cout << Int_catch[0];
		break;
	case 2:
		cout << Int_catch[1];
		break;
	case 3:
		cout << Int_catch[1];
		break;
	case 4:
		cout << Int_catch[2];
		break;
	case 5:
		cout << Int_catch[2];
		break;
	case 6:
		cout << Int_catch[3];
		break;
	case 7:
		cout << Int_catch[4];
		break;
	}
	cout << "\n......����������� � �������� ������..";
	switch (Per)
	{
	case 0:
		cout << Per_catch[0];
		break;
	case 1:
		cout << Per_catch[0];
		break;
	case 2:
		cout << Per_catch[1];
		break;
	case 3:
		cout << Per_catch[1];
		break;
	case 4:
		cout << Per_catch[2];
		break;
	case 5:
		cout << Per_catch[2];
		break;
	case 6:
		cout << Per_catch[3];
		break;
	}
	cout << "\n...������� ���������...";
	switch (Wil)
	{
	case 0:
		cout << Wil_catch[0];
		break;
	case 1:
		cout << Wil_catch[0];
		break;
	case 2:
		cout << Wil_catch[1];
		break;
	case 3:
		cout << Wil_catch[2];
		break;
	case 4:
		cout << Wil_catch[2];
		break;
	case 5:
		cout << Wil_catch[3];
		break;
	case 6:
		cout << Wil_catch[4];
		break;
	}
	cout << "\n...������ �����������...";
	switch (Cha)
	{
	case 0:
		cout << Cha_catch[0];
		break;
	case 1:
		cout << Cha_catch[0];
		break;
	case 2:
		cout << Cha_catch[1];
		break;
	case 3:
		cout << Cha_catch[2];
		break;
	case 4:
		cout << Cha_catch[3];
		break;
	case 5:
		cout << Cha_catch[4];
		break;
	case 6:
		cout << Cha_catch[5];
		break;
	}
	cout << "\n...���.��������...";
	switch (Luk)
	{
	case 0:
		cout << Luk_catch[0];
		break;
	case 1:
		cout << Luk_catch[1];
		break;
	case 2:
		cout << Luk_catch[1];
		break;
	case 3:
		cout << Luk_catch[2];
		break;
	case 4:
		cout << Luk_catch[3];
		break;
	case 5:
		cout << Luk_catch[4];
		break;
	case 6:
		cout << Luk_catch[5];
		break;
	}
	hp = 30 + lvl*Vit + (Str*lvl) / 4;
	mp = 0 + lvl*Int + (lvl*Wil) / 3;
	sp = 10 + Vit*lvl;
	lp = 0 + Wil;
	cout << "\n\n???:�����,�������, ��� ��������� � �������.\n��� ������ � ��������,���� ������ ��������.";
	goto intro1_medical;
intro1_medical:
	if (intro1_thief1 == 1)
	{
		cout << "\n�� �������� �� �������� � ������� ����� ������:\n'�����!!!�������!!!����� ��������!!!"
			cout << "\n...�� ������ 1 �����,�� 2 ������...\n�� " << gold1 << " ������ ��������,����," << gold1 << "!!!";
	}
	cout << "\n\n � ��� �������� ������ � ��������� � ������ ������ �� ���.";
	cout << "\n   #������:";
	cout << "\n\t>>������� '1', ����� �������� '��� �����!'";
	cout << "\n\t>>������� '2', ����� ������� ���!";
	cout << "\n\t>>������� '3',����� ���������� �������� ���!";
	int intro1_guard;
intro1_guard:
	cout << "\n\n�������� ��������:";
	cin >> intro1_guard;
	switch (intro1_guard) {
	case 1: {
		cout << "\n\n�� �������� �������� �� ��������,��������� ������� ���� ������ �\n ��������� � ��������,������� �� ������ ����....";
		goto intro2_medical;
		break;
	}
	case 2: {
		cout<"\n\n" << name << ": ��� �������,��� ��� ��������� ���� � � ���� ����� ���!";
		if (Cha>3)
		{
			cout << "\n��������:������,���. � � � ��������! \n� ��� ������ ����!��������..." << endl;
			cout << name << ":� �����������?";
			cout << "\n��������:� ��������...� ��������!!";
			cout << "\n �������� ������, � �� ������ � ���������������-��� �� ������ ������?";
			goto intro2_struggle;
		}
		else
		{
			cout << "\n��������:�� ��������! ����!";
			goto intro1_guard_struggle;
		}
		break;
	}
	case 3: {
		goto intro1_guard_attack;
		break;
	}
	default: {
		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto intro1_guard;

	}
	}
intro1_guard_struggle:
	cout << "\n�� ������ ����������� �� ��������,���������� �������� ��� ��� �������!";
	cout << "\n\n   #�����:";
	cout << "\n������� '1',����� ������������ �� ��������!";
	cout << "\n������� '2',����� ���������!";
	cout << "\n������� '3',����� �������!";
	int intro1_guard_struggle;
intro1_guard_struggle_choice:
	cout << "\n�������� �����:";
	cin >> intro1_guard_struggle;
	switch (intro1_guard_struggle)
	{
	case 1: {
		cout << "\n\n�� ��������� ������� � �������� �� ���...";
		goto intro2_medical;
		break;
	}
	case 2: {
		cout << "\n\n�� ���������� � �����!";
		goto intro1_guard_attack;
		break;
	}
	case 3: {
		cout << "\n\n�� ��������� �����!";
		goto intro1_flee;
		break;
	}
	default: {

		cout << "\n������! ������ �� ������,\n������ �� ������...�� �� ������ � ����� �������?";
		goto intro1_guard_struggle_choice;
		break; }
	}
intro1_guard_attack:

	//��� �������� �����
intro1_flee:
	if (Agl<2)
	{
		cout << "...������� ��������...������ ����� ������� ��� ���������!";
		hp -= 5 - Vit / 2;
		int dmg;
		dmg = 5 - Vit / 2;
		cout << "/n�� ��������� " << dmg << " ������ �����!";
		goto intro1_guard_battle;
	}
	else
		goto intro2_flee;
intro1_guard_battle:


	return 0;
}

