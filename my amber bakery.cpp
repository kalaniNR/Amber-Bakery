#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h> 
#include<iomanip> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void buy_item();
void mainmenu();
void pass();

	



    int main(int argc, char** argv) {
	mainmenu();
return 0;	
}
void mainmenu()
{
system("color b");
	cout << "\n\n\n\n" <<endl;
    cout<<    "                               /$$                                 /$$                 /$$                                            "<<endl;
    cout<<    "                              | $$                                | $$                | $$                                            "<<endl;
    cout<<    "        /$$$$$$  /$$$$$$/$$$$ | $$$$$$$   /$$$$$$   /$$$$$$       | $$$$$$$   /$$$$$$ | $$   /$$  /$$$$$$   /$$$$$$  /$$   /$$        "<<endl;
    cout<<    "       |____  $$| $$_  $$_  $$| $$__  $$ /$$__  $$ /$$__  $$      | $$__  $$ |____  $$| $$  /$$/ /$$__  $$ /$$__  $$| $$  | $$        "<<endl;
    cout<<    "        /$$$$$$$| $$ \\ $$ \\ $$| $$  \\ $$| $$$$$$$$| $$  \\__/      | $$  \\ $$  /$$$$$$$| $$$$$$/ | $$$$$$$$| $$  \\__/| $$  | $$  "<<endl;
    cout<<   "       /$$__  $$| $$ | $$ | $$| $$  | $$| $$_____/| $$            | $$  | $$ /$$__  $$| $$_  $$ | $$_____/| $$      | $$  | $$         "<<endl;
    cout<<    "      |  $$$$$$$| $$ | $$ | $$| $$$$$$$/|  $$$$$$$| $$            | $$$$$$$/|  $$$$$$$| $$ \\  $$|  $$$$$$$| $$      |  $$$$$$$       "<<endl;
    cout<<    "       \\_______/|__/ |__/ |__/|_______/  \\_______/|__/            |_______/  \\_______/|__/  \\__/ \\_______/|__/       \\____  $$  "<<endl;
    cout<<    "                                                                                                                     /$$  | $$        "<<endl;
    cout<<    "                                                                                                                    |  $$$$$$/        "<<endl;
                  
	int a;
	for(a=0; a<100000000; a++)
	{
		cout << "";
		
		
	}
	system("cls");
  

 main_menu:
	system("cls");	
    system("color a");
		cout << "\n\n"<<endl;
		cout << "      |```````````````````|           |`````````````````|           |``````````````````|   "<<endl;
		cout << "      |    Customer       |           |     Manager     |           |   Company        |  "<<endl;
		cout << "      |                   |           |                 |           |      Details     |  "<<endl;
		cout << "      `````````````````````            ```````````````````            ```````````````````` "<<endl;
		cout << "             Press 1                        Press 2                        Press 3 \n\n"     <<endl;
		
		

		cout << "       |```````````````````|    "      <<endl;
		cout << "       |       Exit        |   "      <<endl;
		cout << "       |                   |   "      <<endl;
		cout << "       `````````````````````   "      <<endl;
		cout << "             Press 4  \n\n"           <<endl;
		char button1;
		cout << "Press Your Choice : ";
		cin >> button1;
		
		switch(button1)
		{
			//customer-----------------------------------------------------------------------------------------------------------------------------------
			case'1':

				customer_service:	
				system("cls");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Customer"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
					cout << "            1 .Price List "<<endl;
					cout << "            2 .Buy Items "<<endl;
					cout << "            3 .Goto back  "<<endl;
					cout << "            4 .Exit  \n\n"<<endl;
					
					char button2;
					cout << "Select Option = ";
					cin>> button2;
					system("cls");
				
				switch(button2)//Customer 
				{
					case'1': //Price List
					 goto price_list;
						break;
					
					case'2'://Buy Items
  						cout <<setw(70)<< "Buy Item"<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"+++++  QUICK  HELPER +++++\n"<<endl;
						cout<<" * Fist Enter Your Name"<<endl;									
						cout<<" * Secondly, Enter the Number of Item You Want\n "<<endl;     
						cout<<" * next, Enter The Amount you want\n "<<endl;   
						cout<<" * IF You Stop The your Transact, Press 0\n"<<endl;                
      
						system("pause");
						system("cls");
						buy_item();
						break;
						
					
					case'3'://goto back
						goto main_menu;
						
					case'4'://exit
						exit (0);
												
					default :
						system("cls");
						goto customer_service;
				}
				break;

			//manager login-------------------------------------------------------------------------------------------------------------------------------------	
			case'2':
				system("cls");
			login:{
				
				
				//user name and password
				cout<<"please  enter your user name And Password to continue..."<<"\n"<<"\n";
				cout<<setw(25)<<"Username :";
				string user;
				cin>>user;
			
						cout<<"\n";
						string pass ="";
						char ch;
						cout<<setw(26)<< "password : ";
						ch = _getch();
						while(ch !=13)
						{
							pass.push_back(ch);
							cout << '#';
							ch = _getch();
						}
						
							if (pass=="admin"&&user=="admin")
							{ 
							goto manager_service;
							
							}else{

								cout<< "\n "<<"            ***invalid User Name or Password***"<<endl;
								goto login;
							}
							
							
							
		   			}
		   			break;
		   	//---------------------------------------------------------------------------------------------------------------------------------------
		   	
		   	
		   	
		   	
			   //company details		
			case'3':
				system("cls");
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  						cout <<setw(70)<< ":::Company Details:::"<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"\tCompany name    : Amber Bakery\n"<<endl;
						cout<<"\tOwner           : Ms. R.A.K.N.Rajapaksha \n"<<endl;
						cout<<"\tEmail           : amberbakery1234@gmail.com\n"<<endl;
						cout<<"\tContact Number  : 037-2286494\n"<<endl;
						cout<<"\tFax Number      : 037-2236589\n"<<endl;
						cout<<"\tAdress          : Amber Bakery, \n\t\t\t  kuliyapitiya Road, \n\t\t\t  Narammala.\n\n"<<endl;


				
				system("pause");
				system("cls");
				goto main_menu;
				break;



			case'4':
				system("cls");
					exit(0);
			default :
				system("cls");
				goto main_menu;
				break;
		}
				
manager_service:
system("cls");
								//manager inter face
								cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
						   	 	cout <<setw(70)<< "Manager Service"<< endl;
						 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
								cout << "            1 .Update Item "<<endl;
								cout << "            2 .Employee Salary chart "<<endl;
								cout << "            3 .Add Employee "<<endl;
								cout << "            4 .Sales Details "<<endl;
								cout << "            5 .Goto back  "<<endl;
								cout << "            6 .Exit  \n\n"<<endl;
								
								char button3;
								cout << " Select Option = ";
								cin>> button3;
								
								switch(button3)
								{
								case'1': //update item
								system("cls");
								goto update_item;
								break;
						
								case'2'://employee salary chart
								goto salary;
								break;
								
								case'3'://employee 
								goto employee;
								break;
								
								case'4'://Sales Details
								 goto sales_details;
								break;
								
								
								case'5'://goto back
								goto main_menu;
								break;
						
								case'6'://exit
								system("cls");
								exit(0);
								
								default:
									goto manager_service;
								
								}



employee:
	system("cls");
{
	
		struct employee
	{
		string name;
		string emp_no;
		double basic_salary;
		int ot_hour;
		int leave_day;
		double ingriment;
		double  net_salary1 ;
		double net_salary2;
		double epfemp;
		double epfcom ;
		double epf;
		double gross_salary2;
		double bank;
		double ot_rate;
	};
	
		cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
   	 	cout <<setw(70)<< "Details of Employees"<< endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
 	
	int p,o;
	
	cout <<setw(40)<< "First Enter The Number OF Employee Needed    : "; 
	cin >> o ;
	
	
	employee emp[o];
	
	for  (p=0; p<o ;p++){

	cout << "\n   Enter details of " << p+1 << " Employee "<<endl;
	
	
	cout <<setw(30)<< "Enter Your Name    : "; 
	cin >> emp[p].name ;
	
	cout <<setw(30) << "Input Employee No  : "; 
	cin >> emp[p].emp_no;                                
	
	cout <<setw(30) << "input Basic Salary : Rs."; 
	cin >> emp[p].basic_salary ;
	
	
	cout <<setw(30) << "input OT Hours     : ";
	cin >> emp[p].ot_hour ;	
	
	cout <<setw(30)<< "input Leave days   : ";
	cin >> emp[p].leave_day ;	
	
	cout <<setw(30)<< "input Ingriment    : ";
	cin >> emp[p].ingriment ; 
	cout <<setw(60) << "*Data Entered to Data Base \n" << endl;


	
	emp[p].ot_rate = emp[p].basic_salary*0.01;
	emp[p].epf = emp[p].basic_salary * 3/100;
	emp[p].epfcom = emp[p].basic_salary * 12/100;
	emp[p].epfemp = emp[p].basic_salary * 8/100;
	emp[p].net_salary1= emp[p].basic_salary+ (emp[p].ot_rate *emp[p].ot_hour);
	
	

	emp[p].net_salary2 = emp[p].net_salary1 -( emp[p].basic_salary / 30 ) *emp[p].leave_day;
		
	emp[p].gross_salary2 = emp[p].net_salary2 + emp[p].ingriment - emp[p].epfemp;
	emp[p].bank = emp[p].epf + emp[p].epfcom + emp[p].epfemp;
	
	
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("employee.txt");
		mf << content;

		
	
		mf<<setw(10)<< emp[p].name <<setw(13)<<emp[p].emp_no  <<setw(20)<<emp[p].basic_salary <<setw(10)<< emp[p].ot_rate<<setw(10)<<emp[p].ot_hour<<setw(17)<<emp[p].net_salary2 <<setw(12)<<emp[p].bank<<setw(15)<<emp[p].gross_salary2<<endl;
		mf.close();
 
	}
  system("pause");
	system("cls");
	goto manager_service;
}

salary:
{
 system("cls");
	

  	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout <<setw(70)<< "Employees Salary chart" << endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
 
 
 cout <<setw(8)<< "Name" <<setw(20)<<"Employee Id"  <<setw(18)<<"Basic Salari"<<setw(10)<<"OT Rate"<<setw(11)<<"OT hours"<<setw(15)<<"Net salary"<<setw(9)<<"Bank"<<setw(17)<<"Gross Salry"<<"\n"<<endl;
 
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line))

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";



		
  system("pause");
	system("cls");
	goto manager_service;
}











//update item		
	update_item:
	{
						struct item_f
									{
										string item;
										double item_price;
				
										};
				
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Add Details of item"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
			 	
				int j, m;

				cout <<setw(40)<< "First Enter The Number Of Item Needed   : "; 
				cin >> m ;
		
					
				item_f item[m];
				
				for  (j=0; j<m ;j++){
			
				cout << "\n    Enter details of " << j+1 << " item "<<endl;
				
				
				cout <<setw(30)<< "Emter item    : "; 
				cin >> item[j].item ;
				
				cout <<setw(30) << "Input Price  : Rs"; 
				cin >> item[j].item_price;                                
			
				
				ifstream file("item.txt");
				string content;
				string line;
			
				while(getline(file,line)){
					content+=line +"\n";
					
				}
				file.close();
				
			
					ofstream mf;
					mf.open("item.txt");
					mf << content;
			
					
				
					mf<<setw(15)<< item[j].item <<setw(13)<<"Rs"<<item[j].item_price <<".00"<<endl;
					mf.close();
			}
					goto manager_service;
					
				//update item End
			}
//see item list

price_list:
	{
		cout<<"\n\n"<<endl; 
 		 cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
  		  cout <<setw(70)<< "Details of item"<<endl;
 		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;

 		cout <<setw(8)<< "item" <<setw(25)<<"Price (Rs)"  <<"\n"<<endl;
 
 
	
			ifstream file("item.txt");
			string content;
			string line;
		
			while(getline(file,line))
			
		
				 cout<<line<<"\n";
				file.close();
			 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
			

     			system("pause");
     			
				system("cls");
				goto customer_service;
	}


sales_details: //Sales Details
{
	system("cls");
	cout<<"\n"<<endl; 
  cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<setw(70)<< "Details of Sales"<<endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
 

 
 

 cout <<setw(13)<< "Name" <<setw(25)<<"item"  <<setw(15)<<"Price"<<setw(12)<<"Amount"<<setw(15)<<"Net Total"<<setw(10)<<"Total"<<"\n"<<endl;
 
	
 
	
	ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line))
	

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
	 
	 system("pause");
	 system("cls");
	 goto manager_service;
}

 //see item list end
	exit(0);                                                                                      
}          

void buy_item() //buy item
{


		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  		cout <<setw(70)<< "Buy item"<<endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;

double total=0;

struct buy_item
	{
		string name;
		string item;
		int amount;
		double price;
		double ntotal;
	};
	cout<<"\n\t\t";
	        cout<<"_______________________________________________________";
	        cout<<"\n\t\t";
	        cout<<"|  Order No:   |     Item Name    |  Price | In Stock|";
	        cout<<" \n\t\t";
	        cout<<"_______________________________________________________";
	        cout<<"\n\t\t";
	        cout<<"|      1       |  Birthday Cakes  |  1400  |  30     |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      2       |  Cookies         |  100   |  200    |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      3       |  Pancakes        |  150   |  250    |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      4       |  Brownies        |  150   |  50     |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      5       |  Hot Pudding     |  650   |  20     |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      6       |  Grain Breads    |  350   |  50     |"<< endl;
	        cout<<"\n\t\t";
	        cout<<"|      7       |  cold Drinks     |  750   |  50     |"<< endl;
	        cout<<"\n\t\t";
	

int i,n=100;
buy_item item[n];

string name1;
	cout <<"\n"<<setw(30)<< "Enter Your Name    : "; 
	cin >> name1 ;
	cout<<"\t\t\t\t .....Enter 0 after the end of the purchase....."<<endl;
for  (i=0; i<n ;i++){

	
	cout <<setw(30) << "Input Type of item  : "; 
	cin >> item[i].item; 
	
	if(item[i].item=="0") {goto total_salary;	}                               


	
	cout <<setw(30) << "input Amount : "; 
	cin >> item[i].amount ;
	cout<<"\n"<<endl;
	
	{
		if(item[i].item=="1"){
			item[i].price =1400;
		}else if(item[i].item=="2"){
			item[i].price=100;
		}else if(item[i].item=="3"){
			item[i].price=150;
		}else if(item[i].item=="4"){
			item[i].price=150;
		}else if(item[i].item=="5"){
			item[i].price=650;
		}else if(item[i].item=="6"){
			item[i].price=350;
		}else if(item[i].item=="7"){
			item[i].price=750;
		}
	}
	{
		if(item[i].item=="1"){
			item[i].item="Birthday cakes";
		}else if(item[i].item=="2"){
			item[i].item="Cookies";
		}else if(item[i].item=="3"){
			item[i].item="Pancakes";
		}else if(item[i].item=="4"){
			item[i].item="Brownies";
		}else if(item[i].item=="5"){
			item[i].item="Hot Pudding";
		}else if(item[i].item=="6"){
			item[i].item="Grain Breads";
		}else if(item[i].item=="7"){
			item[i].item="Cold Drinks";
		}
	}
	item[i].ntotal=item[i].price*item[i].amount;
	total=total+item[i].ntotal;
	
	


	//start file and save sale detailsa
	ifstream file("customerdata.txt"); 
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		
		mf<<setw(15)<<name1;

		mf<<setw(25)<<item[i].item<<setw(9)<<"Rs"<<setw(3)<<item[i].price<<".00"<<setw(8)<<"x"<<item[i].amount<<setw(10)<<"Rs"<<setw(4)<<item[i].ntotal<<".00"<<endl;
		mf.close();
		//end file and save sale detailsa
		
		//start create bill
		ifstream file2("bill.txt");
	string content2;
	string line2;

	while(getline(file2,line2)){
		content2+=line2 +"\n";
		
	}
	file.close();
		ofstream mf1;
		mf1.open("bill.txt");
		mf1 << content2;	
		mf1<<setw(19)<<item[i].item<<setw(5)<<item[i].price<<".00"<<setw(5)<<"x"<<item[i].amount<<setw(10)<<"Rs"<<setw(4)<<item[i].ntotal<<".00"<<endl;
		mf1.close();
		
		
		
		
}

//total salary print text file
total_salary:
{	
ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		mf<<setw(85)<<"___________Rs"<<setw(4)<<total<<".00\n"<<endl;
		mf.close();
		//end total salary print text file
		
}



//print bill
{
	system("cls");
cout<<"\n``````````````````````````````````````````````\n"<<endl;	
cout<<"    Amber Bakery  "<<endl;


cout<<"No:26,kuliyapitiya road , Narammala\n"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<" Customer Name: "<<name1<<"\n"<<endl;

	ifstream file3("bill.txt");
	string content3;
	string line3;

	while(getline(file3,line3))
	

		 cout<<line3<<"\n";
		file3.close();

cout<<"************************************************"<<endl;
cout<<"\t\t     Total "<<setw(17)<<"Rs "<<total<<".00"<< endl;
cout<<"************************************************"<<endl;

cout<<"___________________________________________\n"<<endl;

		///open bill end
		

		//clear bill text file data
		std::ofstream ofs;
		ofs.open("bill.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		
		system("pause");
		system("cls");

	}
	
	
	cout<<"\n\n\n\n\n\n\t\t\t\tThanks for getting our service"<<endl;
	cout<<"\n\n\n\n\n\n\t\t\t\tPlease come back"<<endl;
	
		int a;
	for(a=0; a<100000000; a++)
	{
		
		cout << "";
		
	}
	system("cls");
	mainmenu();
	exit(0);


} ;

