#include <iostream> 
#include <string>

using namespace std;

class GPA
{
public:

	int marks;
	float grade;
	int tch;
	float gpacal;

	GPA()
	{
		marks = 0;
		grade = 0;
		tch = 0;
		gpacal = 0;
	}

	void setMarks(int mark)
	{
		marks = mark;

		if (marks >= 90)
		{
			grade = 4;
		}

		else
		{
			if (marks >= 85)
			{
				grade = 3.7;
			}

			else{
				if (marks >= 80)
				{
					grade = 3.4;

				}

				else{
					if (marks >= 75)
					{
						grade = 3;
					}

					else{
						if (marks >= 70)
						{
							grade = 2.7;
						}

						else {
							if (marks >= 65)
							{
								grade = 2.4;
							}

							else
							{
								if (marks >= 60)
								{
									grade = 2;
								}

								else{
									if (marks >= 55)
									{
										grade = 1.7;
									}
									else {
										grade = 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	float getMarks()
	{
		return grade;
	}

	void setTch(int th)
	{
		tch = tch + th;
	}

	int getTch()
	{
		return tch;
	}

	void setCal(float mark, int creditHour)
	{
		gpacal = gpacal + (mark*creditHour);
	}

	float getCal()
	{
		return gpacal;
	}
};



int main()
{
	GPA calgpa[100];
	int mark, creditHour, hour, size, option, maxst = 100,range,to;
	float gpa[100];
	char choice;

	do{
		cout << "1: Enter the marks for Students." << endl;
		cout << "2: Calculate GPA." << endl;
		cout << "3: Calculate GPA in given range." << endl;
		cout << "4: Calculate Maximum GPA " << endl;
		cout << "5: Calculate Minimum GPA " << endl;
		cout << "6: EXIT " << endl;
		cout << " Enter the Option: " << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "Enter the Number of Students: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 1; j <= 5; j++)
				{
					cout << "enter marks of Subject " << j << " : ";
					cin >> mark;
					calgpa[i].setMarks(mark);
					cout << "enter credit hours of Subject " << j << " : ";
					cin >> hour;
					calgpa[i].setTch(hour);
					calgpa[i].setCal(calgpa[i].getMarks(), hour);
				}

				gpa[i] = (calgpa[i].getCal()) / calgpa[i].getTch();
			}
			break;

		case 2:
			for (int i = 0; i < size; i++)
			{
				cout << " Student " << i << "GPA is: " << gpa[i] << endl;
			}
			break;
		case 3:
			cout << "Enter the range to find GPA ";
			cin >> range;
			cout << " to ";
			cin >> to;
			for (int j = range; j < to; j++)
			{
				cout << " Student " << j << " GPA is: " << gpa[j] << endl;
			}
	
		}

		
		cout << "enter Y to perform another option: ";
		cin >> choice;
	} while (choice == 'y');


	return 0;
}

