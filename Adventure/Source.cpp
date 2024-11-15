#include <iostream>
#include <string>
using namespace std;

int main() {
	int characterHealth = 100;
	string characterType;
	while (characterType != "warrior" and characterType != "scout") {
		cout <<
			"-----Welcome to My Fantasy Adventure----\n"
			"You wake up in the forest and find two weapons A dagger (scout), and a longsword (warrior) (case sensitive)\n"
			"Which do you choose?\n- ";

		cin >> characterType;

		if (characterType != "warrior" and characterType != "scout") {
			cout << "Error not an option\n\n";
			continue;
		}

	}

	if (characterType == "warrior") {
		cout <<
			"You stumble onto your feet and pick up the Longsword it's rusty and the leather grip is falling apart in your hands, but it'll get the job done\n";
	}

	else if (characterType == "scout"){
		cout <<
			"You stumble onto your feet and pick up the dagger it's blunt and the leather grip falls apart as you grab it, but it must do for now\n";
	}
	system("pause");

	cout <<
		"You venture further into the forest and reach the side of a mountain, you look around for a way through or around and see a huge stone door carved into the rock.\n"
		"Suddenly a booming voice shouts out: 'Answer this riddle to pass safely: What can you catch but cannot throw?'\n"
		"You ponder the answer for a while but eventually decide on: (must be lower-case)\n";


	string riddleAnswer;
	while (riddleAnswer != "cold" and riddleAnswer != "bus" and riddleAnswer != "train") {
		cout << "\n- ";
		cin >> riddleAnswer;
		if (riddleAnswer != "cold" and riddleAnswer != "bus" and riddleAnswer != "train") {
			cout <<
				"You shout: '" << riddleAnswer << "'\nBut the voice doesn't answer, a wave of dread fills you, the door slides open but instead of the entrance, two jets of fire shoot out at you\n";
			if (characterType == "scout") {
				if ((characterHealth - 10) <= 0) {
					cout <<
						"The Fire engulfs you, and you get cooked alive, left as a steaming pile of ash\n";

					cout << "YOU DIED\n";
					system("pause");
					quick_exit(0);
				}
				cout <<
					"But with your superior dexterity you jump out of the way before it can do much damage but you still manage to get a large burn on your arm (you lose 10 hp). \nthe door slams shut and the voice booms 'Try Again'\n";
				characterHealth -= 10;
				cout << "HP: " << characterHealth;
			}
			else {
				if ((characterHealth - 20) <= 0) {
					cout <<
						"The Fire engulfs you, and you get cooked alive, left as a steaming pile of ash\n";

					cout << "YOU DIED\n";
					system("pause");
					quick_exit(0);
				}
				cout <<
					"The fire scorches your entire body and leaves you covered in burns (you lose 20 hp)\nthe door slams shut and the voice booms 'Try Again'\n";
				characterHealth -= 20;
				cout << "HP: " << characterHealth;
			}
			continue;

		}
		else {
			cout <<
				"The voice booms: 'That is correct you may now pass'\n"
				"The door slides open, scraping against the stone floor\n"
				"You enter the cave it's walls stretch further than the eye can see\n";
			system("pause");
		}
	}


	

}