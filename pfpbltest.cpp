#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;
void swaper(float &a,float &b ){
	float temp;
	temp=a;
	a=b;
	b=temp;
}
void swaper(string &a,string &b){
	string temp;
	temp=a;
	a=b;
	b=temp;
}
void hightolow(vector<float> &v1,vector<float> &v2,vector<string> &id,vector<string> &name,vector<string> &clase,vector<string> &grade1,vector<string> &grade2){
	for(int i=0;i<v1.size();i++){
		for(int i=0;i<v1.size()-1;i++){
			if(v1[i]<v1[i+1]){
				swaper(v1[i],v1[i+1]);
				swaper(v2[i],v2[i+1]);
				swaper(id[i],id[i+1]);
				swaper(name[i],name[i+1]);
				swaper(clase[i],clase[i+1]);
				swaper(grade1[i],grade1[i+1]);
				swaper(grade2[i],grade2[i+1]);
			}
		}
	}
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	cout<<"|"<<setw(8)<<"ID"<<"|"<<setw(9)<<"NAME"<<"|"<<setw(8)<<"CLASS"<<"|"<<setw(15)<<"CGPA"<<"|"<<setw(15)<<"CGPA"<<"|"<<setw(15)<<"GRADE"<<"|"<<setw(15)<<"GRADE"<<"|"<<endl;
	for(int i=0;i<v1.size();i++){
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	cout<<"|"<<setw(8)<<id[i]<<"|"<<setw(9)<<name[i]<<"|"<<setw(8)<<clase[i]<<"|"<<setw(15)<<v1[i]<<"|"<<setw(15)<<v2[i]<<"|"<<setw(15)<<grade1[i]<<"|"<<setw(15)<<grade2[i]<<"|"<<endl;
	}
	cout<<"----------------------------------------------------------------------------------------"<<endl;
}
void lowtohigh(vector<float> &v1,vector<float> &v2,vector<string> &id,vector<string> &name,vector<string> &clase,vector<string> &grade1,vector<string> &grade2 ){
	for(int i=0;i<v1.size();i++){
		for(int i=0;i<v1.size()-1;i++){
			if(v1[i]>v1[i+1]){
				swaper(v1[i],v1[i+1]);
				swaper(v2[i],v2[i+1]);
				swaper(id[i],id[i+1]);
				swaper(name[i],name[i+1]);
				swaper(clase[i],clase[i+1]);
				swaper(grade1[i],grade1[i+1]);
				swaper(grade2[i],grade2[i+1]);
			}
		}
	}
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	cout<<"|"<<setw(8)<<"ID"<<"|"<<setw(9)<<"NAME"<<"|"<<setw(8)<<"CLASS"<<"|"<<setw(15)<<"CGPA"<<"|"<<setw(15)<<"CGPA"<<"|"<<setw(15)<<"GRADE"<<"|"<<setw(15)<<"GRADE"<<"|"<<endl;
	for(int i=0;i<v1.size();i++){
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	cout<<"|"<<setw(8)<<id[i]<<"|"<<setw(9)<<name[i]<<"|"<<setw(8)<<clase[i]<<"|"<<setw(15)<<v1[i]<<"|"<<setw(15)<<v2[i]<<"|"<<setw(15)<<grade1[i]<<"|"<<setw(15)<<grade2[i]<<"|"<<endl;
	}
	cout<<"----------------------------------------------------------------------------------------"<<endl;
}
int main(){
	cout<<"|"<<setw(24)<<"STUDENT MANAGMENT SYSTEM"<<"|\n";
	char sortchk,ch;string line;int change,opt;
	fstream fin;
	fin.open("datasetforpbl.csv",ios::app);
	while(true){
	while(true){
	cout<<"-----------------------------------"<<endl;
	cout<<"| 1."<<setw(30)<<"STUDENT DATA ENTRY "<<"|"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"| 2."<<setw(30)<<"GRAPHICAL DATA REPRESENTATION "<<"|"<<endl;
	cout<<"-----------------------------------"<<endl;	
	cout<<"| 3."<<setw(30)<<"STUDENT REPORTS "<<"|"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"| 4."<<setw(30)<<"STUDENT DATA SORT "<<"|"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"| 5."<<setw(30)<<"EXIT"<<"|"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Enter an option : ";
	cin>>opt;
	if(opt==1||opt==2||opt==3||opt==4||opt==5){
		system("cls");
		break;
	}
	else{
		system("cls");
		cout<<"Enter a valid option \n";
	}
	}
	switch(opt){
		case 1:{
			int entries;string line1;
			while(true){
	while(true){
	cout<<"Enter how many student entries that you want to enter : ";
	cin>>entries;
	if((entries%1)!=0){
		cout <<"Enter a valid value ";
	}
		system("cls");
		break;
	}
	for(int i=0;i<entries;i++){
		string id,name,clase; float cgpa1,cgpa2; char grade1,grade2;
		while(true){
		cout<<"Enter the id of the student (id must start with F) : ";
		cin>>id;
		if(id[0]!='F'){
			cout<<"Enter a valid id \n";
		}
		else{
			break;
		}
		}
		cout<<"Enter a name of the student : ";
		cin>>name;
		while(true){
		cout<<"Enter a class : ";
		cin>>clase;
		if(clase == "A"||clase == "B" ||clase == "C" ||clase == "D"){
			break;
		}
		else{
			cout<<"Enter a valid class \n";	
		}
	}	
		while(true){
		cout<<"Enter the cgpa : ";
		cin>>cgpa1;
		if(cgpa1>0&&cgpa1<=4.0){
			break;
		}
		else{
			cout<<"Enter a valid cgpa \n";
		}
		}
		while(true){
		cout<<"Enter the total gpa : "; 
		cin>>cgpa2;
		if(cgpa2>0&&cgpa2<=4.0){
			break;
		}
		else{
			cout<<"Enter a valid gpa \n";
		}
		}
		while(true){
		cout<<"Enter the course grade : ";
		cin>>grade1;
		if(grade1=='A'||grade1=='B'||grade1=='C'||grade1=='D'||grade1=='F'){
			break;
		}	
		else{
			cout<<"Enter a valid grade \n";
		}
		}
		while(true){
		cout<<"Enter the overall grade : ";
		cin>>grade2;
		if(grade2=='A'||grade2=='B'||grade2=='C'||grade2=='D'||grade2=='F'){
			break;
		}	
		else{
			cout<<"Enter a valid grade \n";	
		}	
		}
		system("cls");
		fin<<id<<","<<name<<","<<clase<<","<<cgpa1<<","<<cgpa2<<","<<grade1<<","<<grade2<<"\n";
		fin.close();
		}
		char eexit;
		cout<<"Do you want to enter anymore data  ? (y/n) : ";
cin>>eexit;
if(eexit=='n'||eexit=='N'){
	break;
}
		
			}
			break;
		}
		case 2:{
			fstream fin;
	while(true){
	char gopt;
	string inclase,temp1;
	fin.open("datasetforpbl.csv",ios::in);
	while(true){
	cout<<"Enter what graph do you want to find : "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|"<<setw(32)<<"1. STUDENT CGPA GRAPH "<<"|"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|"<<setw(32)<<"2. STUDENT GPA GRAPH "<<"|"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|"<<setw(32)<<"3. STUDENT COURSE GRADE GRAPH "<<"|"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|"<<setw(32)<<"4. STUDENT SEMESTER GRADE GRAPH "<<"|"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"|"<<setw(32)<<"5. EXIT "<<"|"<<endl;
	cout<<"----------------------------------"<<endl;
	cin>>gopt;
	if(gopt=='5'){
		goto endofprogram;// exits this option.
	}
	if(gopt=='1'||gopt=='2'||gopt=='3'||gopt=='4'){
		break;
	}
	else{
		system("cls");
		cout<<"Enter a valid option : ";
		continue;
	}
	}
	system("cls");
	while(true){
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Enter the class that you want data of  : ";
	cin>>inclase;
	if(inclase=="1"||inclase=="2"||inclase=="3"||inclase=="4"){
		if(inclase=="1"){
			inclase="A";
		}
		else if(inclase=="2"){
			inclase="B";
		}
		else if(inclase=="3"){
			inclase="c";
		}
		else if(inclase=="4"){
			inclase="D";
		}
		break;
	}
	else{
		system("cls");
		cout<<"Enter a valid option ";
		continue;
	}
	}
	system("cls");
	float temp;
	int A=0,B=0,C=0,D=0,F=0;
	string lineg,cgpa,claser;
	getline(fin,lineg);
	switch(gopt){
		case ('1'):{
			while(getline(fin,lineg)){
		string garbage;
		stringstream sg(lineg); 
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,claser,',');
		if(claser[0]!=inclase[0]){
			continue;
		}
		getline(sg,cgpa,',');
		temp=stof(cgpa);
		if(temp>=3.5&&temp<=4.0){
			A++;
		}
		else if(temp>=3.0&&temp<=3.49){
			B++;
		}
		else if(temp>=2.5&&temp<=2.99){
			C++;
		}
		else if(temp>=2.0&&temp<=2.49){
			D++;
		}
		else{
			F++;
		}
	}
		cout<<"CGPA GRAPH :"<<endl;
    cout<<"(3.5 - 4.0):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<A;i++){
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(3.0 - 3.49):\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<B;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(2.5 - 2.99):\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<C;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(2.0 - 2.49):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<D;i++){
    	cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(< 2.0):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<F;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
    cout<<endl;
			break;
		}
		case ('2'):{
			while(getline(fin,lineg)){
		string garbage;
		stringstream sg(lineg);
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,claser,',');
		if(claser[0]!=inclase[0]){
			continue;
		}
		getline(sg,garbage,',');
		getline(sg,cgpa,',');
		temp=stof(cgpa);
		if(temp>=3.5&&temp<=4.0){
			A++;
		}
		else if(temp>=3.0&&temp<=3.49){
			B++;
		}
		else if(temp>=2.5&&temp<=2.99){
			C++;
		}
		else if(temp>=2.0&&temp<=2.49){
			D++;
		}
		else{
			F++;
		}
	}
		cout<<"CGPA GRAPH :"<<endl;
    cout<<"(3.5 - 4.0):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<A;i++){
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(3.0 - 3.49):\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<B;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(2.5 - 2.99):\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<C;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(2.0 - 2.49):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<D;i++){
    	cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"(< 2.0):\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<F;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
    cout<<endl;
			break;
		}
		case ('3'):{
			while(getline(fin,lineg)){
		string garbage;
		stringstream sg(lineg);
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,claser,',');
		if(claser[0]!=inclase[0]){
			continue;
		}
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,cgpa,',');
		temp1=cgpa;
		if(temp1=="A"){
			A++;
		}
		else if(temp1=="B"){
			B++;
		}
		else if(temp1=="C"){
			C++;
		}
		else if(temp1=="D"){
			D++;
		}
		else{
			F++;
		}
	}
		cout<<"GRADE GRAPH :\n"<<endl;
    cout<<"A:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<A;i++){
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"B:\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<B;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"C:\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<C;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"D:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<D;i++){
    	cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"F:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<F;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
    cout<<endl;
			break;
		}
		case ('4'):{
		while(getline(fin,lineg)){
		string garbage;
		stringstream sg(lineg);
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,claser,',');
		if(claser[0]!=inclase[0]){
			continue;
		}
		getline(sg,garbage,',');
		getline(sg,garbage,',');
		getline(sg,cgpa,',');
		temp1=cgpa;
		if(temp1=="A"){
			A++;
		}
		else if(temp1=="B"){
			B++;
		}
		else if(temp1=="C"){
			C++;
		}
		else if(temp1=="D"){
			D++;
		}
		else{
			F++;
		}
	}
		cout<<"GRADE GRAPH :\n"<<endl;
    cout<<"A:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<A;i++){
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"B:\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<B;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"C:\n";
	for(int i=0;i<2;i++){
    for(int i=0;i<C;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"D:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<D;i++){
    	cout<<"*";
	}
    cout<<"|"<<endl;
	}
	cout<<"F:\n";
    for(int i=0;i<2;i++){
    for(int i=0;i<F;i++) {
		cout<<"*";
	}
    cout<<"|"<<endl;
	}
    cout<<endl;
			break;
		}
	}
	fin.clear();
	fin.close();
	cout<<"Do you want to try again ? (y/n) :";
			string again;
			cin>>again;
			if(again[0]=='y'||again[0]=='Y'||again=="yes"||again=="YES"){
				system("cls");
				continue;
			}
			else{
				break;
			}
	}
			break;
		}
		case 3:{
			while(true){
	fstream fin;
	string liner;
	fin.open("datasetforpbl.csv",ios::in);
	string chkclas;
	while(true){
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"|"<<setw(3)<<"5."<<"|"<<setw(7)<<"EXIT "<<"|"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Enter the class which you want to find report of : ";
	cin>>chkclas;
	if(chkclas=="5"){
		goto endofprogram;
	}
	if(chkclas=="1"||chkclas=="2"||chkclas=="3"||chkclas=="4"){
		if(chkclas=="1"){
			chkclas="A";
		}
		else if(chkclas=="2"){
			chkclas="B";
		}
		else if(chkclas=="3"){
			chkclas="C";
		}
		else if(chkclas=="4"){
			chkclas="D";
		}
		break;
	}
	else{
		system("cls");
		cout<<"Enter a valid option. ";
		continue;
	}
	}
	system("cls");
	float temp1=0,temp2=0,hcgpa=0,cg=0,hgpa=0,g=0,temp11=0,temp22=0;
	string garbager,claser,cgpa,gpa;
	
	getline(fin,liner);
			while(getline(fin,liner)){
				stringstream sr(liner);
				getline(sr,garbager,',');
				getline(sr,garbager,',');
				getline(sr,claser,',');
				if(claser!=chkclas){
					continue;
				}
				getline(sr,cgpa,',');
				temp1=stof(cgpa);
				if(temp1>hcgpa){
					hcgpa=temp1;
				}
				temp11+=temp1;
				cg++;
				getline(sr,gpa,',');{
				temp2=stof(gpa);
				if(temp2>hgpa){
					hgpa=temp2;
				}
				temp22+=temp2;	
				g++;
				}
			}
			fin.clear();
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"|"<<setw(8)<<"CLASS"<<"|"<<setw(8)<<"AVG CGPA"<<"|"<<setw(8)<<"AVG GPA"<<"|"<<setw(8)<<"HIGHEST CGPA"<<"|"<<setw(8)<<"HIGHEST GPA"<<"|"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"|"<<setw(8)<<chkclas<<"|"<<setw(8)<<(float)temp11/cg<<"|"<<setw(8)<<(float)temp22/g<<"|"<<setw(8)<<hcgpa<<"|"<<setw(8)<<hgpa<<"|"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"Do you want to try again ? (y/n) :";
			string again;
			cin>>again;
			if(again[0]=='y'||again[0]=='Y'||again=="yes"||again=="YES"){
				system("cls");
				continue;
			}
			else{
				break;
			}
			fin.close();
	}
			break;
		}
		case 4:{
			
		while(true){
			fin.close();
			fin.open("datasetforpbl.csv",ios::in);
	while(true){
	cout<<"How do you want to sort the data ? choose an option. "<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"1. Sort by id. "<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"2. Sort by highest cgpa . "<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"3. Sort by highest gpa. "<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"4. Sort by lowest cgpa . "<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"5. Sort by lowest gpa . "<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"|"<<setw(38)<<"6. Display a class data."<<"|"<<endl;
	cout<<"----------------------------------------"<<endl;
	cin>>sortchk;
	if(sortchk=='1'||sortchk=='2'||sortchk=='3'||sortchk=='4'||sortchk=='5'||sortchk=='6'){
		system("cls");
		break;
	}
	else{
		system("cls");
		cout<<"Enter a valid option. ";
	}
	}
	vector<string> id1;
	vector<string> name1;
	vector<string> clase1;
	vector<float> pftc1;
	vector<float> pflc1;
	vector<string> pftg1;
	vector<string> pflg1;
	bool checker=true;
	switch(sortchk){
		case ('1'):{
			string idf;
			cout<<"Enter the id that you want to search : ";
			cin>>idf;
			if(idf[0]=='f'){
				int tem=idf[0];
				tem-=32;
				idf[0]=tem;
			}
			getline(fin,line);
			while(getline(fin,line)){
				string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
				stringstream si(line);
				getline(si,id,',');
				if(idf==id){
					getline(si,name,',');
					getline(si,clase,',');
					getline(si,pftcgpa,',');
					getline(si,pflcgpa,',');
					getline(si,pftgrde,',');
					getline(si,pflgrde,',');
					cout<<"--------------------------------------------------------------------------------"<<endl;
					cout<<"|"<<setw(8)<<"Id"<<"|"<<setw(8)<<"NAME"<<"|"<<setw(8)<<"CLASS"<<"|"<<setw(8)<<"CGPA"<<"|"<<setw(8)<<"GPA"<<"|"<<setw(8)<<"COURSE GRADE"<<"|"<<setw(8)<<"OVERALL GRADE"<<"|"<<endl;
					cout<<"--------------------------------------------------------------------------------"<<endl;
					cout<<"|"<<setw(8)<<id<<"|"<<setw(8)<<name<<"|"<<setw(8)<<clase<<"|"<<setw(8)<<pftcgpa<<"|"<<setw(8)<<pflcgpa<<"|"<<setw(8)<<pftgrde<<"|"<<setw(8)<<pflgrde<<"|"<<endl;
					cout<<"--------------------------------------------------------------------------------"<<endl;
					break;
				}
				else{
					checker=false;
					continue;
				}
			}
				if(checker==false){
					cout<<"you id doesnot exist in the file.\n";
				}
		}
			break;
			case ('2'):{
				while(true){
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"Enter the class that you want data of  : ";
				cin>>ch;
				system("cls");
				if(ch =='A'||ch =='B' ||ch=='C'||ch=='D'||ch =='a'||ch =='b' ||ch== 'c'||ch=='d'){
					if(ch =='a'||ch =='b'||ch== 'c'||ch=='d'){
					change=ch;
					change-=32;
					ch=change;
					}
					system("cls");
					break;
					}
					else{
						system("cls");
						cout<<"Enter a valid class name \n";
					}
				}
				getline(fin,line);
				while(getline(fin,line)){
				stringstream ss(line);
				char cls;
				string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
				getline(ss,id,',');
				getline(ss,name,',');
				getline(ss,clase,',');
				cls=clase[0];
				if(cls!=ch){
					continue;
				}
				getline(ss,pftcgpa,',');
				getline(ss,pflcgpa,',');
				getline(ss,pftgrde,',');
				getline(ss,pflgrde,',');
				id1.push_back(id);//id
				name1.push_back(name);//name
				clase1.push_back(clase);//class
				float temp1=stof(pftcgpa);
				pftc1.push_back(temp1);//pftcgpa
				float temp2=stof(pflcgpa);
				pflc1.push_back(temp2);//pflcgpa
				pftg1.push_back(pftgrde);//pftgrade
				pflg1.push_back(pflgrde);//pflgrade
	}
				hightolow(pftc1,pflc1,id1,name1,clase1,pftg1,pflg1);
				
				break;
			}
			case ('3'):{
				while(true){
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"Enter the class that you want data of  : ";
				cin>>ch;
				system("cls");
				if(ch =='A'||ch =='B' ||ch=='C'||ch=='D'||ch =='a'||ch =='b' ||ch== 'c'||ch=='d'){
					if(ch =='a'||ch =='b'||ch== 'c'||ch=='d'){
					change=ch;
					change-=32;
					ch=change;
					}
					system("cls");
					break;
					}
					else{
						system("cls");
						cout<<"Enter a valid class name \n";
					}
				}
				getline(fin,line);
				while(getline(fin,line)){
				stringstream ss(line);
				char cls;
				string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
				getline(ss,id,',');
				getline(ss,name,',');
				getline(ss,clase,',');
				cls=clase[0];
				if(cls!=ch){
					continue;
				}
				getline(ss,pftcgpa,',');
				getline(ss,pflcgpa,',');
				getline(ss,pftgrde,',');
				getline(ss,pflgrde,',');
				id1.push_back(id);//id
				name1.push_back(name);//name
				clase1.push_back(clase);//class
				float temp1=stof(pftcgpa);
				pftc1.push_back(temp1);//pftcgpa
				float temp2=stof(pflcgpa);
				pflc1.push_back(temp2);//pflcgpa
				pftg1.push_back(pftgrde);//pftgrade
				pflg1.push_back(pflgrde);//pflgrade
	}
				hightolow(pflc1,pftc1,id1,name1,clase1,pftg1,pflg1);
				
				}
				break;
			case ('4'):{
				while(true){
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"Enter the class that you want data of  : ";
				cin>>ch;
				system("cls");
				if(ch =='A'||ch =='B' ||ch=='C'||ch=='D'||ch =='a'||ch =='b' ||ch== 'c'||ch=='d'){
					if(ch =='a'||ch =='b'||ch== 'c'||ch=='d'){
					change=ch;
					change-=32;
					ch=change;
					}
					system("cls");
					break;
					}
					else{
						system("cls");
						cout<<"Enter a valid class name \n";
					}
				}
				getline(fin,line);
				while(getline(fin,line)){
				stringstream ss(line);
				char cls;
				string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
				getline(ss,id,',');
				getline(ss,name,',');
				getline(ss,clase,',');
				cls=clase[0];
				if(cls!=ch){
					continue;
				}
				getline(ss,pftcgpa,',');
				getline(ss,pflcgpa,',');
				getline(ss,pftgrde,',');
				getline(ss,pflgrde,',');
				id1.push_back(id);//id
				name1.push_back(name);//name
				clase1.push_back(clase);//class
				float temp1=stof(pftcgpa);
				pftc1.push_back(temp1);//pftcgpa
				float temp2=stof(pflcgpa);
				pflc1.push_back(temp2);//pflcgpa
				pftg1.push_back(pftgrde);//pftgrade
				pflg1.push_back(pflgrde);//pflgrade
	}
				lowtohigh(pftc1,pflc1,id1,name1,clase1,pftg1,pflg1);
				
				
				}
				break;
			case ('5'):{
				while(true){
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"Enter the class that you want data of  : ";
				cin>>ch;
				system("cls");
				if(ch =='A'||ch =='B' ||ch=='C'||ch=='D'||ch =='a'||ch =='b' ||ch== 'c'||ch=='d'){
					if(ch =='a'||ch =='b'||ch== 'c'||ch=='d'){
					change=ch;
					change-=32;
					ch=change;
					}
					system("cls");
					break;
					}
					else{
						system("cls");
						cout<<"Enter a valid class name \n";
					}
				}
				getline(fin,line);
				while(getline(fin,line)){
				stringstream ss(line);
				char cls;
				string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
				getline(ss,id,',');
				getline(ss,name,',');
				getline(ss,clase,',');
				cls=clase[0];
				if(cls!=ch){
					continue;
				}
				getline(ss,pftcgpa,',');
				getline(ss,pflcgpa,',');
				getline(ss,pftgrde,',');
				getline(ss,pflgrde,',');
				id1.push_back(id);//id
				name1.push_back(name);//name
				clase1.push_back(clase);//class
				float temp1=stof(pftcgpa);
				pftc1.push_back(temp1);//pftcgpa
				float temp2=stof(pflcgpa);
				pflc1.push_back(temp2);//pflcgpa
				pftg1.push_back(pftgrde);//pftgrade
				pflg1.push_back(pflgrde);//pflgrade
	}
				lowtohigh(pftc1,pflc1,id1,name1,clase1,pftg1,pflg1);
				
				}
				break;
			case ('6'):{
				while(true){
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"1."<<"|"<<setw(7)<<"class A"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"2."<<"|"<<setw(7)<<"class B"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"3."<<"|"<<setw(7)<<"class C"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"|"<<setw(3)<<"4."<<"|"<<setw(7)<<"class D"<<"|"<<endl;
				cout<<"---------------"<<endl;
				cout<<"Enter the class that you want data of  : ";
				cin>>ch;
				system("cls");
				if(ch =='A'||ch =='B' ||ch=='C'||ch=='D'||ch =='a'||ch =='b' ||ch== 'c'||ch=='d'){
					if(ch =='a'||ch =='b'||ch== 'c'||ch=='d'){
					change=ch;
					change-=32;
					ch=change;
					}
					system("cls");
					break;
					}
					else{
						cout<<"Enter a valid class name \n";
						system("cls");
					}
				}
					getline(fin,line);
					cout<<"----------------------------------------------------"<<endl;
					cout<<"|"<<setw(8)<<"Id"<<"|"<<setw(8)<<"NAME"<<"|"<<setw(8)<<"CLASS"<<"|"<<setw(8)<<"CGPA"<<"|"<<setw(8)<<"GPA"<<"|"<<setw(8)<<"COURSE GRADE"<<"|"<<setw(8)<<"OVERALL GRADE"<<"|"<<endl;
				while(getline(fin,line)){
					stringstream ss(line);
					char cls;
					string id,name,clase,pftcgpa,pflcgpa,pftgrde,pflgrde;
					getline(ss,id,',');
					getline(ss,name,',');
					getline(ss,clase,',');
					cls=clase[0];
					if(cls!=ch){
						continue;
					}
					getline(ss,pftcgpa,',');
					getline(ss,pflcgpa,',');
					getline(ss,pftgrde,',');
					getline(ss,pflgrde,',');
					cout<<"----------------------------------------------------"<<endl;
					cout<<"|"<<setw(8)<<id<<"|"<<setw(8)<<name<<"|"<<setw(8)<<clase<<"|"<<setw(8)<<pftcgpa<<"|"<<setw(8)<<pflcgpa<<"|"<<setw(8)<<pftgrde<<"|"<<setw(8)<<pflgrde<<"|"<<endl;
				}			
				break;
			}
		}
		fin.clear();
		fin.close();
			char exit;
			cout<<"Do you want to try sorting data again ? (y/n) : ";
			cin>>exit;
			if(exit=='n'||exit=='N'){
			break;
			}
		}
	}
		case 5:{
			return 0;
			break;
		}
}
endofprogram:
char choseexit;
cout<<"Do you want to go to main page ? (y/n) : ";
cin>>choseexit;
if(choseexit=='n'||choseexit=='N'){
	break;
}
system("cls");
fin.close();
}
}
