#include <iostream>
using namespace std;

class Game{
 public:
	int total_score;
};

class Game1:public Game{
 private:
	int id;
	int score;
	int credits;
 public:
	Game1(){
		score=0;
		credits=0;
		total_score=0;
	}
	void get_data(){
		id=rand();
		cout<<"Enter score for match id "<<id<<":";
		cin>>score;
	}
	void score_calculate()
	{
		total_score += score;
	}
	int scores(){
		return total_score;
	}
	int credit(){
		if (total_score<100)
			credits+=1;
		else if (total_score>=100 && total_score<150)
			credits+=3;
		else if (total_score>=150 && total_score<200)
			credits+=4;
		else if (total_score>=200 && total_score<250)
			credits+=5;
		return credits;
	}
};

class Game2:public Game{
 private:
	int id;
	int score;
	int credits;
 public:
	Game2(){
		total_score=0;
		score=0;
		credits=0;
	}
	void get_data(){
		id=rand();
		cout<<"Enter score for match id "<<id;
		cin>>score;
	}
	void score_calculate(){
		total_score+=score;
	}
	int scores(){
		return total_score;
	}
	int credit(){
		if (total_score<100)
			credits+=1;
		else if (total_score>=100 && total_score<150)
			credits+=3;
		else if (total_score>=150 && total_score<200)
			credits+=4;
		else if (total_score>=200 && total_score<250)
			credits+=5;
		return credits;
	}
};

int main()
{
	Game1 obj1;
	Game2 obj2;
	int n,choice;
	int score,credits;
	cout<<"Enter number of times you want to play:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter 1 or 2(Game 1 or Game 2):";
		cin>>choice;
		if (choice==1){
			obj1.get_data();
			obj1.score_calculate();
		}
		else{
			obj2.get_data();
			obj2.score_calculate();
		}
	}
	cout<<"Total Score:"<<obj1.scores()+obj2.scores()<<endl;
	cout<<"Total credits:"<<obj1.credit()+obj2.credit();
}