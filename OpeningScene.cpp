// OpeningScene.cpp

#include <iostream>
#include <chrono>
#include <thread>

void OpeningScene() {

	using namespace std::this_thread;
	using namespace std::chrono;
	using namespace std;
	
		cout << "Once a simple farmer working outside the Kingdom of Lovendale, your \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "career has dwindled under the reign of King Frank, a man who has \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "raised the taxes on all of the farmers in the area. Your income has \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "been cut in half and you realize that your real purpose to take down \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "the tyrant. You will have to navigate your way from the far reaches \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "outside of Lovendale all the way to the inside of King Frank's Tower \n";
		sleep_for(15ns);
		sleep_until(system_clock::now() + 1.5s);
		cout << "Victory is not guarenteed and it is up to you to stop him! \n";

}