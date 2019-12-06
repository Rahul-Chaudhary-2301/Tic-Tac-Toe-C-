/*
 * 		TIC TAC TOE 
 * Created by Rahul Chaudhary....
 * Date ----> 06/09/2018
 *
 */
 
#include <iostream>
using namespace std;
string dis[] = {" "," "," "," "," "," "," "," "," "};
int winarray[] = {10,20,30,40,50,60,70,80,90};
int up = 0;
int get,move,invalid,lastplayer,wins = 0;
int total;
string in,winner;
int disp();
int player1_move();
int player2_move();
int moves();
int play();
int disp2();
int check();
int wins_disp();
int draw();

int main(){
	disp();
	cout << endl;
	disp2();
	play();
}
int disp(){
		cout << endl;
		cout << "  **************** TIC TAC TOE ******************" << endl << endl;;
		
		for (int i = 1;i <= 9;i++){
		if(i == 1 || i == 4 || i == 7){
			cout <<"\t\t"<< i;	
		}
		else{
			cout <<"\t" << i;
		}
		if(i==3 || i==6 || i==9){
		//	cout << endl;
		}
		else{
			cout << "   |";
		}
		if(i == 3 || i == 6){
			cout << endl;
			cout << "\t       -------------------"<<endl;
		}
				
	}
	cout << endl << endl <<"  ==============================================="<<endl;
}
int play(){
	while(true){
	p1:
	player1_move();
	moves();
	disp2();
	check();
	goto end;
	
	p2:
	player2_move();
	moves();
	disp2();
	check();
	goto end;
	
			

	end:
		total = total + up;
	if(lastplayer == 1){
		winner = "\t\tPlayer 1";
	}else{
		winner = "\t\tPlayer 2";
	}

	if((winarray[0] + winarray[1] + winarray[2]) == 3 || (winarray[0] + winarray[1] + winarray[2]) == 0){
		wins == 1;
		wins_disp();
		break;
	}
	else if((winarray[3] + winarray[4] + winarray[5]) == 3 || (winarray[3] + winarray[4] + winarray[5]) == 0){
		wins == 1;
		wins_disp();
		break;	
	}
	else if((winarray[6] + winarray[7] + winarray[8]) == 3 || (winarray[6] + winarray[7] + winarray[8]) == 0){
		wins == 1;
		wins_disp();
		break;
	}
	else if((winarray[0] + winarray[3] + winarray[6]) == 3 || (winarray[0] + winarray[3] + winarray[6]) == 0){
		wins == 1;
		wins_disp();
		break;
	}
	else if((winarray[1] + winarray[4] + winarray[7]) == 3 || (winarray[1] + winarray[4] + winarray[7]) == 0){
		wins == 1;
		wins_disp();
		break;
	}
	else if((winarray[2] + winarray[5] + winarray[8]) == 3 || (winarray[2] + winarray[5] + winarray[8]) == 0){
		wins == 1;
		wins_disp();
		break;
	}	
	else if((winarray[0] + winarray[4] + winarray[8]) == 3 || (winarray[0] + winarray[4] + winarray[8]) == 0){
		wins == 1;
		wins_disp();
		break;
	}	
	else if((winarray[2] + winarray[4] + winarray[6]) == 3 || (winarray[2] + winarray[4] + winarray[5]) == 0){
		wins == 1;
		wins_disp();
		break;
	}
	else{
		if(lastplayer == 1){
			lastplayer == 0;
			goto p2;
		}else{
			goto p1;
		}
	}
	if(total == 5){
	draw();
	break;
	}


}
}

int player1_move(){
	cout << endl << endl << endl;
	cout << "-----> Player 1 : ------->  ";
	cin >> get;
	in = "X";
	lastplayer = 1;
}
int player2_move(){
	cout << endl<< endl << endl;
	cout << "-----> Player 2: ------->  ";
	cin >> get;
	in = "O";
	lastplayer = 2;
}
int moves(){
	if(lastplayer == 1){
		up = 1;
		cout << up;
	}else{
		up = 0;
		cout << up;
	}
	
	if( dis[get-1] == " "){
		if (get == 1){
			dis[0] = in;
			winarray[0] = up;
		}
		else if (get == 2){
			dis[1] = in;
			winarray[1] = up;
		}
		else if (get == 3){
			dis[2] = in;
			winarray[2] = up;
		}
		else if (get == 4){
			dis[3] = in;
			winarray[3] = up;
		}
		else if (get == 5){
			dis[4] = in;
			winarray[4] = up;
		}
		else if (get == 6){
			dis[5] = in;
			winarray[5] = up;
		}
		else if (get == 7){
			dis[6] = in;
			winarray[6] = up;
		}
		else if (get == 8){
			dis[7] = in;
			winarray[7] = up;
		}
		else if (get == 9){
			dis[8] = in;
			winarray[8] = up;
		}
		else{
			cout << "invalid input" << endl;
		}
	}
	else{
		invalid = 1;
		cout << "invalid input" << endl;
	}
	
}
int disp2(){
	system("clear");
	cout <<endl<<endl;
	disp();
	cout << endl;
	for(int i = 0;i<=8;i++){
		if(i == 0 || i == 3 || i == 6){
			cout <<"\t\t"<< dis[i];	
		}else
		{
			cout <<"\t"<< dis[i];
		}
		if(i==2 || i==5|| i==8){
		}
		else{
			cout << "   |";
		}
		if(i == 2 || i == 5){
			cout << endl;
			cout << "\t       -------------------"<<endl;	
		}
	}
	
}

int check(){
	if(invalid == 0){
		
	}else{
		if(lastplayer == 1){
			lastplayer == 0;
			invalid = 0;
				player1_move();
				moves();
				disp2();
				check();
			
		}
		else if(lastplayer == 2){
			lastplayer == 0;
			invalid = 0;
				player2_move();
				moves();
				disp2();
				check();
			
		}else{
				/*...*/
		}
	}
}

int wins_disp(){
	cout << endl<< endl << "   *********************************************"<<endl;
	cout << "   *" << winner << " Wins...."<< "\t       *"<<endl;
	cout << "   *********************************************"<<endl;
}
int draw(){
	cout << endl<< endl << "   *********************************************"<<endl;
	cout << "   *\t\tMatch Drawn....       \t*"<<endl;
	cout << "   *********************************************"<<endl;	
}

