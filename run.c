#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>

void clear();
void controllers();
void intro();
void pressAny();
void getPlayerName();
void storyLine1();
void storyLine2();
void storyLine3();
void storyLine4();
void breaker();
void hit();
int currentLevel();
struct NFC getNFC();
int nfcRoll();
void smallbreaker();
void battle();

char playerName[50];


struct NFC {
	char  name[50];
	int health;
	int attack;
	int armor;
};

struct Player {
   char  name[50];
   int gold;
   int health;
   int attack;
   int armor;
   int experience;
   int level;
};

/*
	printf("Name: %s, ", a.name);
	printf("Attack: %d, ", a.attack);
	printf("Armor: %d, ", a.armor);
	printf("Health: %d\n", a.health);
*/




int main()
{
	int level = 1;
	int exp = 1;
	struct NFC a = getNFC(nfcRoll());

	/* intro */
	clear();
	breaker();
	intro();
	breaker();
	pressAny();

	/* tutorial */
	clear();
	controllers();
	pressAny();

	/* asking name */
	clear();
	smallbreaker();
	getPlayerName();

	/* Chapter One */
	clear();
	smallbreaker();
	storyLine1();

	pressAny();
	currentLevel(exp);

	clear();
	smallbreaker();
	storyLine2();
	pressAny();	

	clear();
	smallbreaker();
	storyLine3();
	pressAny();	

	clear();
	smallbreaker();
	storyLine4();
	pressAny();

	clear();
	smallbreaker();
	battle();

	return 0;


}


/* NFC */
struct NFC getNFC(int i){

   struct NFC Nfc[44];
   /*struct NFC Nfc2;
   struct NFC Nfc3;
   struct NFC Nfc4;*/

   strcpy( Nfc[0].name, "Wild Cat");
   Nfc[0].attack = 3;
   Nfc[0].armor = 0;
   Nfc[0].health = 11;


   strcpy( Nfc[1].name, "Zombie");
   Nfc[1].attack = 5;
   Nfc[1].armor = 0;
   Nfc[1].health = 15;

   strcpy( Nfc[2].name, "Goblin Shaman");
   Nfc[2].attack = 4;
   Nfc[2].armor = 1;
   Nfc[2].health = 13;

   strcpy( Nfc[3].name, "Wolf");
   Nfc[3].attack = 6;
   Nfc[3].armor = 1;
   Nfc[3].health = 20;

   strcpy( Nfc[4].name, "Veteran");
   Nfc[4].attack = 7;
   Nfc[4].armor = 2;
   Nfc[4].health = 24;

   strcpy( Nfc[5].name, "Skeleton");
   Nfc[5].attack = 6;
   Nfc[5].armor = 0;
   Nfc[5].health = 32;

   strcpy( Nfc[6].name, "Shadow");
   Nfc[6].attack = 8;
   Nfc[6].armor = 3;
   Nfc[6].health = 40;   

   strcpy( Nfc[7].name, "Ooze");
   Nfc[7].attack = 7;
   Nfc[7].armor = 3;
   Nfc[7].health = 41; 

   strcpy( Nfc[8].name, "Pirate");
   Nfc[8].attack = 12;
   Nfc[8].armor = 2;
   Nfc[8].health = 48; 

   strcpy( Nfc[9].name, "Wraith");
   Nfc[9].attack = 9;
   Nfc[9].armor = 5;
   Nfc[9].health = 39; 


/*Level 2*/
   strcpy( Nfc[10].name, "Minotaur");
   Nfc[10].attack = 13;
   Nfc[10].armor = 4;
   Nfc[10].health = 54;

   strcpy( Nfc[11].name, "Gog");
   Nfc[11].attack = 12;
   Nfc[11].armor = 2;
   Nfc[11].health = 50;

   strcpy( Nfc[12].name, "Giant");
   Nfc[12].attack = 16;
   Nfc[12].armor = 5;
   Nfc[12].health = 80;

   strcpy( Nfc[13].name, "Sea Salamander");
   Nfc[13].attack = 16;
   Nfc[13].armor = 4;
   Nfc[13].health = 69;

   strcpy( Nfc[14].name, "Pit Fiend");
   Nfc[14].attack = 18;
   Nfc[14].armor = 3;
   Nfc[14].health = 72;

   strcpy( Nfc[15].name, "Giant Turtle");
   Nfc[15].attack = 20;
   Nfc[15].armor = 6;
   Nfc[15].health = 80;

   strcpy( Nfc[16].name, "Cobra");
   Nfc[16].attack = 16;
   Nfc[16].armor = 8;
   Nfc[16].health = 70;

   strcpy( Nfc[17].name, "Mummy");
   Nfc[17].attack = 19;
   Nfc[17].armor = 1;
   Nfc[17].health = 80;

   strcpy( Nfc[18].name, "Gargoyle");
   Nfc[18].attack = 18;
   Nfc[18].armor = 5;
   Nfc[18].health = 90;

   strcpy( Nfc[19].name, "Doom Knight");
   Nfc[19].attack = 21;
   Nfc[19].armor = 8;
   Nfc[19].health = 110;
   
   strcpy( Nfc[20].name, "Ogre");
   Nfc[20].attack = 24;
   Nfc[20].armor = 5;
   Nfc[20].health = 100;

   strcpy( Nfc[21].name, "Efreet");
   Nfc[21].attack = 22;
   Nfc[21].armor = 3;
   Nfc[21].health = 95;

   strcpy( Nfc[22].name, "Hell Hound");
   Nfc[22].attack = 26;
   Nfc[22].armor = 5;
   Nfc[22].health = 112;

   strcpy( Nfc[23].name, "Ent");
   Nfc[23].attack = 26;
   Nfc[23].armor = 4;
   Nfc[23].health = 126;

   strcpy( Nfc[24].name, "Vampire");
   Nfc[24].attack = 29;
   Nfc[24].armor = 3;
   Nfc[24].health = 104;

   strcpy( Nfc[25].name, "Dragon Worm");
   Nfc[25].attack = 34;
   Nfc[25].armor = 9;
   Nfc[25].health = 141;

   strcpy( Nfc[26].name, "Abomination");
   Nfc[26].attack = 30;
   Nfc[26].armor = 3;
   Nfc[26].health = 180;

   strcpy( Nfc[27].name, "Lizard");
   Nfc[27].attack = 31;
   Nfc[27].armor = 5;
   Nfc[27].health = 156;
      
   strcpy( Nfc[28].name, "Devil");
   Nfc[28].attack = 39;
   Nfc[28].armor = 8;
   Nfc[28].health = 192;
      
   strcpy( Nfc[29].name, "Earth Elemental");
   Nfc[29].attack = 31;
   Nfc[29].armor = 8;
   Nfc[29].health = 110;
      
   strcpy( Nfc[30].name, "Air Elemental");
   Nfc[30].attack = 20;
   Nfc[30].armor = 6;
   Nfc[30].health = 80;

   strcpy( Nfc[31].name, "Water Elemental");
   Nfc[31].attack = 29;
   Nfc[31].armor = 8;
   Nfc[31].health = 118;

   strcpy( Nfc[32].name, "Naka");
   Nfc[32].attack = 38;
   Nfc[32].armor = 12;
   Nfc[32].health = 128;
            
   strcpy( Nfc[33].name, "Tornado");
   Nfc[33].attack = 40;
   Nfc[33].armor = 16;
   Nfc[33].health = 180;
            
   strcpy( Nfc[34].name, "Bone Dragon");
   Nfc[34].attack = 42;
   Nfc[34].armor = 11;
   Nfc[34].health = 165;
             
   strcpy( Nfc[35].name, "Black Dragon");
   Nfc[35].attack = 50;
   Nfc[35].armor = 12;
   Nfc[35].health = 190;
            
   strcpy( Nfc[36].name, "Juggernaut");
   Nfc[36].attack = 52;
   Nfc[36].armor = 8;
   Nfc[36].health = 200;
            
   strcpy( Nfc[37].name, "Skeleton Warrior");
   Nfc[37].attack = 48;
   Nfc[37].armor = 6;
   Nfc[37].health = 180;
            
   strcpy( Nfc[38].name, "Warlock");
   Nfc[38].attack = 51;
   Nfc[38].armor = 9;
   Nfc[38].health = 190;
            
   strcpy( Nfc[39].name, "Satyr");
   Nfc[39].attack = 55;
   Nfc[39].armor = 10;
   Nfc[39].health = 205;
            
   strcpy( Nfc[40].name, "Golem");
   Nfc[40].attack = 56;
   Nfc[40].armor = 20;
   Nfc[40].health = 145;

   strcpy( Nfc[41].name, "Follower of Ra");
   Nfc[41].attack = 58;
   Nfc[41].armor = 9;
   Nfc[41].health = 190;

   strcpy( Nfc[42].name, "Swamp Beast");
   Nfc[42].attack = 58;
   Nfc[42].armor = 9;
   Nfc[42].health = 190;

   strcpy( Nfc[43].name, "Burglar");
   Nfc[43].attack = 21;
   Nfc[43].armor = 2;
   Nfc[43].health = 60;

   return Nfc[i];
}

void controllers(){
	printf("\n");	
	printf("--------------------------------------\n");	
	printf("|               TUTORIAL              |\n");
	printf("--------------------------------------\n");

	printf("\n");
	printf("This game is text-based only.\n");
	printf("To play you'll need to input commands.\n");	
	printf("\n");

	printf("TO WALK // WRITE: ....... w\n");
	printf("HIT // WRITE: ........... h\n");
	printf("HEALTH // WRITE: ........ he\n");
	printf("CHEATS // WRITE: ........ c\n");
	printf("INSTRUCTIONS // WRITE: .. i\n");
	printf("----------\n");	
}

/* Used to clear the screen. */
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

void breaker(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}

void smallbreaker(){
	printf("\n");
}



void intro(){
		printf("              ___________________________________________________ \n");
		printf("              @@@@@@@@@@@@@@@@@@@@@**^^  ~~~ ^@@^*@*@@**@@@@@@@@@ \n");
		printf("              @@@@@@@@@@@@@*^^' ~   , - ' '; ,@@b. '  -e@@@@@@@@@ \n");
		printf("              @@@@@@@@*^ ~      . '     . ' ,@@@@(  e@*@@@@@@@@@@ \n");
		printf("              @@@@@^~         .       .   ' @@@@@@, ~^@@@@@@@@@@@ \n");
		printf("              @@@~ ,e**@@*e,  ,e**e, .    ' '@@@@@@e,  *@@@@@'^@ \n");
		printf("              @',e@@@@@@@@@@ e@@@@@@       ' '*@@@@@@    @@@'   0 \n");
		printf("              @@@@@@@@@@@@@@@@@@@@@',e,     ;  ~^*^'    ;^~   ' 0 \n");
		printf("              @@@@@@@@@@@@@@@^""^@@e@@@   .'           ,'   .'  @ \n");
		printf("              @@@@@@@@@@@@@@'    '@@@@@ '         ,  ,e'  .    ;@ \n");
		printf("              @@@@@@@@@@@@@' ,&&,  ^@*'     ,  .  i^ @e, ,e@e  @@ \n");
		printf("              @@@@@@@@@@@@' ,@@@@,          ;  ,& !,,@@@e@@@@ e@@ \n");
		printf("              @@@@@,~*@@*' ,@@@@@@e,   ',   e^~^@,   ~'@@@@@@,@@@ \n");
		printf("              @@@@@@, ~'' ,e@@@@@@@@@*e*@*  ,@e  @@ @e,,@@@@@@@@@ \n");
		printf("              @@@@@@@@ee@@@@@@@@@@@@@@@'' ,e@' ,e@'e@@@@@@@@@@@@@ \n");
		printf("              @@@@@@@@@@@@@@@@@@@@@@@@' ,@' ,e@@e,,@@@@@@@@@@@@@@ \n");
		printf("              @@@@@@@@@@@@@@@@@@@@@@@~ ,@@@,,0@@@@@@@@@@@@@@@@@@@ \n");
		printf("              @@@@@@@@@@@@@@@@@@@@@@@@,,@@@@@@@@@@@@@@@@@@@@@@@@@ \n");

		printf("               __________________________________________________  \n");
		printf("              |                                                  | \n");
		printf("              |                                                  | \n");
		printf("              |                  THE DRAGONS BANE                | \n");
		printf("              |                                                  | \n");
		printf("              |__________________________________________________| \n");
}


/* When called, the screen will display "Press any key to continue . . ." */
void pressAny(){
	printf("\n");
	printf("-----------------------------------------\n");
	system ("pause");
}

void getPlayerName(){
	printf("--------------------------------------\n");	
	printf("|             ENTER NAME              |\n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("What be thy name?\n");
	printf("[ENTER NAME]: ");
	scanf("%s", &playerName[0]);
} 

int currentLevel(int exp){
	int expRequiredForLevels[4] = {1000, 2000, 3000, 4000};
	int level = 1;
	int j = 0;

	while(j < 4){
		if(exp >= expRequiredForLevels[j] && exp < expRequiredForLevels[j+1]){
			level = j+2;
			return level;
		}
		j++;
	}

	return level;
}

void storyLine1(){
	printf("--------------------------------------\n");	
	printf("|             CHAPTER ONE:           |\n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("It has been ten years since you were made king, %s. \n", playerName);
	smallbreaker();
	printf("There is now only one other kingdom that rivals yours in size and strength.\n");
	printf("Their king is known to be wise and peaceful.\n");
	printf("You have grown to be friends and together have kept peace throughout the land.\n");
	printf("So when you receive a message that the king needs you to come see him\n");
	printf("urgently, you don't hesitate to plan a trip to his castle.\n");
	smallbreaker();
	printf("You pick a few of your best soldiers to accompany you and set out the next day.\n");
}

void storyLine2(){
	printf("--------------------------------------\n");	
	printf("|             CHAPTER ONE:           |\n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("As soon as you leave the gates of your city you are attacked by monsters.\n");
	printf("Your guards are frightened because they have never seen creatures\n");
	printf("like these so you pull out your sword and fight with them.\n");
	smallbreaker();
	printf("They remind you of the monsters that were created by the late\n");
	printf("mad scientist Baldo that you defeated 10 years ago.\n");
	smallbreaker();

}

void storyLine3(){
	struct NFC a = getNFC(nfcRoll());

	printf("--------------------------------------\n");	
	printf("|             CHAPTER ONE:           |\n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("You come across the feared monster %s, ", a.name);
	printf("and you decide to announce");
	printf("your presence.\n");
	smallbreaker();
	printf("You shout in to the forrest: \n");
	printf("I AM %s, THE GREATEST KING THIS LAND HAS EVER KNOWN.\n", playerName);
	printf("HOW DEAR YOU DISTURB ME AND MY MEN ON OUR QUEST? \n");
	smallbreaker();
}

void storyLine4(){
	printf("--------------------------------------\n");	
	printf("|             CHAPTER ONE:           |\n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("This only angers the monster, and you are starting to see\n");
	printf("that the only way out is through killing this beast.\n");
	smallbreaker();
	printf("You prepare for battle. \n");
	smallbreaker();

}

void battle(){
	/*need to be fixed, so the NFC follows from storyLine3*/
	struct NFC a = getNFC(nfcRoll());

	printf("--------------------------------------\n");	
	printf("  - - - - -   B A T T L E   - - - - - \n");
	printf("--------------------------------------\n");	
	smallbreaker();
	printf("King %s", playerName);
	printf(" VS ");
	printf("%s\n", a.name);

}


/*
void (char *)
{
	if (lvl == 1)
		printf("You are Level 1.\n");

	if else (lvl == 2)
		printf("You are Level 2.\n");

	if else (lvl == 3)
		printf("You are Level 3.\n");

	if else (lvl == 4)
		printf("You are Level 4.\n");

	if else (lvl == 5)
		printf("You are Level 5.\n");

	if else (lvl == 6)
		printf("You are Level 6.\n");

	else
		printf("It has been ten years since you were made king.\n");
		printf("There is now only one other kingdom that rivals yours in size and strength.\n");
		printf("Their king is known to be wise and peaceful.\n");
		printf("You have grown to be friends and together have kept peace throughout the land.\n");
		printf("So when you receive a message that he needs you to\n");
		printf("come see him urgently you don't hesitate to plan a trip to his castle.\n");
		printf("You pick a few of your best soldiers to accompany you and set out the next day.\n");

}

void player(int)
{
	int lvl;

}

int lvl(int)
{
	if (character == 1)
		printf("The level is 1.\n");
	else
		printf("The level is not 1.\n");
}
*/


int nfcRoll(){

	(srand(time(NULL)));

	return (rand() % 43);
	
}


void hit(){
	int i;
	int charRoll;

	(srand(time(NULL)));

	for(i=0; i<1; i++){

		charRoll = 1 + (rand() % 50);

//		printf("%d \n", charRoll);

	}
	if (charRoll >= 46 )
		printf("CRITICAL HIT!! (+%d)\n", charRoll);
	else
		printf("HIT +%d\n", charRoll);
}