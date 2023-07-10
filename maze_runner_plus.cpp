/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash

Maze Runner
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    char d = ';';
    int column= 1; //left to right

    int row= 0; //top to down
    int size;

    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1
    }; 

    while(cin >> input){
        //d = s[s.length() - 1];
        size= input.size();
        
        //int Count_Length= 0;
        //if(input[input.length() - 1] == d){

        for(int i=0; i < size; i++){
            //string s=input[i];


            char s= input[i];

            if(s == ';'){
                if((row == 4 && column ==5)){
                    cout<<"You got out of the maze."<< endl;

                }
                else{
                    cout<< "You are stuck in the maze."<< endl;
            
            }



            }


            if (s == 'R' && (maze[row][column+1] == 0 && column < 5) ){

                column++;
            }

            if (s == 'D' && (maze[row+1][column] == 0 && row< 5)){
                row++;
            }
            if (s == 'U' &&  (maze[row-1][column] == 0 && row > 0)){
                row--;
            }
            if (s == 'L' && (maze[row][column -1] == 0 && column > 0)){
                column--;
            }
            //Count_Length++;
        

   
        }

        //}

        


        






        

    }

    return 0;
    
   
}