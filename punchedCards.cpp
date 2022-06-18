#include<iostream>
using namespace std;
int main(){
	int noOfTests;
	cin>>noOfTests;
	for(int  i = 1; i<=noOfTests;i++){
		int r, c;
		cin>>r;
		cin>>c;
		r = 2*r + 1;
		c = 2*c + 1;
		char punchedCards[r][c];
		cout<<"Case #"<<i<<":"<<endl;
		for(int row = 0; row<r; row++){
			for(int col = 0; col<c; col++){
				if((row==0&&col==0) || (row==0&&col==1) || (row==1&&col==0)){
					punchedCards[row][col] ='.';
				}
				else{
					if((row+1)%2==0){
						if((col+1)%2==0){
							punchedCards[row][col]='.';
						}
						else{
							punchedCards[row][col]='|';
						}
					}
					else{
						if((col+1)%2==0){
							punchedCards[row][col]='-';
						}
						else{
							punchedCards[row][col]='+';
						}
					}
				}
				cout<<punchedCards[row][col];
			}
			cout<<endl;
		}
	}
	
}
