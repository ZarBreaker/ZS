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

	cout << "\nВы заходите в мрачное здание вслед за неизвестным...\n\nПеред вами старый зал с обшарпанными стенами, побитым кафелем и подранным потолком.\nЕдинственное, что освещает это место-мерцающая неонная лампа, \nа также полоса света из дверного проема,ведущего на улицу.\nВоняет также как в подвале....";

	cout << "\n\n Начальник проходит в одну из дверей,вы следуете за ним....";

	cout << "\n\nКомната, а точнее крохотная каморка,куда вас завели,\nоказалась ненамного лучше холла...голые стены,раскачивающаяся лампа на потолке...\nхотя бы пол был деревянный.\n\nУ дальней стены стоял простой стол,\nна котором лежала папка с документами. Над ними висел обрезанный плакат с коммунистической звездой /nи надписью '1986'. Завершала картину уродливая труба большого диаметра,\nврезавшаяся в стену...";

	cout << "\n\nНачальник сел на единственный в комнате стул и начал копаться в папке...";

	if (Plk_Rel>0)
	{
		cout << "\n\n'Чего ты просто так стоишь?'-спросил он.\n'Сейчас найдем тебе стул!'-с этими словами начальник встал \n и вышел из комнаты...";
		if (Per>1)
		{
			cout << "\n\nВы заметили кошель с деньгами....хотите спиздить?";
			int intro1_thief1;

			cout << "\n\n   #ВЫБОР:" << endl;
			cout << "\t>>Введите '1',чтобы спиздить!" << endl;
			cout << "\t>>Введите '2',чтобы стоять отдыхать..." << endl;
		intro1_thief1:
			cout << "\nВыберите действие:";
			cin >> intro1_thief1;
			switch (intro1_thief1)
			{
			case 1:
			{cout << "\nВы спиздили кошель и нашли ";
			int gold1;
			int range1 = 13 + 13 / Luk;
			int min1 = 5;
			gold1 = rand() / 100 % range1 + min1;
			gold += gold1;
			cout << gold1 << " рублей!";
			exp += 50;
			goto intro1_interrogation;
			break; }
			case 2:
				cout << "\nВы решили не трогать кошель...\nхарактер у вас спокойный....стоите себе,отдыхаете...";
				goto intro1_interrogation;
				break;
			default:
				cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь??";
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
		cout << "\n\nНачальник приходит со стулом и кладет его около стола.\n'Посидим вместе хоть!'-подумали вы и сели.";
	cout << "\n\nНачальник пролистывает ваше досье....";

	cout << "\n???:Имя...." << name << ".";
	cout << "\n???:Место рождения....не указано! Откуда ты?";
	cout << "\n\nВведите ваш город:";
	cin >> origin;
	cout << "\n???:Сколько тебе лет?";
intro1_age:
	cout << "\nВведите ваш возраст(от 20 до 50):";
	cin >> age;
	if (age<20)
	{
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto intro1_age;
	}
	else if (age>50)
	{
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto intro1_age;
	}
	cout << "\n\n???:Посмотрим личное досье...";
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
	{cout << "\n\nВы молодой и здоровый! Вам предлагается выбрать бонус \nв одном из следующих аттрибутов:\nсила,ловкость,выносливость или восприятие!";
	int attr + ;
	cout << "\n\n    #ВЫБОР:";
	cout << "\n\t>>Введите '1',чтобы увеличить силу!";
	cout << "\n\t>>Введите '2',чтобы увеличить ловкость!";
	cout << "\n\t>>Введите '3',чтобы увеличить выносливость!";
	cout << "\n\t>>Введите '4',чтобы увеличить восприятие!";
	attr + _choice:
	cout << "\nВыберите желаемый аттрибут:";
	cin >> attr + ;
	switch (attr + )
	{
	case 1:
		cout << "\n\nКогда у вас была физподготовка в армии,\nвы всегда отжимались на пару раз больше,чем это было необходимо...";
		Str++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\nВы всегда без промаха попадали в писсуар...";
		Agl++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\nВрачи в призывной комиссии говорили:'его печень скоро загнется!'\n'Ааа! Хуй тебе!'-говорили вы и продолжали \nпринимать 200 грамм перед обедом....все еще живой!";
		Vit++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\nВы с детства делали особый демо-тайцзицуань,которому вас научил отец...\nПьяный тоже был...через три года вы узнали,\nчто ваш отец никогда и не слышал о таком тайцзицуань,но....\nКажется медитация принесла какую-то пользу! ";
		Per++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto attr + _choice;
		break;
	}}
	break;
	case 2:
	{cout << "\n\nВы в самом расцвете сил!\nВам предлагается выбрать бонус в одном из следующих аттрибутов:\nсила,интеллект,харизма,сила воли!";
	int attr2 + ;
	cout << "\n\n    #ВЫБОР:";
	cout << "\n\t>>Введите '1',чтобы увеличить силу!";
	cout << "\n\t>>Введите '2',чтобы увеличить интеллект!";
	cout << "\n\t>>Введите '3',чтобы увеличить харизму!";
	cout << "\n\t>>Введите '4',чтобы увеличить силу воли!";
	attr2 + _choice:
	cout << "\nВыберите желаемый аттрибут:";
	cin >> attr2 + ;
	switch (attr2 + )
	{
	case 1:
		cout << "\n\nКогда у вас была физподготовка в армии,\nвы всегда отжимались на пару раз больше,чем это было необходимо...";
		Str++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\nВы много изучали литературу...\nв частности, вы знаете одно стихотворение:какой из поэтов хуй знает,правда...\nне помните фамилии. Степан Разин,епта, или Иван Грозный...";
		Int++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\nС вами много чего происходило в жизни...\nпьяный был тоже...вот и накопилось много историй для рассказа!";
		Cha++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\nОтец часто бил вас по дыхалке,считая,что это развивает характер...";
		Wil++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto attr2 + _choice;
		break;
	}}
	break;
	case 3:
	{cout << "\n\nКто-то может назвать вас старым, но....\nкак у нас говорят:'пока шишка стоит-хоть тебе 100 лет,блядь!'\n(А у вас с этим проблем нет,кстати)\nКстати,вам полагается бонус в одном из следующих аттрибутов:\nинтеллект,харизма,сила воли,удача!";
	int attr3 + ;

	cout << "\n\n    #ВЫБОР:";
	cout << "\n\t>>Введите '1',чтобы увеличить интеллект!";
	cout << "\n\t>>Введите '2',чтобы увеличить харизму!";
	cout << "\n\t>>Введите '3',чтобы увеличить силу воли!";
	cout << "\n\t>>Введите '4',чтобы увеличить удачу!";
	attr3 + _choice:
	cout << "\nВыберите желаемый аттрибут:";
	cin >> attr3 + ;
	switch (attr2 + )
	{
	case 1:
		cout << "\n\nВы много изучали литературу...\nв частности, вы знаете одно стихотворение:какой из поэтов хуй знает,правда...\nне помните фамилии. Степан Разин,епта, или Иван Грозный...";
		Int++;
		goto intro1_interrogation_fun;
		break;
	case 2:
		cout << "\n\nС вами много чего происходило в жизни...\nпьяный был тоже...вот и накопилось много историй для рассказа!";
		Cha++;
		goto intro1_interrogation_fun;
		break;
	case 3:
		cout << "\n\nОтец часто бил вас по дыхалке,считая,что это развивает характер...";
		Wil++;
		goto intro1_interrogation_fun;
		break;
	case 4:
		cout << "\n\nОднажды в детстве у вас пуговичка оторвалася...\nа отец не заметил и пизды не дал!";
		Luk++;
		goto intro1_interrogation_fun;
		break;
	default:
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto attr3 + _choice;
		break;
	}}
	break;
	}
intro1_interrogation_fun:
	string Str_catch[7] = {
		"Бьет как мудак.", "Отжимался 20 раз перед обедом", "Мужик здоровый...вон руки здоровые,ноги...", "Кирпичи таскал сначала,когда служил еще нормально", "Здоровый лоб", "20 раз крутил солнышко на турничке", "Буйвол" };
	string Agl_catch[5] = {
		"Как-то раз сломал трубу и затопил всех,мудель...", "Хорошо прячется-в лесу сидел...", "Умеет сьебываться по трубе..",
		"Мастер в сьебывании по трубе", "Тайцзицуанем лет 20 занимался,епте." };
	string Int_catch[5] = {
		"Разьебай.", "Ну,читал одно стихотворение...","Разбирается в устройстве фаз.","Знает наизусть все подробности события,вошедшего в историю, как 'Катастрофа в Перл-Харбор'", "Придумал двигатель на сладком хлебе...во сне." };
	string Vit_catch[6] = {
		"Уже и не отжимается...стал здоровый,блядь,как пельмень!", "Знаменит на всю часть тем,что пива выпьет-и не кашляет уже.","'Свинцовое брюхо'-может пить мочу какую-то из канализации,и похуй вообще.",
		"Владеет навыком отдыха стоя.","Ну и лось!", "Выжил после удара током,где было четыре фазы подведено" };
	string Per_catch[4] = {
		"Бананы в ушах.", "Ни то,ни се", "Когда был черпаком,всегда все замечал.", "Может время почувствовать...так,примерно." };

};
string Cha_catch[6] = {
	"Фуфел", "Мастер придумывать песни","Придумал лепить шахматы из грязи","Хороший парень,веселый такой...", "Такие,как он бабам нравятся...","Когда общаешься с ним...как на концерте,блядь....Задорнов нахуй!" };
string Wil_catch[5] = {
	"Подвергли китайской пытке:орать стал,завизжал,глаза закатил... ",
	"Легко доебать.","Характер спокойный...","Капелька нихуя не действует на него.","Выдержал китайскую пытку!" };
string Luk_catch[6] = {
	"Постоянно получал пизды от начальников","Мать-то ему в письмах писала,что все хорошо будет","Мать-то верила в него","Ему везло получать отпуск на море...Азов чтоле","Однажды серьезно накосячил и порвал воинское знамя в части...черпаки,молодцы,не проспали,заметили и все починили.","Повезло откуда-то узнать легендарную историю про зиму...он хранит этот секрет в тайне."
};
cout << "\n???:Так....записи показателей здоровья.Капитан части пишет:";
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
cout << "\nХм, тут также есть записи от медпункта части:";
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
	cout << "\n...пометка об особых умениях:";
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
	cout << "\n...записи о тактических офицерских качествах...";
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
	cout << "\n......пригодность к дозорной службе..";
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
	cout << "\n...заметки психолога...";
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
	cout << "\n...оценки сослуживцев...";
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
	cout << "\n...доп.сведения...";
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
	cout << "\n\n???:Ладно,кажется, все документы в порядке.\nИди теперь в медпункт,тебя солдат проводит.";
	goto intro1_medical;
intro1_medical:
	if (intro1_thief1 == 1)
	{
		cout << "\nВы выходите из кабинета и слышите крики оттуда:\n'ГОВНО!!!ПОДОНКИ!!!ОПЯТЬ СПИЗДИЛИ!!!"
			cout << "\n...Ну возьми 1 рубль,ну 2 возьми...\nНО " << gold1 << " РУБЛЕЙ СПИЗДИЛИ,СУКИ," << gold1 << "!!!";
	}
	cout << "\n\n К вам подходит солдат с автоматом и просит пройти за ним.";
	cout << "\n   #ДИАЛОГ:";
	cout << "\n\t>>Введите '1', чтобы ответить 'Так точно!'";
	cout << "\n\t>>Введите '2', чтобы соврать ему!";
	cout << "\n\t>>Введите '3',чтобы попытаться вырубить его!";
	int intro1_guard;
intro1_guard:
	cout << "\n\nВыберите действие:";
	cin >> intro1_guard;
	switch (intro1_guard) {
	case 1: {
		cout << "\n\nВы послушно следуете за солдатом,пересекая главный холл здания и\n подходите к лестнице,ведущей на второй этаж....";
		goto intro2_medical;
		break;
	}
	case 2: {
		cout<"\n\n" << name << ": Мне сказали,что все документы есть и я могу дойти сам!";
		if (Cha>3)
		{
			cout << "\nСтражник:хорошо,иди. А я в столовку! \nУ нас сейчас обед!Котлетки..." << endl;
			cout << name << ":С макарошками?";
			cout << "\nСтражник:С пюрешкой...с пюрешкой!!";
			cout << "\n Стражник уходит, а вы стоите в нерешительности-что же делать дальше?";
			goto intro2_struggle;
		}
		else
		{
			cout << "\nСтражник:Не положено! Идем!";
			goto intro1_guard_struggle;
		}
		break;
	}
	case 3: {
		goto intro1_guard_attack;
		break;
	}
	default: {
		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto intro1_guard;

	}
	}
intro1_guard_struggle:
	cout << "\nВы можете последовать за солдатом,попытаться вырубить его или сбежать!";
	cout << "\n\n   #ВЫБОР:";
	cout << "\nВведите '1',чтобы проследовать за солдатом!";
	cout << "\nВведите '2',чтобы атаковать!";
	cout << "\nВведите '3',чтобы сбежать!";
	int intro1_guard_struggle;
intro1_guard_struggle_choice:
	cout << "\nСделайте выбор:";
	cin >> intro1_guard_struggle;
	switch (intro1_guard_struggle)
	{
	case 1: {
		cout << "\n\nВы пожимаете плечами и следуете за ним...";
		goto intro2_medical;
		break;
	}
	case 2: {
		cout << "\n\nВы бросаетесь в атаку!";
		goto intro1_guard_attack;
		break;
	}
	case 3: {
		cout << "\n\nВы бросились прочь!";
		goto intro1_flee;
		break;
	}
	default: {

		cout << "\nДЕРЬМО! НИЧЕГО НЕ ЗНАЕШЬ,\nНИЧЕГО НЕ МОЖЕШЬ...че ты вообще в армии делаешь?";
		goto intro1_guard_struggle_choice;
		break; }
	}
intro1_guard_attack:

	//бой доделать позже
intro1_flee:
	if (Agl<2)
	{
		cout << "...слишком медленно...солдат успел ударить вас прикладом!";
		hp -= 5 - Vit / 2;
		int dmg;
		dmg = 5 - Vit / 2;
		cout << "/nВы получаете " << dmg << " единиц урона!";
		goto intro1_guard_battle;
	}
	else
		goto intro2_flee;
intro1_guard_battle:


	return 0;
}

