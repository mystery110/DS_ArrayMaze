#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

const static  int n[2]={15,39},m[2]={15,19};
bool check(int x[15][15]);
bool check(int x[39][19]);
int main (){
	int Maze1[15][15]={{0}},Maze2[39][19]={{0}},i;
	int StartI[2]={10,1},StartJ[2]={10,1};
	Maze1[StartI[0]][StartJ[0]]++;
	Maze2[StartI[1]][StartJ[1]]++;
	int prob=0,totalStep[2]={0,0};//Which case are solving 
	int MoveI[8]={-1,-1,-1,0,0,1,1,1},MoveJ[8]={1,0,-1,1,-1,1,0,-1};
		//moving up is positive ,downis nagative .Left is Negative and right is positive 
	srand(time(NULL));
	while (prob<2&&totalStep[prob]<=50000){
		do{
			i=rand()%8;}
		while(StartJ[prob]+MoveJ[i]<0||StartJ[prob]+MoveJ[i]>=m[prob]||StartI[prob]+MoveI[i]<0||StartI[prob]+MoveI[i]>=n[prob]);
		StartI[prob]+=MoveI[i];
		StartJ[prob]+=MoveJ[i];
		if(prob==0){
			Maze1[StartI[prob]][StartJ[prob]]++;}
		else {
			Maze2[StartI[prob]][StartJ[prob]]++;}	
		totalStep[prob]++;
		if (totalStep[prob]==50000){
			prob++;}
		if(prob==0&&totalStep[prob]>225){//require at least 225 steps to go through the maze
			if(check(Maze1)){
				prob++;}
		}
		else if(prob==1&&totalStep[prob]>741){
			//require at least 741 steps to go through the maze
			if(check(Maze2)){
				prob++;}
		}
	}
	cout<<"Experiment1:\n"<<"Total moves:"<<totalStep[0]<<"\n";
	for (int o=0;o<15;o++){
		for(int p=0;p<15;p++){
			cout<<setw(4)<<Maze1[o][p]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Experiment 2:\n"<<"Total Moves:"<<totalStep[1]<<"\n";
	for (int o=0;o<39;o++){
		for (int p=0;p<19;p++){
			cout<<setw(4)<<Maze2[o][p]<<" ";
		}
		cout<<endl;
	}
}

bool check(int x[15][15]){
	for (int i=0;i<n[0];i++){
		for(int j=0;j<m[0];j++){
			if(x[i][j]==0)
				return false;
		}
	}
	return true;}

bool check(int x[39][19]){
	for (int i=0;i<n[1];i++){
		for(int j=0;j<m[1];j++){
			if(x[i][j]==0)
				return false;
		}
	}
	return true;}


