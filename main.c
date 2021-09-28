#include <stdio.h>
#include <string.h>

/* 10 commandments
1 	“I am the Lord your God, who brought you out of the land of Egypt, out of the house of bondage. You shall have no other gods before Me.
2 	“You shall not make for yourself a carved image, or any likeness of anything that is in heaven above, or that is in the earth beneath, or that is in the water under the earth; you shall not bow down to them nor serve them. For I, the Lord your God, am a jealous God, visiting the iniquity of the fathers on the children to the third and fourth generations of those who hate Me, but showing mercy to thousands, to those who love Me and keep My Commandments.
3 	“You shall not take the name of the Lord your God in vain, for the Lord will not hold him guiltless who takes His name in vain.
4 	“Remember the Sabbath day, to keep it holy. Six days you shall labor and do all your work, but the seventh day is the Sabbath of the Lord your God. In it you shall do no work: you, nor your son, nor your daughter, nor your male servant, nor your female servant, nor your cattle, nor your stranger who is within your gates. For in six days the Lord made the heavens and the earth, the sea, and all that is in them, and rested the seventh day. Therefore the Lord blessed the Sabbath day and hallowed it.
5 	“Honor your father and your mother, that your days may be long upon the land which the Lord your God is giving you.
6 	“You shall not murder.
7 	“You shall not commit adultery.
8 	“You shall not steal.
9 	“You shall not bear false witness against your neighbor.
10 	“You shall not covet your neighbor's house; you shall not covet your neighbor's wife, nor his male servant, nor his female servant, nor his ox, nor his donkey, nor anything that is your neighbor's.”
*/

/* Terry A. Davis' commandments
11 - Thou Shall not litter.
12 - Don't shoot unarmed men on the crapper. (I asked god why pointless plagues in Exodus? God wanted guilt to accumulate, first.)
13 - No gore unless it looks fake.
14 - No pedophillia or child porn.
15 - Don't eat rare meat with blood.
16 - No wife beating
17 - Do not swing from radio towers with one hand.
18 - Do not disturb. 
*/

int main(int argc, char** argv) {
	printf("1 	I am the Lord your God, who brought you out of the land of Egypt, out of the house of bondage. You shall have no other gods before Me.\n");
	printf("2 	You shall not make for yourself a carved image, or any likeness of anything that is in heaven above, or that is in the earth beneath, or that is in the water under the earth; you shall not bow down to them nor serve them. For I, the Lord your God, am a jealous God, visiting the iniquity of the fathers on the children to the third and fourth generations of those who hate Me, but showing mercy to thousands, to those who love Me and keep My Commandments.\n");
	printf("3 	You shall not take the name of the Lord your God in vain, for the Lord will not hold him guiltless who takes His name in vain.\n");
	printf("4 	Remember the Sabbath day, to keep it holy. Six days you shall labor and do all your work, but the seventh day is the Sabbath of the Lord your God. In it you shall do no work: you, nor your son, nor your daughter, nor your male servant, nor your female servant, nor your cattle, nor your stranger who is within your gates. For in six days the Lord made the heavens and the earth, the sea, and all that is in them, and rested the seventh day. Therefore the Lord blessed the Sabbath day and hallowed it.\n");
	printf("5 	Honor your father and your mother, that your days may be long upon the land which the Lord your God is giving you.\n");
	printf("6 	You shall not murder.\n");
	printf("7 	You shall not commit adultery.\n");
	printf("8 	You shall not steal.\n");
	printf("9 	You shall not bear false witness against your neighbor.\n");
	printf("10 	You shall not covet your neighbor's house; you shall not covet your neighbor's wife, nor his male servant, nor his female servant, nor his ox, nor his donkey, nor anything that is your neighbor's.\n");

	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i] , "--terry")) {
			printf("11 - Thou Shall not litter.\n");
			printf("12 - Don't shoot unarmed men on the crapper. (I asked god why pointless plagues in Exodus? God wanted guilt to accumulate, first.)\n");
			printf("13 - No gore unless it looks fake.\n");
			printf("14 - No pedophillia or child porn.\n");
			printf("15 - Don't eat rare meat with blood.\n");
			printf("16 - No wife beating\n");
			printf("17 - Do not swing from radio towers with one hand.\n");
			printf("18 - Do not disturb.\n");
		}
	}
}
