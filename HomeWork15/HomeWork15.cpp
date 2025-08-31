// HomeWork15.cpp: определяет точку входа для приложения.
//

#include "HomeWork15.h"

int main()
{
	HeroFactory create;

	const auto heroB = create.Create(HeroType::basicHero);
	const auto heroG = create.Create(HeroType::Golum);
	const auto heroF = create.Create(HeroType::Fairy);
	const auto heroS = create.Create(HeroType::StoneMan);
	const auto heroSF = create.Create(HeroType::StoneFireMan);
	const auto heroH = create.Create(HeroType::Hors);

    for (const auto pHero : {heroB, heroG, heroF, heroS, heroSF, heroH})
    {
        pHero->getInfo();
        std::cout << '\n';
    }
    

	return 0;
}

void Hero::getInfo()
{
    std::cout << "Type: hero" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;

}
void Golum::getInfo()
{
    std::cout << "Type: goblin" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;
    std::cout << "GoblinPower: " << goblinPower << std::endl;
}
void Fairy::getInfo()
{
    std::cout << "Type: fairy" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;
    std::cout << "FairyPower: " << fairyPower << std::endl;
}
void StoneMan::getInfo()
{
    std::cout << "Type: stone man" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;
    std::cout << "Stone Man Power: " << stoneManPower << std::endl;
}
void StoneFireMan::getInfo()
{
    std::cout << "Type: stone fire man" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;
    std::cout << "Stone Fire Man Power: " << stoneFireManPower << std::endl;
}
void Hors::getInfo()
{
    std::cout << "Type: hors" << "\nName: " << name << " \nXp: " << xp << " \nSpeed: " << sp << " \nDamage: " << dam << std::endl;
    std::cout << "Hors Speed: " << horsSpeed << std::endl;
}

HeroFactory::HeroFactory()
{
}

Hero* HeroFactory::Create(HeroType type)
{
    std::cout << "Please,enter name a Pers:\n";
	std::string name;
	std::cin >> name;
    switch (type) 
    {
    case HeroType::basicHero:
        return new Hero(name);
    case HeroType::Fairy:
        return new Fairy(name);
    case HeroType::Golum:
        return new Golum(name);
    case HeroType::StoneMan:
        return new StoneMan(name);
    case HeroType::StoneFireMan:
        return new StoneFireMan(name);
    case HeroType::Hors:
        return new Hors(name);
    }
}






