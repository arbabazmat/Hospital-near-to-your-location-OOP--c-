#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<windows.h>
#include<fstream>
using namespace std;
fstream file;
class Patient
{
private:
	string name, CNIC;
	 char Gender[6];
public:
	Patient()
	{
		name = " ";
		CNIC = " ";
		
	}
	void Get_data()
	{
		
		cout << "****-------------Enter the name of Patient ---------------------------------------******* ::";
		cin >> name;
		cout << "****-------------Enter the CNIC number of Patient---------------------------------******* ::" ;
		cin >> CNIC;
		cout << "****\t-----------Enter the gender of Patient -------------------------------------******* :: " ;
		cin >> Gender;

		file<<"\nPatient Information:\n Name of Patient: "<<name<<"\nCNIC number of Patient: "<<CNIC<<"\nGender of Patient: "<<Gender<<endl<<endl<<endl;
	}
	void Patient_information()
	{
		cout << "Name of Patient ::" << name << endl;
		cout << "CNIC number of Patient :: " << CNIC << endl;
		cout << "Patient Gender :: " << Gender << endl;
 	
	}
	

};
class Location :public Patient
{
private:
	string location;
	Patient P;
public:
	void Get_data(string locat)
	{
		P.Get_data();
		location = locat;
		
	}
	void Patient_information()
	{
		
		P.Patient_information();
		cout << "Patient location : " << location << endl;
	}
};
class rawid_road :public Location
{
private:
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");
		system("color B5");

		cout << "\t\tYour nearest hospitals" << endl;
		cout << "\t******/// Maternity Hospital //////*****" << endl;
		cout << "\t******/// Rehmat Hospital //////******" << endl;
		cout << endl;
		cout << "\tEnter (1) for Maternity Hospital " << endl
			<< "(2) for Rehmat hospital " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Maternity_Hospital();
			break;
		case 2:
			Rehmat_Hospital();
			break;
		default:
			cout << " Invalid entry " << endl;
		}
	
	}
	void Maternity_Hospital()
	{
		system("cls");
		system("color 3C");
		cout << "\tWelcome to Maternity_Hospital " << endl;
		cout << "Opening and closing time" << endl;
		cout << "Thursday  8:30AM to 11:30PM " << endl;
		cout << "Friday    8:30AM to 11:30PM" << endl;
		cout << "Saturday  8:30AM to 11:30PM" << endl;
		cout << "Sunday    8:30AM to 11:30PM" << endl;
		cout << "Monday    8:30AM to 11:30PM" << endl;
		cout << "Tuesday   8:30AM to 11:30PM" << endl;
		cout << "Wednesday 8:30AM to 11:30PM" << endl;
		cout << "\tEnter (3) if you want to Rehmat Hospital otherwise enter (0)" << endl;
		cin >> opetion;
		if (opetion == 3)
		{
			Rehmat_Hospital();
		}
	}
	void Rehmat_Hospital()
	{

		system("cls");

		system("color C3");
		cout << "\tWelcome to Rehmat Hospital" << endl;
		cout << "Opening and Closing time" << endl;
		cout <<"Thursday 24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday   24 hours" << endl
			<< "Wednesday 24 hours " << endl
			<< "Contact: +92 53 3521251" << endl;
		if (opetion != 3)
		{
			cout << "\n\nEnter (3) if you to check  hospital otherwise (0) " << endl;
			cin >> opetion;
			if (opetion == 3)
			{
				Maternity_Hospital();
			}
		}
		else if (opetion == 3)
		{
			cout << "\n\nEnter (0) " << endl;
			cin >> opetion;
		}
	}
};
class Jinnah_Road :public Location
{
private: 
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");

		system("color 5C");
		cout << "\t\tYour nearest hospitals" << endl;
		cout << "\t******/// Ali Children Hospital           //////*****" << endl;
		cout << "\t******/// Fauji Foundation Medical Centre //////******" << endl;
		cout << "Enter (1) for Ali chidren Hospital       " << endl
			<< "       (2) for Fauji Foundation Hospital  " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Ali_children();
			break;
		case 2:
			Fauji_Foundation();
			break;
		default:
			cout << " Invalid Entry " << endl;

		}
	}
	void Ali_children()
	{
		system("cls");
		system("color 3A");
		cout << "\t Welcome to Ali Children Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday	  24 hours" << endl
			<< "Wednesday 24 hours" << endl;
		cout << " Contact number : +92 53 3515111" << endl;
		if (opetion != 3)
		{
		cout << "\tEnter (3) if you want to check  Fauji Foundation Hospital otherwise enter (0)" << endl;
		cin >> opetion;
		
			if (opetion == 3)
			{
				Fauji_Foundation();
			}
		}
		else if (opetion == 3)
		{
			cout << "\n\nEnter (0) " << endl;
			cin >> opetion;
		}
	}
	void Fauji_Foundation()
	{
		system("cls");

		system("color B2");
		cout << "\t Welcome to Fauji Foundation Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Friday    8:30AM to  3PM" << endl;
		cout << "Saturday  8:30AM to  3PM" << endl;
		cout << "Sunday    closed        " << endl;
		cout << "Monday    8:30AM to  3PM" << endl;
		cout << "Tuesday   8:30AM to  3PM" << endl;
		cout << "Wednesday 8:30AM to  3PM" << endl;
		cout << "Contact Number +92 53 3515296 " << endl;
		if (opetion != 3)
		{
			cout << "\n\nEnter (3) if you to check  hospital otherwise (0) " << endl;
			cin >> opetion;
			if (opetion == 3)
			{
				Ali_children();
			}
		}
		else if (opetion == 3)
		{
			cout << "\n\nEnter (0) " << endl;
			cin >> opetion;
		}
	}
};
class model_road :public Location
{
private:
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");

		system("color B5");
		cout << "\t\tYour nearest hospitals" << endl;
		cout << "\t******/// Doctor's  Hospital     //////*****" << endl;
		cout << "\t******/// City Hospital                 //////*****" << endl;
		cout << "\t******/// Shifa Hospital                 //////*****" << endl;
		cout << "Enter (1) for Doctor's Hospital       " << endl
			<< "       (2) for City  Hospital  " << endl
			<< "       (3) for Shifa  Hospital  " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Doctors();
			break;
		case 2:
			City();
			break;
		case 3:
			Shifa();
			break;
		default:
			cout << "Inalid Entry" << endl;
		}
	}
	void Doctors()
	{
		system("cls");

		system("color 4B");
		cout << "\t Welcome to Doctor's Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday	  24 hours" << endl
			<< "Wednesday 24 hours" << endl;
		cout << " Contact number :  +92 53 3608180 " << endl;
		cout << "\n\nEnter(4) if you want to check City hospital and (5) for Shifa Hospital other wise enter(0)" << endl;
			cin >> opetion;
			if (opetion == 4)
			{
				City();
			}
			else if (opetion == 5)
			{
				Shifa();
			}
	}
	void City()
	{
		system("cls");

		system("color 5B");
		cout << "\t Welcome to City Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  7AM to 11PM " << endl;
		cout << "Friday    7AM to 11PM" << endl;
		cout << "Saturday  7AM to 11PM" << endl;
		cout << "Sunday    7AM to 11PM" << endl;
		cout << "Monday    7AM to 11PM" << endl;
		cout << "Tuesday   7AM to 11PM" << endl;
		cout << "Wednesday 7AM to 11PM" << endl;
		cout << " Contact number :  +92 53 3608186 " << endl;
		cout << "\n\nEnter(4) if you want to check Shifa hospital and (5) for Doctor's Hospital other wise enter (0)" << endl;
		cin >> opetion;
		if (opetion == 4)
		{
			Shifa();
		}
		else if (opetion == 5)
		{
			Doctors();
		}
	}
	void Shifa()
	{

		system("cls");

		system("color DA");
		cout << "\t Welcome to Shifa Hopital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday	  24 hours" << endl
			<< "Wednesday 24 hours" << endl;
		cout << " Contact number :  +92 53 3608800 " << endl;
		cout << "\n\nEnter(4) if you want to check City hospital and (5) for Doctors Hospital other wise enter(0)" << endl;
		cin >> opetion;
		if (opetion == 4)
		{
			City();
		}
		else if (opetion == 5)
		{
			Doctors();
		}
	}
};
class johar_road :public Location
{
private:
	int opetion;
public:
	void Hopital_information()
	{
		system("cls");

		system("color C2");
		cout << "\t\tYour nearest hospitals" << endl;
		cout << "\t******/// Maryam  Hospital     //////*****" << endl;
		cout << "\t******/// Malik Haider Hospital                 //////*****" << endl;
		cout << "\n\n Enter (1) for Maryam Hospital and (2) for Malik Haider Hospital " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Maryam();
			break;
		case 2:
			Haider();
			break;
		default:
			cout << "Invalid Entery" << endl;
		}
	}
	void Maryam()
	{

		system("cls");

		system("color B1");
		cout << "\t Welcome to Maryam Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday	  24 hours" << endl
			<< "Wednesday 24 hours" << endl;
		cout << " Contact number : +92 53 3709340 " << endl;
		cout << "\n\n\tEnter (3) if you want to check Malik Haider Hospital otherwise enter (0)" << endl;
		cin >> opetion;
		if (opetion == 3)
		{
			Haider();
		}
	}
	void Haider()
	{
		system("cls");

		system("color ED");
		cout << "\t Welcome to Malik Haider Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  24 hours" << endl
			<< "Friday    24 hours" << endl
			<< "Saturday  24 hours" << endl
			<< "Sunday    24 hours" << endl
			<< "Monday    24 hours" << endl
			<< "Tuesday	  24 hours" << endl
			<< "Wednesday 24 hours" << endl;
		cout << " Contact number : +92 53 3601444 " << endl;
		cout << "\n\n\tEnter (3) if you want to check Maryam Hospital otherwise enter (0)" << endl;
		cin >> opetion;
		if (opetion == 3)
		{
			Maryam();
		}
	}
};
class kamoki_Road :public  Location
{
private :
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");

		system("color F2");
		cout << "\t\tHospital on that road" << endl;
		cout << "\t******/// Ghulam Muhammad Memorial Hospital    //////*****" << endl;
		cout << "\t******/// Al_Shafi Hospital                    //////*****" << endl;
		cout << "\t******/// New family Hospital                  //////*****" << endl;
		cout << "\t******/// Ravi  Hospital                     //////*****" << endl;
		cout << "\t******/// Chaudhry Hospital                      //////*****" << endl;
		cout << "\t******/// Doctor Ikram Hospital                //////*****" << endl;
		cout << "\t******/// Aiziz Bhatti Shaheed Hospital        //////*****" << endl;
		cout << "Enter (1) for Ghulam Muhammad Memorial Hospital       " << endl
			<< "       (2) for Family Hospital  " << endl
			<< "       (3) for Ravi Hospital  " << endl
			<< "       (4) for Chaudhry Hospital  " << endl
			<< "       (5) for Ikram Hospital  " << endl
			<< "       (6) for Aiziz Bhatti Hospital  " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Memorial();
			break;
		case 2:
			Family();
			break;
		case 3:
			Ravi();
			break;
		case 4:
			Chaudhry();
			break;
		case 5:
			Ikram();
		case 6: 
			Aiziz_Bhatti();
			break;
		default:
			cout << "Invalid Entry " << endl;
		}
	}
	void Memorial()
	{

		system("cls");

		system("color 5F");
		cout << "\t Welcome to Ghulam Muhammad Memorial Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  9AM to 11PM " << endl;
		cout << "Friday    9AM to 11PM" << endl;
		cout << "Saturday  9AM to 11PM" << endl;
		cout << "Sunday    9AM to 11PM" << endl;
		cout << "Monday    9AM to 11PM" << endl;
		cout << "Tuesday   9AM to 11PM" << endl;
		cout << "Wednesday 9AM to 11PM" << endl;
		cout << " Contact number :  +92 53 3608772 " << endl;
		cout<< " \n\nEnter (9) if you want to check  Family Hospital    " << endl
			<< "(10)   for Ravi hospital       " << endl
			<< "(11)   for Chaudhry Hospital       " << endl
			<< "(12)   for Ikram Hospital        " << endl
			<< "(13)   for Aiziz Bhatti Hospital " << endl;
		cin >> opetion;
	    if (opetion == 9)
		{
			Family();
		}
		else if (opetion == 10)
		{
			Ravi();
		}
		else if (opetion == 11)
		{
			Chaudhry();
		}
		else if (opetion == 12)
		{
			Ikram();
		}
		else if (opetion == 13)
		{
			Aiziz_Bhatti();
		}
	}
	void Family()
	{
		system("cls");

		system("color 21");
		cout << "\t Welcome to New Family Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  9AM to 10PM " << endl;
		cout << "Friday    9AM to 10PM " << endl;
		cout << "Saturday  9AM to 10PM " << endl;
		cout << "Sunday    Closed      " << endl;
		cout << "Monday    9AM to 10PM " << endl;
		cout << "Tuesday   9AM to 10PM " << endl;
		cout << "Wednesday 9AM to 10PM " << endl;
		cout << " Contact number :  +92 53 3606812 " << endl;
		cout << " \n\nEnter (9) if you want to check Ghulam Muhammad Memorial Hospital    " << endl
			<< "(10)   for Ravi hospital       " << endl
			<< "(11)   for Chaudhry Hospital       " << endl
			<< "(12)   for Ikram Hospital        " << endl
			<< "(13)   for Aiziz Bhatti Hospital " << endl;
		cin >> opetion;
		if (opetion == 9)
		{
			Memorial();
		}
		else if (opetion == 10)
		{
			Ravi();
		}
		else if (opetion == 11)
		{
			Chaudhry();
		}
		else if (opetion == 12)
		{
			Ikram();
		}
		else if (opetion == 13)
		{
			Aiziz_Bhatti();
		}
	}
	void Ravi()
	{

		system("cls");

		system("color 23");
		cout << "\t Welcome to Ravi Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout<< "Friday    Closed   " << endl
			<< "Saturday  24 hours " << endl
			<< "Sunday    24 hours " << endl
			<< "Monday    24 hours " << endl
			<< "Tuesday	  24 hours " << endl
			<< "Wednesday 24 hours " << endl;
		cout << " Contact number :  +92 53 3606608 " << endl;
		cout << " \n\nEnter (9) if you want to check Ghulam Muhammad Memorial Hospital    " << endl
			<< "(10)   for Family Hospital       " << endl
			<< "(11)   for Chaudhry Hospital       " << endl
			<< "(12)   for Ikram Hospital        " << endl
			<< "(13)   for Aiziz Bhatti Hospital " << endl;
		cin >> opetion;
		if (opetion == 9)
		{
			Memorial();
		}
		else if (opetion == 10)
		{
			Family();
		}
		else if (opetion == 11)
		{
			Chaudhry();
		}
		else if (opetion == 12)
		{
			Ikram();
		}
		else if (opetion == 13)
		{
			Aiziz_Bhatti();
		}
	}
	void Chaudhry()
	{

		system("cls");

		system("color 42");
		cout << "\t Welcome to Chaudhry Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Friday   24 hours   " << endl
			<< "Saturday  24 hours " << endl
			<< "Sunday    24 hours " << endl
			<< "Monday    24 hours " << endl
			<< "Tuesday	  24 hours " << endl
			<< "Wednesday 24 hours " << endl
			<< "Thursday  24 hours " << endl;
		cout << " Contact number :  +92 53 3605173 " << endl;
		cout << " \n\nEnter (9) if you want to check Ghulam Muhammad Memorial Hospital    " << endl
			<< "(10)   for Family Hospital       " << endl
			<< "(11)   for Ravi Hospital       " << endl
			<< "(12)   for Ikram Hospital        " << endl
			<< "(13)   for Aiziz Bhatti Hospital " << endl;
		cin >> opetion;
		if (opetion == 9)
		{

			Memorial();
		}
		else if (opetion == 10)
		{
			Family();
		}
		else if (opetion == 11)
		{
			Ravi();
		}
		else if (opetion == 12)
		{
			Ikram();
		}
		else if (opetion == 13)
		{
			Aiziz_Bhatti();
		}
	}
	void Ikram()
	{
		system("color 5A");
		system("cls");
		cout << "\t Welcome to Dr. Ikram Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Friday   24 hours   " << endl
			<< "Saturday  24 hours " << endl
			<< "Sunday    24 hours " << endl
			<< "Monday    24 hours " << endl
			<< "Tuesday	  24 hours " << endl
			<< "Wednesday 24 hours " << endl
			<< "Thursday  24 hours " << endl;
		cout << " Contact number :  +92 53 3605377 " << endl;
		cout << " \n\nEnter (9) if you want to check Ghulam Muhammad Memorial Hospital    " << endl
			<< "(10)   for Family Hospital       " << endl
			<< "(11)   for Ravi Hospital       " << endl
			<< "(12)   for Chaudhry Hospital        " << endl
			<< "(13)   for Aiziz Bhatti Hospital " << endl;
		cin >> opetion;
		if (opetion == 9)
		{
			Memorial();
		}
		else if (opetion == 10)
		{
			Family();
		}
		else if (opetion == 11)
		{
			Ravi();
		}
		else if (opetion == 12)
		{
			Chaudhry();
		}
		else if (opetion == 13)
		{
			Aiziz_Bhatti();
		}
	}
	void Aiziz_Bhatti()
	{
		system("cls");

		system("color 15");
		cout << "\t Welcome to District Head Quarter Mamda Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Friday   24 hours   " << endl
			<< "Saturday  24 hours " << endl
			<< "Sunday    24 hours " << endl
			<< "Monday    24 hours " << endl
			<< "Tuesday	  24 hours " << endl
			<< "Wednesday 24 hours " << endl
			<< "Thursday  24 hours " << endl;
		cout << " Contact number :  +92 53 9260104 " << endl;
		cout << " \n\nEnter (9) if you want to check Ghulam Muhammad Memorial Hospital    " << endl
			<< "(10)   for Family Hospital       " << endl
			<< "(11)   for Ravi Hospital       " << endl
			<< "(12)   for Chaudhry Hospital       " << endl
			<< "(13)   for Ikram Hospital        " << endl;
		cin >> opetion;
		if (opetion == 9)
		{
			Memorial();
		}
		else if (opetion == 10)
		{
			Family();
		}
		else if (opetion == 11)
		{
			Ravi();
		}
		else if (opetion == 12)
		{
			Chaudhry();
		}
		else if (opetion == 13)
		{
			Ikram();
		}
	}
};
class GT_Road :public Location
{
private:
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");

		system("color 63");
		cout << "\t\tYour near Hospitals" << endl;
		cout << "\t******/// Butt  Hospital near Service Industry Chaudhry    //////*****" << endl;
		cout << "Press (1) for to check time table and contacts " << endl;
		cin >> opetion;
		if (opetion == 1)
		{
			Butt_hospital();
		}
	}
	void Butt_hospital()
	{
		system("cls");

		system("color 34");
		cout << "\t Welcome to Butt Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Friday   24 hours   " << endl
			<< "Saturday  24 hours " << endl
			<< "Sunday    24 hours " << endl
			<< "Monday    24 hours " << endl
			<< "Tuesday	  24 hours " << endl
			<< "Wednesday 24 hours " << endl
			<< "Thursday  24 hours " << endl;
		cout << " Contact number :  +92 53 3538082 " << endl;
		cout << "\n\n Press 0 to get your Input data " << endl;
		cin >> opetion;
	}
};




class bypass_Road :public Location
{
private:
	int opetion;
public:
	void Hospital_information()
	{
		system("cls");

		system("color BC");
		cout << "\t\tYour near hospitals on that road " << endl;
		cout << "\t******///   Inayat Children Hospital  before the bridge of stop gala from GTS_chock side    //////*****" << endl;
		cout << "\t******///   Amir Hospital   in stop gala                                              //////*****" << endl;
		cout << "\n\n Enter (1) for Inayat Hospital and (2) for Amir Hospital " << endl;
		cin >> opetion;
		switch (opetion)
		{
		case 1:
			Inayat();
			break;
		case 2:
			Amir();
			break;
		default:
			cout << "   Invalid Entry   " << endl;
		}
	}
	void Inayat()
	{
		system("cls");

		system("color CB");
		cout << "\t Welcome to Inayat Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  9AM to 10PM " << endl;
		cout << "Friday    9AM to 10PM " << endl;
		cout << "Saturday  9AM to 10PM " << endl;
		cout << "Sunday    9am to 10PM " << endl;
		cout << "Monday    9AM to 10PM " << endl;
		cout << "Tuesday   9AM to 10PM " << endl;
		cout << "Wednesday 9AM to 10PM " << endl;
		cout << " Contact number :  +92 3136405625   " << endl;
		cout << "\n\nEnter (3) if you to check Amir hospital otherwise (0) " << endl;
		cin >> opetion;
		if (opetion == 3)
		{
			Amir();
		}
	}
	void Amir()
	{
		system("cls");

		system("color 3B");
		cout << "\t Welcome to Amir Hospital " << endl;
		cout << "Opening and closing time " << endl;
		cout << "Thursday  12AM to 11:30PM " << endl;
		cout << "Friday    12AM to 11:30PM " << endl;
		cout << "Saturday  12AM to 11:30PM " << endl;
		cout << "Sunday    12AM to 11:30PM " << endl;
		cout << "Monday    12AM to 11:30PM " << endl;
		cout << "Tuesday   12AM to 11:30PM " << endl;
		cout << "Wednesday 12AM to 11:30PM " << endl;
		cout << " Contact number :  +92 53 3510308   " << endl;
//		if (opetion != 3)
//		{
//			cout << "\n\nEnter (3) if you to check  hospital otherwise (0) " << endl;
//			cin >> opetion;
//			if (opetion == 3)
//			{
//				Amir();
//			}
//		}
//		else if (opetion == 3)
//		{
			cout << "\n\nEnter (2) check input Data: " << endl;
			cin >> opetion;
		}
	
};
int main()
{
	
	system("cls");
	int opetion;
system("color F6");
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    ( Hospital near to your location ) ";
 Sleep(1500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    DEVELOPED BY\a :";
 Sleep(1500);
 cout<<"  \n \t\t    \t\t\tArbab Azmat\a";
 
 Sleep(1500);

 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    SUBMITTED TO :\a";
 Sleep(1500);
 cout<<"  \n \t\t    \t\t\tFahad Sabah\a \n";
 Sleep(1500);
  system("cls");
 
 
 
	string possward = "123",possrd;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t    Press (1) for continue" << endl;
	cin >> opetion;
	system("cls");
 
	if (opetion == 1)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n -------------------Enter the Password---------------------------------: "  ;
		cin >> possrd;
		if (possrd == possward)
		{
			Sleep(1000);
			rawid_road ra;
			Jinnah_Road  J;
			model_road mo;
			johar_road jo;
			kamoki_Road ka;
			GT_Road G;
			bypass_Road by;
			string location;
			
			do
			{
					file.open("UsersHistory.txt", ios::app);
			 system("cls");
					cout  << "\n\n\n\n\n\n\n\nEnter you location near the given list of roads " << endl;
					cout << "\n\n\t1.rawid_road " << endl
						<< "\t2. Jinnah_Road " << endl
						<< "\t3. model_road   " << endl
						<< "\t4.kamoki_Road  " << endl
						<< "\t5. johar_road " << endl
						<< "\t6. GT_Road    " << endl
						<< "\t7.bypass_Road " << endl;
				cin >> location;
				cout << endl;
				ra.Get_data(location);
				file<<"Location: "<<location<<"\n";
				if (location == "rawid_road")
				{
					ra.Hospital_information();
				}
				else if (location == "Jinnah_road")
				{
					J.Hospital_information();
				}
				else if (location == "model_road")
				{
					mo.Hospital_information();
				}
				else if (location == "johar_road")
				{
					jo.Hopital_information();
				}
				else if (location == "kamoki_road")
				{
					ka.Hospital_information();
				}
				else if (location == "GT_road")
				{
					G.Hospital_information();
				}
				else if (location == "bypass_road")
				{
					by.Hospital_information();
				}
				else
				{
					system("cls");
					cout << " Your location is out of Range " << endl
						<< "If you near the given list of roads " << endl
						<< "then enter any one near road " << endl;
					cout << "\n\n1.rawid_road " << endl
						<< "2. Jinnah_Road " << endl
						<< "3. model_road   " << endl
						<< "4.kamoki_Road  " << endl
						<< "5. johar_road " << endl
						<< "6. GT_Road    " << endl
						<< "7.bypass_Road " << endl;
				}

				cout << "\n\n\n" << endl;
				cout << "Patient information" << endl;
				
				ra.Patient_information();
				cout << "Enter (1) for continue and (0) for exit" << endl;
				cin >> opetion;
				if (opetion == 0)
				{
					goto ab;
				}

			} while (1);
		ab:



			cout << endl << endl;
		}
	}
	_getche();   
}

