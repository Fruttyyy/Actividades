#include <iostream>
#include <ctime>
#include<string>


// ex1 +extra
enum EnemyType { zombie, vampire, ghost, wicth};
enum EnemyName { frutty, ruben, alba, andreu, xitee };

using namespace std;


//ex2
struct Enemy
{
	EnemyType type; 
	//char Name[8];
	string name;
	int health;
};

//ex3
bool equalEnemies(Enemy e1, Enemy e2) {


	if (!e1.name.compare(e2.name) && e1.type == e1.type)
	{
		return true;
	}
	else {
		return false;
	}
}

//ex4
Enemy createRandomEnemy() {
	Enemy e;
	e.health = rand() % 300 + 100;
	e.type = EnemyType(rand() % wicth);
	e.name = EnemyType(rand() % xitee);
	return e;	
}

//ex5
string getEnemyTypeString(EnemyType enemitipo) {

	string a= "a";
	if (enemitipo == 0) {
		a = "zombie";
	}
	else if (enemitipo == 1)
	{
		a = "vampire";
	}
	else if (enemitipo == 2)
	{
		a = "ghost";
	}
	else if (enemitipo == 3)
	{
		a = "witch";
	}
	return a;
}


//ex6
void main() {
	int Num_Enemigos = 1;
	int Max_enemigos = 5;	
	bool creado = false;
	Enemy Enemigos[4];	
	//ex7
	Enemigos[0] = createRandomEnemy();
	Enemy e;
	for (int i = 1; i < Max_enemigos; i++) {
		
		e=createRandomEnemy();

		do {
			for (int j = 0; j < Num_Enemigos; j++)
			{
				if (!equalEnemies(Enemigos[j], e)) {
					Enemigos[i] = e;
					creado = true;
				}
			}
		} while (creado==false);
		Num_Enemigos++;
		creado = false;
	}

}


