#include <iostream>
#include <vector>
#include <string>


class individual
{
private:
	std::string f_Name;
	std::string s_Name;
	std::string notes;
	std::string subject;
	std::string username;
	int age;
	int level;
	int math, english, physics, biology, chemistry;
	bool status;


public:
	std::string usernameinst;
	std::string f_Nameinst;
	std::string s_Nameinst;
	std::string p_subject;
	int p_math, p_english, p_physics, p_biology, p_chemistry;
	int p_age;
	int p_level;
	bool p_status;

	individual()
		:f_Name("Unknown"), s_Name("Unknown"), notes("not yet"), subject("Unknown"), username("Unknown"){}

	individual(std::vector <individual> instance, int position)
	{
		f_Name = instance[position].f_Nameinst;
		s_Name = instance[position].f_Nameinst;
		subject = instance[position].p_subject;
		username = instance[position].usernameinst;
		age = instance[position].p_age;
		level = instance[position].p_level;
		math = instance[position].p_math;
		english = instance[position].p_english;
		physics = instance[position].p_physics;
		biology = instance[position].p_biology;
		chemistry = instance[position].p_chemistry;
		status = instance[position].p_status;
	}

};



class teacher :public individual
{
public:
	void new_Student(int num = 1)
	{
		for (int i = 0; i < num; i++)
		{

		}
	}

	void add_it(std::vector <individual>& tabled, int num = 1)
	{
		for (int i = 0; i < num; i++)
		{
			//std::cin >> tabled;
		}
		
	}
	void subject_marks(std::vector <individual>& tabled)
	{
		int select;
		std::cout << "To enter Marks for Math Enter : 1, English Enter : 2, Physics Enter : 3, Biology : 4, Chemistry Enter : 5" << std::endl;
		std::cin >> select;
		if (select == 1)
		{
			std::cout << "Inputing all students for Math. " << std::endl;
			std::cout << "Student Name(s) " << "\t" << "Enter Mark." << std::endl;

				for (int i = 0; i < tabled.size(); i++)
				{
					std::cout << tabled[i].f_Nameinst << " " << tabled[i].s_Nameinst << " --> ";
					std::cin >> tabled[i].p_math;
					std::cout << tabled[i].s_Nameinst << "Mark --> " << tabled[i].p_math << std::endl;
					std::cout << std::endl;
				}
		}
		else if (select == 2)
		{
			std::cout << "Inputing all students for English. " << std::endl;
			std::cout << "Student Name(s) " << "\t" << "Enter Mark." << std::endl;

			for (int i = 0; i < tabled.size(); i++)
			{
				std::cout << tabled[i].f_Nameinst << " " << tabled[i].s_Nameinst << " --> ";
				std::cin >> tabled[i].p_english;
				std::cout << tabled[i].s_Nameinst << "Mark --> " << tabled[i].p_english << std::endl;
				std::cout << std::endl;
			}
		}
		else if (select == 3)
		{
			std::cout << "Inputing all students for Physics. " << std::endl;
			std::cout << "Student Name(s) " << "\t" << "Enter Mark." << std::endl;

			for (int i = 0; i < tabled.size(); i++)
			{
				std::cout << tabled[i].f_Nameinst << " " << tabled[i].s_Nameinst << " --> ";
				std::cin >> tabled[i].p_physics;
				std::cout << tabled[i].s_Nameinst << "Mark --> " << tabled[i].p_physics << std::endl;
				std::cout << std::endl;
			}
		}
		else if (select == 4)
		{
			std::cout << "Inputing all students for Biology. " << std::endl;
			std::cout << "Student Name(s) " << "\t" << "Enter Mark." << std::endl;

			for (int i = 0; i < tabled.size(); i++)
			{
				std::cout << tabled[i].f_Nameinst << " " << tabled[i].s_Nameinst << " --> ";
				std::cin >> tabled[i].p_biology;
				std::cout << tabled[i].s_Nameinst << "Mark --> " << tabled[i].p_biology << std::endl;
				std::cout << std::endl;
			}
		}
		else if (select == 5)
		{
			std::cout << "Inputing all students for Chemistry. " << std::endl;
			std::cout << "Student Name(s) " << "\t" << "Enter Mark." << std::endl;

			for (int i = 0; i < tabled.size(); i++)
			{
				std::cout << tabled[i].f_Nameinst << " " << tabled[i].s_Nameinst << " --> ";
				std::cin >> tabled[i].p_chemistry;
				std::cout << tabled[i].s_Nameinst << "Mark --> " << tabled[i].p_chemistry << std::endl;
				std::cout << std::endl;
			}
		}
		else
		{
			std::cout << "option for Subject Selected is not available. \n";
		}

	}


	friend std::istream& operator >>(std::istream& input, std::vector <individual>& instance);

};

class student : public individual
{

public:
	std::vector <individual> details;
	std::string complaints;

	void viewer(std::vector <individual>& tabled, std::string useridentity)
	{
		for (int i = 0; i < tabled.size(); i++)
		{
			if (useridentity == tabled[i].usernameinst)
			{
				std::cout << "Hie: " << tabled[i].f_Nameinst << " \t" << tabled[i].s_Nameinst << std::endl;
				std::cout << "Maths " << "\t" << tabled[i].p_math << std::endl;
				std::cout << "English" << "\t" << tabled[i].p_english << std::endl;
				std::cout << "Physics" << "\t" << tabled[i].p_physics << std::endl;
				std::cout << "Biology" << "\t" << tabled[i].p_biology << std::endl;
				std::cout << "Chemistry" << "\t" << tabled[i].p_chemistry << std::endl;
			}
		}
	}

	void event_Log()
	{

	}

};



std::ostream& operator <<(std::ostream& output, student results)
{
	std::cout << results.f_Nameinst << "\t" << results.s_Nameinst << std::endl;
	std::cout << "Maths" << "\t" << results.p_math << std::endl;
	std::cout << "English" << "\t" << results.p_english << std::endl;
	std::cout << "Physics" << "\t" << results.p_physics << std::endl;
	std::cout << "Biology" << "\t" << results.p_biology << std::endl;
	std::cout << "Chemistry" << "\t" << results.p_chemistry << std::endl;
		return output;
}

bool compare(std::vector <individual> instance, std::string username)
{
	for (int i = 0; i < instance.size(); i++)
	{
		if (instance[i].usernameinst == username)
		{
			return i;
		}
	}
		return 0;
		
}
bool compare(std::vector <teacher> inst, std::string username)
{
	for (int i = 0; i < inst.size(); i++)
	{
		if (inst[i].usernameinst == username)
		{
			return i;
		}
	}
	return 0;

}

std::istream& operator >>(std::istream& input, std::vector <individual>& instantiate)
{
	individual inst;

	std::cin >> inst.f_Nameinst;
	std::cin >> inst.s_Nameinst;
	std::cin >> inst.p_level;
	std::cin >> inst.p_age;
	instantiate.push_back(inst);
	return input;
}




/*
std::istream& operator >>(std::istream& input, std::vector <individual>& instance)
{
	int sized = instance.size() - 1;

	std::cin >> instance[sized].f_Nameinst;
	std::cin >> instance[sized].s_Nameinst;
	std::cin >> instance[sized].p_level;
	std::cin >> instance[sized].p_age;
	return input;
}
*/



std::ostream& operator<<(std::ostream& output, std::vector <individual> instance)
{
	for (int i = 0; i < instance.size(); i++)
	{
		std::cout << instance[i].f_Nameinst << "\t" << instance[i].s_Nameinst << "\t" << instance[i].p_level << "\t" << instance[i].p_age << "\n";
		return output;
	}
}

std::string readname()
{
	std::string username;
	std::cout << "Enter first/username name: ";
	std::cin >> username;
	return username;

}

int readchoice()
{
	int userchoice;
	std::cout << "view assigned subjects enter: 1 \n" << "To make a new student entry enter: 2 \n " << "to make a student mark entry, enter: 3 \n" << "to view table of student marks in a subject enter: 4 \n";
	std::cin >> userchoice;
	return userchoice;

}


std::string readuserline()
{
	std::string lineget;

	std::string starter;

	std::cin >> starter;

	getline(std::cin, lineget);

	std::string combined = starter + " " + lineget;

	return combined;

}

int main()
{
	std::vector <individual> collection;
	individual tab1, tab2, tab3, tab4;

	tab1.f_Nameinst = "Miles";
	tab1.s_Nameinst = "Rodgers";
	tab1.usernameinst = "milesrod";
	tab1.p_math = 99;
	tab1.p_age = 14;
	tab1.p_level = 8;


	tab2.f_Nameinst = "danny";
	tab2.s_Nameinst = "harris";
	tab2.usernameinst = "harryman";
	tab2.p_physics = 79;
	tab2.p_age = 15;
	tab2.p_level = 8;

	tab3.f_Nameinst = "calvin";
	tab3.s_Nameinst = "gryffin";
	tab3.usernameinst = "galantis";
	tab3.p_subject = "Math";
	tab3.p_age = 14;
	tab3.p_level = 8;
	tab3.p_biology = 55;
	tab3.p_math = 67;
	tab3.p_physics = 77;
	tab3.p_english = 78;
	tab3.p_chemistry = 88;


	collection.push_back(tab1);
	collection.push_back(tab2);
	collection.push_back(tab3);


	std::vector <teacher> identities;

	teacher id1, id2, id3, id4;

	id1.f_Nameinst = "Mataruse";
	id1.s_Nameinst = "Sam";
	id1.p_subject = "English";
	id1.p_biology = id1.p_chemistry = id1.p_math = id1.p_physics = 0;
	id1.p_english = 1;

	id2.f_Nameinst = "Tazvida";
	id2.s_Nameinst = "Munyaradzi";
	id2.p_subject = "Biology";
	id2.p_chemistry = id2.p_english = id2.p_math = id2.p_physics = 0;
	id2.p_biology = 1;

	id3.f_Nameinst = "Makanda";
	id3.s_Nameinst = "Alist";
	id3.usernameinst = "home";
	id3.p_subject = "Math";
	id3.p_biology = id3.p_chemistry = id3.p_english = id3.p_physics = 0;
	id3.p_math = 1;

	identities.push_back(id1);
	identities.push_back(id2);
	identities.push_back(id3);


	/*std::cin >> collection;

	std::cin >> tab3.p_math;
	collection.push_back(tab3);
	std::cout << collection[2].usernameinst << "\t" << collection[2].p_math << "\n";
	*/
	std::cout << "Access as Student Or Staff,for staff Enter 0, for student enter 1 : ";
	std::cin >> tab4.p_status;
	if (0 <= tab4.p_status < 2)
	{
		std::string m_fname = readname();
		//run compare for a username and proceed with username if found
		
		if (compare(identities, m_fname) != 0 && tab4.p_status == 0 || compare(collection, m_fname) != 0 && tab4.p_status == 0) //staff
		{
			//access granted
			int choices = readchoice();
			//gives the user choices to select on the menue outputed.


			if(choices == 1)//the subjects assigned to the teacher
			{
				std::cout << "welcome staff member: " << m_fname << std::endl;
				int positioned = compare(identities, m_fname);
				std::cout << "you are to teach the students: " << identities[positioned].p_subject << std::endl;
				return 0;
			}
			else if(choices == 2)//the new comer student entry
			{
				std::cout << "please enter information in the fomart below.\n";
				std::cout << "First Name: \t" << "Second Name: \t" << "Level: \t" << "Age: \n";
				std::cin >> tab4.f_Nameinst;
				std::cin >> tab4.s_Nameinst;
				std::cin >> tab4.p_level;
				std::cin >> tab4.p_age;

				collection.push_back(tab4);

				std::cout << "the data has been added for " << tab4.f_Nameinst << std::endl;
				std::cout << collection << std::endl;
				return 0;
			}
			else if(choices == 3)//entering new marks choose subject
			{
				teacher input;
				
				input.subject_marks(collection);

				return 0;
			}
			else if(choices == 4)//student obtained marks table, select subject
			{
				return 0;
			}
			else {
				std::cout << "option not available \n";
				return 0;
			}
		}
		else if (compare(collection, m_fname) == 1 && tab4.p_status == 1)
		{
			
			//priviladged access
			
			int choices;

			std::cout << "For results enter: 1\n" << "for error pertition enter: 2\n";
			
			std::cin >> choices;

			if(choices == 1)//table of results
			{
				student visor;
				visor.viewer(collection, m_fname);
				return 0;
			}
			else if(choices == 2)//error or querry report 
			{
				std::cout << "please Type up the description of your querry and a response with soon be made to your contact details: " << std::endl;

				student logs;
				
				logs.complaints = readuserline();

				std::cout << "your complaint: --> " << logs.complaints << "\n ...has been sent, thank you for your feeback." << std::endl;
				return 0;
			}

		}
		else if(compare(collection, m_fname) == 1) {		//this route is when a user chooses inputs first name and second name
			std::string m_sname;
			std::cout << "Enter your second name: ";
			std::cin >> m_sname;
		}
		else{
			std::cout << "We Currently do not have anyone in our Staff & Student Enrrolling With That Name Please Approach Your Addministartion with this issue." << std::endl;
			return 0;
		}
	}
	else if (tab4.p_status = 5943)
	{
	int secret;
		std::cout << "welcome to the secret layer. " << std::endl;
		std::cin >> secret; 
	}
	else {
	std::cout << "We currently do not have that option. " << std::endl;
	return 0;
	}
}