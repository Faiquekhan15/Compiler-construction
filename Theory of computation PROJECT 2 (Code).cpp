#include<iostream>
using namespace std;
void info()
{
   cout<<"\n\n\tWelcome to automata iplementataion\n\n\t "<<endl;
   cout<<endl;
   cout<<" 			Muhammad Faique"<<endl;
   cout<<" 			l164196@lhr.nu.edu.pk"<<endl;
   cout<<" 			CS-G"<<endl;
   cout<<" 			 "<<endl;
   cout<<endl;
   cout<<"The following program takes a string from user and tells whether its true or"<<endl;
   cout<<"false according to given automata"<<endl;
   cout<<"if the automata is coorect it will to next state i.e q0->q1 and if string"<<endl;
   cout<< "is not justified given automata it will not move insteead of"<<endl;
   cout<<"this goes to trap state"<<endl;
   cout<<'\n';
   system("pause");

}
void main()
{
   info();  
   char i='\0';
   cout<<"\n\n\tPress 1 to enter main menu\n\n\t "<<endl;
   cin>>i;
   if(i==49)
   {
	   system("cls");
	   char input[100];
	   char ch;
	   bool flag = 1;
	   while (flag == 1)
	   {
		 int currentstate = 0;    // Initial State Starts from 0
		 cout << "Do You want to enter a String? If Yes enter 'y' otherwise enter 'n':  ";
		 cin >> ch;
		 if (ch == 'n' || ch == 'N')
		 {
			 cout << "GoodBye" << endl;
			 break;
		 }

		 if (ch == 'y' || ch == 'Y')
		 {
			cout << endl;
			int lenght=0;
			cout << "Please Enter a String : ";
			cin >> input;
			for (int i=0;input[i]!='\0';i++)
			{
				lenght++;
			}


			for (int i = 0; i < lenght; i++)                  // Array Tokenization Begins
			{
				if(currentstate==0)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=1;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=1;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
				       currentstate=13;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==1)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=2;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=2;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=2;
				   }
				  else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==2)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=3;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=3;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=3;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==3)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=4;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=4;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=4;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==4)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=5;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=5;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=5;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==5)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=6;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=6;	
			       }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=6;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==6)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=7;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=7;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=7;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==7)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=8;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=8;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=8;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==8)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=9;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=9;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=9;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==9)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
					   currentstate=10;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=10;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<"so state is q"<<currentstate<<" "<<"and carachter on it is ::"<<input[i]<<endl;
				       currentstate=10;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==10)
			   {
				   if(input[i]>='A'&&input[i]<='Z')
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
				   else if(input[i]>='a'&&input[i]<='z')
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
				   else if(input[i]>='0'&&input[i]<='9')
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
				   else if (input[i]>=33&&input[i]<=47||input[i]>=58&&input[i]<=64||input[i]>=91&&input[i]<=96||input[i]>=123&&input[i]<=126)
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
					   currentstate=13;
				   }
			   }
			   else if(currentstate==13)
			   {
				   if(input[i]!='\0')
				   {
					   cout<<" Trap state & carachter on it is ::"<<input[i]<<endl;
				   }
			   }

            }
			if(currentstate>=1&&currentstate<=10)
			{
				cout<<"\nyour string is accepted"<<endl;
			}
			else 
			{
				cout<<"your string is rejected"<<endl;
			}
          }
		  cout << endl;
		  system("pause");
		  input[0] = '0';
		  system("cls");
		  flag = 1;
       } 
	 }
}









   
   