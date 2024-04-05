#include<iostream>
#include<iomanip>
using namespace std;

	void consoleHeading() {
     cout << "            ********************************************************************* "<<  endl;
     cout << "            *                                                                   *" <<  endl;
     cout << "            *                     Welcome to the Student Transcript             *" <<  endl;
     cout << "            *                             Management System                    *" <<  endl;
     cout << "            *                                                                   *" <<  endl;
     cout << "            *********************************************************************" <<  endl;
	 cout<<endl<<endl<<endl;
	 }
	 
	 
float percentage(int a, int b, int c, int d, int e, int f) {
    return ((a + b + c + d + e + f) * 100) / 600;
}

string grade(int a){
	if(a>=85){
	 		return  "A";
		 }
		 else if(a>=72 && a<85){
	 		return "B";
		 }
		 else if(a>=60 && a<72){
	 		return "C";
		 }
		 else if(a>=50 && a<60){
	 		return "D";
		 }
		 else if(a<50){
	 		return "F";
		 }
		 else {
        return "Unknown"; 
    }
}
	 
	int obtmarks(int a, int b, int c, int d, int e, int f){
		return a+b+c+d+e+f ;
	} 
	
	
	string status(float a){
		if(a>2.0){
			return "Passed";
		}
		else if(a<2.0){
			return "Failed";
		}
		else {
        return "Unknown"; 
    }
	}
	
	float percentageI(float a){
		return (a*100)/100;
	}
	
	float gradePointI(float a){
		if(a>=85){
			return 4.0;
		}
		else if(a==84){
			return 3.9;
		}
		else if(a==83){
			return 3.8;
		}
		else if(a==82){
			return 3.7;
		}
		else if(a==81){
			return 3.6;
		}
		else if(a==80){
			return 3.5;
		}
		else if(a==79){
			return 3.4;
		}
		else if(a==78){
			return 3.4;
		}
		else if(a==77){
			return 3.3;
		}
		else if(a==76){
			return 3.3;
		}
		else if(a==75){
			return 3.2;
		}
		else if(a==74){
			return 3.2;
		}
		else if(a==73){
			return 3.1;
		}
		else if(a==72){
			return 3.0;
		}
		else if(a==71){
			return 2.9;
		}
		else if(a==70){
			return 2.8;
		}
		else if(a==69){
			return 2.7;
		}
		else if(a==68){
			return 2.6;
		}
		else if(a==67){
			return 2.5;
		}
		else if(a==66){
			return 2.5;
		}
		else if(a==65){
			return 2.4;
		}
		else if(a==64){
			return 2.4;
		}
		else if(a==63){
			return 2.3;
		}
		else if(a==62){
			return 2.2;
		}
		else if(a==61){
			return 2.1;
		}
		else if(a==60){
			return 2.0;
		}
		else if(a==59){
			return 1.9;
		}
		else if(a==58){
			return 1.8;
		}
		else if(a==57){
			return 1.7;
		}
		else if(a==56){
			return 1.6;
		}
		else if(a==55){
			return 1.5;
		}
		else if(a==54){
			return 1.4;
		}
		else if(a==53){
			return 1.3;
		}
		else if(a==52){
			return 1.2;
		}
		else if(a==51){
			return 1.1;
		}
		else if(a==50){
			return 1.0;
		}
		else if(a<50){
			return 0.0;
		}
		else {
        return -1; 
    }
	}
	 
	 
	 string gradeI(float a){
	 	if(a>=85){
	 		return  "A";
		 }
		 else if(a>=72 && a<85){
	 		return "B";
		 }
		 else if(a>=60 && a<72){
	 		return "C";
		 }
		 else if(a>=50 && a<60){
	 		return "D";
		 }
		 else if(a<50){
	 		return "F";
		 }
		 else {
        return "Unknown"; 
    }
	 }
	 
	 float GPA(float a,float b,float c,float d,float e){
	 	return ((4*a)+(3*b)+(3*c)+(3*d)+(3*e))/16;
	 }
	 void menu(){
	    cout << "*************************************************" << endl;
        cout << "*                  Main Menu                    *" << endl;
        cout << "*************************************************" << endl;
        cout << "1. Input Student Data" << endl;
        cout << "2. Insert New Student Record" << endl;
        cout << "3. Display Transcript Of all Students" << endl;
        cout << "4. Search" << endl;
        cout << "5. Show All Succeded Students" << endl;
        cout << "6. Show All Failed Students" << endl;
        cout << "7. Show Position Of Students" << endl;
        cout << "8. Update Existing Record" << endl;
        cout << "9. Delete Record" << endl;
        cout << "10. Exit" << endl;
        cout << "*************************************************"<<endl<<endl;
       
	 }
	 
	 void search(){
	 	cout<<endl<<"   1. Search By Name:"<<endl;
	 	cout<<"   2. Search By Roll No:"<<endl;
	 }
     
	void heading1(){
		cout.setf(ios::left);
		cout<<endl<<endl<<setw(20)<<"Name"<<setw(10)<<"RollNo"<<setw(13)<<"Semester"<<setw(20)<<"Department"<<setw(7)<<"Grade"<<setw(12)<<"Percentage"<<setw(12)<<"GPA"<<setw(10)<<"ObtMarks"<<setw(12)<<"TotalMarks"<<setw(7)<<"Status";
		cout<<endl;
	}

struct student{
	int rollNo;
	string name;
	string department;
	string semester;
	int cpp,math,calculus,physics,english,ict;
	void getData(){
		
		cout<<"Please Enter Student Name: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Please Enter Roll NO: ";
		cin>>rollNo;
		cout<<"Please Enter Semester: ";
		cin.ignore();
		getline(cin,semester);
		cout<<"Please Department Name: ";
		getline(cin,department);
		cout<<"Please Enter CPP Marks: ";
		cin>>cpp;
		cout<<"Please Enter Mathemtics Marks: ";
		cin>>math;
		cout<<"Please Enter Calculus Marks: ";
		cin>>calculus;
		cout<<"Please Enter Physics Marks: ";
		cin>>physics;
		cout<<"Please Enter English Marks: ";
		cin>>english;
		cout<<"Please Enter ICT Marks: ";
		cin>>ict;
	}
	
	void modifyData(){
		cout<<"Roll NO: "<<rollNo<<endl;
		cout<<"Please Enter Student Name: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Please Enter Semester: ";
		getline(cin,semester);
		cout<<"Please Department Name: ";
		getline(cin,department);
		cout<<"Please Enter CPP Marks: ";
		cin>>cpp;
		cout<<"Please Enter Mathemtics Marks: ";
		cin>>math;
		cout<<"Please Enter Calculus Marks: ";
		cin>>calculus;
		cout<<"Please Enter Physics Marks: ";
		cin>>physics;
		cout<<"Please Enter English Marks: ";
		cin>>english;
		cout<<"Please Enter ICT Marks: ";
		cin>>ict;
	}
	void heading2(){
		cout.setf(ios::left);
		cout<<setw(12)<<"CourseName"<<setw(13)<<"CourseMarks"<<setw(12)<<"Percentage"<<setw(6)<<"Grade"<<setw(12)<<"GradePoints"<<setw(12)<<"CreditHrs"<<setw(5)<<"GPA"<<endl;
	}
	void showTranscript(){
		float Pcpp = percentageI(cpp);
		string Gcpp = gradeI(Pcpp);
		float GPcpp = gradePointI(Pcpp);
		
		float Pmath = percentageI(math);
		string Gmath = gradeI(Pmath);
		float GPmath = gradePointI(Pmath);
		
		float Pcalculus = percentageI(calculus);
		string Gcalculus = gradeI(Pcalculus);
		float GPcalculus = gradePointI(Pcalculus);
		
		float Pphysics = percentageI(physics);
		string Gphysics = gradeI(Pphysics);
		float GPphysics = gradePointI(Pphysics);
		
		float Penglish = percentageI(english);
		string Genglish = gradeI(Penglish);
		float GPenglish = gradePointI(Penglish);
		
		float Pict = percentageI(ict);
		string Gict = gradeI(Pict);
		float GPict = gradePointI(Pict);
		
		float gpa = GPA(GPcpp,GPcalculus,GPphysics,GPenglish,GPict);
		
		cout.setf(ios::left);
		cout<<endl<<endl<<"Student Name: "<<setw(22)<<name<<"Roll No: "<<setw(20)<<rollNo<<endl;
		cout<<"*************************************************************************************************"<<endl;
		heading2();
		
		cout<<setw(12)<<"CPP"<<setw(13)<<cpp<<setw(12)<<Pcpp<<setw(6)<<Gcpp<<setw(12)<<GPcpp<<setw(12)<<4<<endl;
		cout<<setw(12)<<"Math"<<setw(13)<<math<<setw(12)<<Pmath<<setw(6)<<Gmath<<setw(12)<<GPmath<<setw(12)<<3<<endl;
		cout<<setw(12)<<"Calculus"<<setw(13)<<calculus<<setw(12)<<Pcalculus<<setw(6)<<Gcalculus<<setw(12)<<GPcalculus<<setw(12)<<3<<setw(5)<<gpa<<endl;
		cout<<setw(12)<<"Physics"<<setw(13)<<physics<<setw(12)<<Pphysics<<setw(6)<<Gphysics<<setw(12)<<GPphysics<<setw(12)<<3<<endl;
		cout<<setw(12)<<"English"<<setw(13)<<english<<setw(12)<<Penglish<<setw(6)<<Genglish<<setw(12)<<GPenglish<<setw(12)<<3<<endl;
		cout<<setw(12)<<"ICT"<<setw(13)<<ict<<setw(12)<<Pict<<setw(6)<<Gict<<setw(12)<<GPict<<setw(12)<<3<<endl<<endl;
		cout<<"*************************************************************************************************"<<endl;
		
	}
	

	void listStudent(){
	int p = percentage(cpp,math,calculus,physics,english,ict);
	string g = grade(p);
	int o = obtmarks(cpp,math,calculus,physics,english,ict);
	
	float Pcpp = percentageI(cpp);
	float GPcpp = gradePointI(Pcpp);
	float Pcalculus = percentageI(calculus);
	float GPcalculus = gradePointI(Pcalculus);
	float Pphysics = percentageI(physics);
	float GPphysics = gradePointI(Pphysics);
	float Penglish = percentageI(english);
	float GPenglish = gradePointI(Penglish);
	float Pict = percentageI(ict);
	float GPict = gradePointI(Pict);
	float gpa = GPA(GPcpp,GPcalculus,GPphysics,GPenglish,GPict);
	
	string s = status(gpa);
		cout<<setw(20)<<name<<setw(10)<<rollNo<<setw(13)<<semester<<setw(20)<<department<<setw(7)<<g<<setw(12)<<p<<setw(12)<<gpa<<setw(10)<<o<<setw(12)<<600<<setw(7)<<s<<endl;
	}
	
	float getGPA(){
	float Pcpp = percentageI(cpp);
	float GPcpp = gradePointI(Pcpp);
	float Pcalculus = percentageI(calculus);
	float GPcalculus = gradePointI(Pcalculus);
	float Pphysics = percentageI(physics);
	float GPphysics = gradePointI(Pphysics);
	float Penglish = percentageI(english);
	float GPenglish = gradePointI(Penglish);
	float Pict = percentageI(ict);
	float GPict = gradePointI(Pict);
	return GPA(GPcpp,GPcalculus,GPphysics,GPenglish,GPict);
		}
string getStatus(){
	float Pcpp = percentageI(cpp);
	float GPcpp = gradePointI(Pcpp);
	float Pcalculus = percentageI(calculus);
	float GPcalculus = gradePointI(Pcalculus);
	float Pphysics = percentageI(physics);
	float GPphysics = gradePointI(Pphysics);
	float Penglish = percentageI(english);
	float GPenglish = gradePointI(Penglish);
	float Pict = percentageI(ict);
	float GPict = gradePointI(Pict);
	float gpa = GPA(GPcpp,GPcalculus,GPphysics,GPenglish,GPict);
	
	return status(gpa);
	}
};
	
int main(){
	int n=0, choice;
	student std[10];
	do{
		system("cls");
		consoleHeading();
		menu();
		cout<<"Please Enter Your Choice: ";	
		cin>>choice;
		switch(choice){
			case 1:
				std[n].getData();
				cout<<endl<<"Record Saved Successfully!";
				n++;
				cout<<endl<<endl;
				system("pause");
				break;	
				case 2:
					std[n].getData();
					cout<<endl<<"Record Saved Successfully!";
					n++;
					break;
				case 3:
						if(n>0){
							heading1();
							for(int i=0;i<n;i++){
								std[i].listStudent();
							}
						}
						else{
							cout<<"Nothing To Display!"<<endl;
						}
						cout<<endl<<endl;
						system("pause");
					break;	
				case 4:
					{
								
					system("cls");
					search();
					cout<<endl<<endl<<"Please Enter Your Choice: ";
					int ch2;
					cin>>ch2;
					switch(ch2){
						case 1:
						{
							string nm;
							int chkName =0;
							if(n>0){
								cout<<endl<<"Enter Name To Display Transcript: ";
								cin.ignore();
							getline(cin,nm);
							for(int i=0;i<n;i++){
								if(nm == std[i].name){
									std[i].showTranscript();
									chkName++;
								}
							}
							}
							else{
								cout<<"Nothing To Display!"<<endl<<endl;
							}
							if(chkName == 0){
								cout<<"No Such Name Found  "<<endl<<endl;
							}
							cout<<endl<<endl;
							system("pause");
							break;
					}
						case 2:
							{
							
							int rn;
							int chkRollNo = 0;
							if(n>0){
								cout<<endl<<"Enter Roll No To Display Transcript: ";
							cin>>rn;
							for(int i=0;i<n;i++){
								if(rn == std[i].rollNo){
									std[i].showTranscript();
									chkRollNo++;
								}
							}
							}
							else{
								cout<<"Nothing To Display!"<<endl<<endl;
							}
							if(chkRollNo == 0){
								cout<<"No Such Roll No Found "<<endl<<endl;
							}
							cout<<endl<<endl;
							system("pause");
							break;	
						}
					}
					break;
				}
				case 5:{
					system("cls");
					  cout << "\n"
                    "  SSSS   u   u  ccccc  ccccc  eeeee  eeeee  ddddd  eeeee  ddddd    \n"
                    " S       u   u  c      c      e      e        d   d  e      d   d    \n"
                    "  SSS    u   u  c      c      eeee   eeee     d   d  eeee   d   d    \n"
                    "     S   u   u  c      c      e      e        d   d  e      d   d    \n"
                    " SSSS     uuu    ccccc  ccccc  eeeee  eeeee    dddd  eeeee  dddd     \n\n"<<endl<<endl<<endl;
                    
                    if(n>0){
                    heading1();
                    for(int i=0; i<n; i++){
                        if(std[i].getStatus() == "Passed"){
                            std[i].listStudent();
                        }
                    }
                }
						else{
							cout<<"Nothing To Display!"<<endl;
						}
                    
                    
                    cout<<endl<<endl;
				    system("pause");
					break;
				}
					
				case 6:{
					system("cls");
					cout << "            ********************************************************************* "<<  endl;
                    cout << "            *                                                                   *" <<  endl;
                    cout << "            *                        Failed Students List                        *" <<  endl;
                    cout << "            *                                                                   *" <<  endl;
                    cout << "            *********************************************************************" <<  endl;
                    cout<<endl<<endl<<endl;
                    if(n>0){
                    heading1();
                    for(int i=0; i<n; i++){
                        if(std[i].getStatus() == "Failed"){
                            std[i].listStudent();
                        }
                    }
                }
						else{
							cout<<"Nothing To Display!"<<endl;
						}
						cout<<endl<<endl;
				        system("pause");
					break;
				}
				case 7: {
    system("cls");
    cout << "            ********************************************************************* "<<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *                     Position of Students                           *" <<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *********************************************************************" <<  endl;
    cout<<endl<<endl<<endl;

    if (n > 0) {
        // Sort students based on GPA
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (std[j].getGPA() < std[j + 1].getGPA()) {
                    // Swap students
                    student temp = std[j];
                    std[j] = std[j + 1];
                    std[j + 1] = temp;
                }
            }
        }
        // Display students in sorted order
        cout << setw(10) << "Position" << setw(20) << "Name" << setw(10) << "GPA" << endl;
        for (int i = 0; i < n; ++i) {
            cout << setw(10) << i + 1 << setw(20) << std[i].name << setw(10) << std[i].getGPA() << endl;
        }
    } else {
        cout << "No students to display!" << endl;
    }
    cout<<endl<<endl;
	system("pause");
    break;
}
	case 8:
		{
			system("cls");
    cout << "            ********************************************************************* "<<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *                     Modify Student Record                               *" <<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *********************************************************************" <<  endl;
    cout<<endl<<endl<<endl;
			int rn;
							int chkRollNo = 0;
							if(n>0){
								cout<<endl<<"Enter Roll No To Modify Record: ";
							cin>>rn;
							for(int i=0;i<n;i++){
								if(rn == std[i].rollNo){
									cout<<endl<<endl<<"Following Record Will Be Modified!"<<endl<<endl;
									std[i].showTranscript();
									cout<<endl<<endl<<"Enter New Data: "<<endl<<endl;
									std[i].modifyData();
									
									chkRollNo++;
								}
							}
							}
							else{
								cout<<"Nothing To Display!"<<endl<<endl;
							}
							if(chkRollNo == 0){
								cout<<"No Such Roll No Found "<<endl<<endl;
							}
							cout<<endl<<endl;
							system("pause");
			break;
		}
	case 9:{
		system("cls");
    cout << "            ********************************************************************* "<<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *                     Delete Student Record                               *" <<  endl;
    cout << "            *                                                                   *" <<  endl;
    cout << "            *********************************************************************" <<  endl;
    cout<<endl<<endl<<endl;
			int rn;
			int pos;
							int chkRollNo = 0;
							if(n>0){
								cout<<endl<<"Enter Roll No To Delete Record: ";
							cin>>rn;
							for(int i=0;i<n;i++){
								if(rn == std[i].rollNo){
									cout<<endl<<endl<<"Following Record Will Be Deleted!"<<endl<<endl;
									std[i].showTranscript();
									chkRollNo++;
									pos = i;
									break;
								}
							}
							for(int i=pos;i<n-1;i++){
								std[i] = std[i+1];
							}
							n--;
							}
							else{
								cout<<"Nothing To Display!"<<endl<<endl;
							}
							if(chkRollNo == 0){
								cout<<"No Such Roll No Found "<<endl<<endl;
							}
							cout<<endl<<endl;
							system("pause");
		break;
	}
	case 10:{
		choice = 0;
		break;
	}	

					
		cout<<endl<<endl;
		system("pause");
	}

	}while(choice);
}






