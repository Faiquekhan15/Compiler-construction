/*
 * 			Muhammad Faique
 * 			l164196@lhr.nu.edu.pk
 * 			CS-G
 * 			 
 */
#include<iostream>
using namespace std;
void main()
{
   cout<<"\n\n\nL164196@lhr.nu.edu.pk\n\n\t"<<endl;
   cout<<"\n\n\tWelcome to automata iplementataion\n\n\t "<<endl;
   cout<<"The following program takes a string from user and tells whether its true or false according to given automata"<<endl;
   cout<<"if the automata is coorect it will to next state i.e 0->1 and if string"<<endl;
   cout<< "is not justified given automata it will not move insteead of"<<endl;
   cout<<"this goes to trap state"<<endl;
// maxinput is of 100 carachter which user can input
   cout<<'\n';
   system("pause");
   char i='\0';
   cout<<"\n\n\tPress 1 to enter main menu\n\n\t "<<endl;
   cin>>i;
   if(i==49)
   {
	   system("cls");
       char ch='\0';
       int lenght=0;
       int currentstate=0;
	   cout<<"\t\nPress y for input n for not input and c for clear screen \n\n"<<endl;
	   cin>>ch;
	   if(ch=='y'||ch=='Y')
	   {
	   char input[100];
	   cout<<"\nEnter a string\n "<<endl;
	   cin>>input;
	   for (int i=0;input[i]!='\0';i++)
	   {
		   lenght++;
	   }
	   for (int i=0;i<lenght;i++)
	   {
		   if(currentstate==0)
		   {
			   if(input[i]=='w')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=1;
			   }
			   else if (input[i]<'a'||input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   currentstate=13;
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
			   }
		   }
		   else if(currentstate==1)
		   {
			   if(input[i]=='w')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=2;
			   }
			   else if (input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==2)
		   {
			   if(input[i]=='w')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=3;
			   }
			   else if (input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==3)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=4;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==4)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else if(input[i]=='c')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=5;
			   }
			   else if(input[i]=='e')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=8;
			   }
			   else if(input[i]=='p')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=11;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==5)
		   {
			   if(input[i]=='o')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=6;
			   }
			   else if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==6)
		   {
			   if(input[i]=='m')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=7;
			   }
			   else if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;			   
			   }
			   else
			   {
				 cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				 currentstate=13;			   
			   }
		   }
		   else if(currentstate==7)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==8)
		   {
			   if(input[i]=='d')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=9;
			   }
			   else if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==9)
		   {
			   if(input[i]=='u')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=10;
			   }
			   else if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if(currentstate==10)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if (currentstate==11)
		   {
			   if(input[i]=='k')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=12;
			   }
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if (currentstate==12)
		   {  
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=13;
			   }
		   }
		   else if (currentstate==13)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=14;
			   }
			   else if (input[i]<'a')
			   {
				   currentstate=25;
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
			   }
			   else
			   {
				   currentstate=13;
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
			   }
		   }
		   else if(currentstate==14)
		   {
			   if(input[i]=='.')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   else if(input[i]=='c')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=20;
			   }
			   else if(input[i]=='e')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=17;
			   }
			   else if(input[i]=='p')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=15;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }

		   else if(currentstate==15)
		   {
			   if(input[i]=='k')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=16;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
			   
		   }
		   else if(currentstate==16)
		   {
			if(input[i]!='\0')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   else if(currentstate==17)
		   {
			   if(input[i]=='d')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=18;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   else if(currentstate==18)
		   {
			   if(input[i]=='u')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=19;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   else if(currentstate==19)
		   {
			   if(input[i]!='\0')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   else if(currentstate==20)
		   {
			   if(input[i]=='o')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=21;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   
		   else if(currentstate==21)
		   {
			   if(input[i]=='m')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=22;
			   }
			   else 
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }

		   else if(currentstate==22)
		   {
			   if(input[i]!='\0')
			   {
				   cout<<"so state is "<<currentstate<<"and carachter on it is ::"<<input[i]<<endl;
				   currentstate=25;
			   }
		   }
		   
		   else if(currentstate==25)
		   {
			   if(input[i]!='\0')
			   {
				   cout<<"so state is trapping & carachter on it is ::"<<input[i]<<endl;
			   }
		      }
           }
       }  
      else if(ch=='n'||ch=='N')
	  {
		  cout<<"Good bye"<<endl;
      }
	  else if(ch=='c'||ch=='C')
	  {
		  system("cls");
	  }
	  if(currentstate==7||currentstate==9||currentstate==11||currentstate==16||currentstate==19||currentstate==22)
	  {
		 cout<<"your string is accepted"<<endl;
		 system("pause");
	  }
	  else
	  {
		 cout<<"your string is rejected"<<endl;
		 system("pause");
	  }
}
}

   
   