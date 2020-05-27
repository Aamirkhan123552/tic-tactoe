#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
 char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choise;
int c,d;
char t='X';
int draw=0;
char name[20],name1[20];

  void display()
  {
  	
	cout<<"\t\t|            | \t\t\n";
	cout<<"          "<<a[0][0]<<"\t|"<<"      "<<a[0][1]<<"     |"<<"    "<<a[0][2]<<endl;
	cout<<"       "<<"_________|"<<"____________|"<<"__________"<<endl;
	cout<<"\t\t|            | \t\t\n";
	cout<<"          "<<a[1][0]<<"\t|"<<"      "<<a[1][1]<<"     |"<<"    "<<a[1][2]<<endl;
	cout<<"       "<<"_________|"<<"____________|"<<"__________"<<endl;
	cout<<"\t\t|            | \t\t\n";
	cout<<"          "<<a[2][0]<<"\t|"<<"      "<<a[2][1]<<"     |"<<"    "<<a[2][2]<<endl;
	cout<<"       "<<"_________|"<<"____________|"<<"__________"<<endl;
	cout<<"\t\t|            | \t\t\n\n"; 	
  	
  }
   void turn()
   {
   	 int a=rand()%2;
   	if(a==1)
   	{
	 
   	cout<<"player 1 choise {X,O};";
   	cin>>t;
    }
   	else
   	{
	 cout<<"player 2 choise-{X,O}";
	 cin>>t;
    }
    cout<<"\n\nlets play::";
    if(a==1)
    {
    	if(t=='X')
    	    cout<<"player 1-{X}:-";
    	
    	else
    	  cout<<"player 1-{O}:-";
    	  
	}
	
	else
	{
		if(t=='X')
    	    cout<<"player 2-{X}:-";
    	
    	else
    	  cout<<"player 2-{O}:-";
	}
    
     
   	
   	cin>>choise;
   	switch(choise)
   	{
   		case 1: c=0;
		         d=0;
		    break;
		case 2: 
		         c=0;
		        d=1;
		    break;
        case 3: c=0;
                d=2;
		    break;
        case 4: 
		     c=1;
		     d=0;
		    break;
        case 5: c=1;
		        d=1;
		    break;
        case 6: c=1;
                d=2;
		    break;
        case 7: c=2;
                 d=0;
		    break;
        case 8: 
                c=2;
                d=1;
		    break;
		case 9: 
		       c=2;
		        d=2;
		       break;
		default:
			    cout<<"\t\twrong choise";
        
	   }
	   if(t=='X' && a[c][d]!='X'&& a[c][d]!='O')
	   {
	   
	      a[c][d]='X';
	      t='O';
	  }
	 else if(t=='O'&&a[c][d]!='O'&& a[c][d]!='X')
	 {
	 	a[c][d]='O';
	 	t='X';
	 }
	 else
	     {
	     	cout<<" already filled";
	     	turn();
	     	
		 }
		 int i;
		 for(i=0;i<100;i++)
		 {
		 	cout<<endl;
		 }
		 display();
   	
   	
   }



  int END_of_game()
  {
  	 int i,j;
  	  
  	  	if(a[0][0]==a[0][1]&& a[0][1]==a[0][2]||
		   a[1][0]==a[1][1]&&a[1][1]==a[1][2]||
			a[2][0]==a[2][1]&&a[2][1]==a[2][2]||
			a[0][0]==a[1][0]&&a[1][0]==a[2][0]||
			a[0][1]==a[1][1]&&a[1][1]==a[2][1]||
			a[0][2]==a[1][2]&&a[1][2]==a[2][2])
  	  	return 0;
		
	 if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]|| a[0][2]==a[1][1]&&a[1][1]==a[2][0])
	    return 0;
	    
	   for(i=0;i<3;i++)
	   {
	   
	   	for(j=0;j<3;j++)
	   {
		 if(a[i][j]!='X'&& a[i][j]!='O') {
	   		 
	   		 
	   		 return 1;
	         }
	    }
        }
	      draw=1;
	      return 0;
	  
}

void change()
{
	 a[0][0]='1';
	 a[0][1]='2';
	 a[0][2]='3';
	 a[1][0]='4';
	 a[1][1]='5';
	 a[1][2]='6';
	 a[2][0]='7';
	 a[2][1]='8';
	 a[2][2]='9';
	 
}




int main()
{
	char ch;
		
	   cout<<"\t\t\t......Zero kata......\t\t\n\n\n\n";
	    
     do
	 {
	           
         display();
	   while(END_of_game())
	   {
	   	 
	   	 
	   	 
	   	 turn();
	   	 END_of_game();
	   	 
	   }
	   
	   
	   
	  	if(t=='O'&&draw==0)
     	{
		cout<<"\t\t"<<name<<"-{X} you won";
     	}
	else if(t=='X'&&draw==0)
    	{
		cout<<"\t\t"<<name<<"-{O} win";
    	}
	else
	{
		cout<<"\t\t"<<"draw";
 }
	
	cout<<"want to play again";
	cin>>ch;
	if(ch=='y')
      change();  
	
		}
	while(ch=='y');	
}
