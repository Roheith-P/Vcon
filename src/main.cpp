 #include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include <unistd.h>
#include <ctype.h>
#include <process.h>
#include <windows.h>

using namespace std;
void study(){
	system("Color c7");
	string ask;
	cout << "Which subject do you want to open: ";
	system("subject.vbs");
	cin >> ask;
	if (ask == "English" || ask == "english"){
		ShellExecute(NULL, "open", "https://ssmetrust.sharepoint.com/sites/VIIMNENGLISH/Class%20Materials/Forms/AllItems.aspx",
				                NULL, NULL, SW_SHOWNORMAL);
	}
	else if (ask == "Hindi" || ask == "hindi"){
		ShellExecute(NULL, "open", "https://ssmetrust.sharepoint.com/sites/VIIMNIIILANGUAGE/Class%20Materials/Forms/AllItems.aspx",
						                NULL, NULL, SW_SHOWNORMAL);
	}
	else if (ask == "Maths" || ask == "maths"){
		ShellExecute(NULL, "open", "https://ssmetrust.sharepoint.com/sites/VIIMNMATHEMATICS/Class%20Materials/Forms/AllItems.aspx",
						                NULL, NULL, SW_SHOWNORMAL);
	}
	else if (ask == "Science" || ask == "science"){
		ShellExecute(NULL, "open", "https://ssmetrust.sharepoint.com/sites/VIIMLSCIENCE/Class%20Materials/Forms/AllItems.aspx",
								                NULL, NULL, SW_SHOWNORMAL);
	}
	else if (ask == "Social" || ask == "social"){
		ShellExecute(NULL, "open", "https://ssmetrust.sharepoint.com/sites/VIIMNSOCIALSCIENCE/Class%20Materials/Forms/AllItems.aspx",
										                NULL, NULL, SW_SHOWNORMAL);
	}
	else {
		cout << "Subject Not Available";
	}
}
int main() {
	string what;

	cout << "Hello Roheith \n";
	system("Speak.vbs");
  jump: {cout << "Type Your Command Here >>";

 cin >> what;
  }

if (what =="hello"){
	cout << "Enter your command \n";
system("encm");
goto jump;
}
else if (what == "help"){
	system("help.vbs");
	cout << "Hey Roheith There are different types of commands you can try \n";
goto jump;}
else if (what =="update"){
	system("ipconfig");
	cout << "Connecting... \n";

	Sleep(5000);
	system("update.vbs");
	cout << "No Updates found \n";
	goto jump;
}
else if (what =="open chrome"){

}
else if (what == "Exit" || what== "exit"){
	cout << "Okay! \n";
	cout << "Shutting up \n";
	sleep(2000);

}
else if (what =="explorer"){

}
else if (what == "cmd" || what == "Cmd" || what == "shell" || what == "Shell"){
	system("cmd.vbs");
	system("cmd.exe");
}

else if (what == "downchrome"){
	ShellExecute(NULL, "open", "https://www.google.com/chrome/thank-you.html?statcb=1&installdataindex=empty&defaultbrowser=0#",
		                NULL, NULL, SW_SHOWNORMAL);
}
else if (what == "Name" || what == "name"){
	system("vname.vbs");
	cout << "My name is Vcon \n";
	goto jump;
}
else if (what == "Game" || what == "Gaming" || what == "game" || what == "gaming"){
	cout << "Okay... \n";
	cout << "loading website";
	Sleep(3000);
	ShellExecute(NULL, "open", "https://www.gamestorrents.fm/",
			                NULL, NULL, SW_SHOWNORMAL);
goto jump;}
else if (what == "Myname" || what == "myname"){
	cout << "Your name is Roheith";
}
else if (what == "scan"){
    system("Norton.bat");
    goto jump;
		}
else if (what == "Chrome" || what == "chrome"){
	system("chrome.bat");
	goto jump;
}
else if (what ==""){
	cout << "Command Me \n";
}
else if (what == "Edge" || what == "edge"){
	system("edge.bat");
}
else if (what == "Sharepoint" || what == "sharepoint"){
    study();
	goto jump;
}
else if (what == "Amazon" || what == "amazon"){
	system("Amazon.bat");
	goto jump;
}
else if (what == "Dog" || what == "dog"){
	system("Rokkie.vbs");
	cout << "Your dog name is Rokkie";
}
else if (what == ""){
	cout << "type something";
}
else if (what == "Conseptree" || what == "conseptree"){
	system("Consept.bat");
}
goto jump;
}
