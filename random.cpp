/*#include <iostream>
#include <vector>

class License {
   public:
      void SetStateAndFee(std::string newState, int newFee);
      void Print() const;
   private:
      std::string state;
      int fee;
};

void License::SetStateAndFee(std::string newState, int newFee){
   state = newState;
   fee = newFee;
}

void License::Print() const{
   std::cout << "License: " << state << ", Fee: " << fee << std::endl;
}

int main(){
   std::vector<License> licenseList;
   License currLicense;
   std::string currState;
   int currFee;
   int licenseCount;
   unsigned int i;

   std::cin >> licenseCount;
   for(i = 0; i < licenseCount, ++i){
      std::cin >> currState;
      std::cin >> currFee;

      currLicense.SetStateAndFee(currState, currFee);
      licenseList.push_back(currLicense);
   }

   //Call each License object's Print() function.
   for(i = 0; i < licenseList.size(); ++i){
      licenseList.at(i).Print();
   }

   return 0;
}
*/

/*
#include <iostream>
#include <vector>

class Recording {
   public:
      bool ReadDetails();
      void Print() const;
   private:
      std::string topic;
      char discount;
};

bool Recording::ReadDetails(){
   std::string newTopic;

   std::cin >> newTopic;
   if(newTopic == "end"){
      return false;
   }
   else{
      topic = newTopic;
      std::cin >> discount;
      return true;
   }
}

void Recording::Print() const{
   std::cout << "Recording: " << topic << ", Discount: " << discount << std::endl;
}

int main(){
   std::vector<Recording> recordingList;
   Recording currRecording;
   bool result;
   unsigned int i;

   while(currRecording.ReadDetails()){  // Keep reading details until ReadDetails() returns false
      recordingList.push_back(currRecording);  // Append to recordingList if valid
   }

   for (i = 0; i < recordingList.size(); ++i) {
         currRecording = recordingList.at(i);
         currRecording.Print();
   }
   

   return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;

class Town {
   public:
      void SetDetails(string newName, char newRating);
		char GetRating() const;
		void Print() const;
   private:
      string name;
      char rating;
};

void Town::SetDetails(string newName, char newRating) {
   name = newName;
   rating = newRating;
}

char Town::GetRating() const {
	return rating;
}

void Town::Print() const {
	cout << "Town: " << name << ", Rating: " << rating << endl;
}

class SmallTowns {
   public:
      void InputTowns();
      void PrintSelectedTowns();
   private:
      vector<Town> townList;
};

void SmallTowns::InputTowns() {
   Town currTown;
   string currName;
   char currRating;
   int townCount;
   unsigned int i;
  
   cin >> townCount;
   for (i = 0; i < townCount; ++i) {
      cin >> currName;
      cin >> currRating;
      
      currTown.SetDetails(currName, currRating);
      townList.push_back(currTown);
   }     
}

//Write the PrintSelectedTowns() function in the SmallTowns class using Print() to output all the Town objects with rating equal to 'A'.

void SmallTowns::PrintSelectedTowns(){
   for(unsigned int i = 0; i < townList.size(); ++i)
      if(townList.at(i).GetRating() == 'A'){
         townList.at(i).Print();
      }
}

int main() {
   SmallTowns smallTowns;
  
   smallTowns.InputTowns();
   smallTowns.PrintSelectedTowns();
   
   return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;

class Student {
   public:
      void SetDetails(char newGroup, string newName);
      void Print() const;
   private:
      char group;
      string name;
};

void Student::SetDetails(char newGroup, string newName) {
	group = newGroup;
	name = newName;
}

void Student::Print() const {
   cout << "Student group: " << group << ", Name: " << name << endl;
}

class Clinic {
   public:
      void InputStudents();
      void PrintStudents();
   private:
      vector<Student> studentList;
};

void Clinic::InputStudents(){
   Student currStudent;
   char currGroup;
   string currName;

   while(true){
      std::cin >> currGroup;
      if(currGroup == 'Z'){
         break;
      }
      std::cin >> currName; 
      currStudent.SetDetails(currGroup, currName); 
      studentList.push_back(currStudent); 
   }
}

void Clinic::PrintStudents() {
   Student currStudent;
   unsigned int i;

   for (i = 0; i < studentList.size(); ++i) {
      currStudent = studentList.at(i);
      currStudent.Print();
   }
}

int main() {
   Clinic clinic;

   clinic.InputStudents();
   clinic.PrintStudents();
 
   return 0;
}
*/



























































































/*#include <iostream>
using namespace std;

class Person {
   public:
      void SetName(string nameToSet);
      string GetName();
   private:
      string name;
};

void Person::SetName(string nameToSet) {
   name = nameToSet;
}

string Person::GetName() {
   return name;
}

int main() {
   string userName;
   string differentUserName;
   Person person1;

   userName = "Joe";
   differentUserName = "Sam";

   person1.SetName(userName);
   cout << person1.GetName();
   person1.SetName(differentUserName);
   cout << " will be " << person1.GetName();

   return 0;
}*/


// "New" means new compared to previous level
// "New" means new compared to previous level
#include <iostream>
using namespace std;

class InchSize {
   public:
      InchSize(int wholeInches = 0, int sixteenths = 0);
      void Print() const;
      InchSize operator+(InchSize rhs);
      InchSize operator+(int sixteenthsOfInch);
   private:
      int inches;
      int sixteenths;
};

InchSize InchSize::operator+(InchSize rhs) {
   InchSize totalSize;

   totalSize.inches = inches + rhs.inches;
   totalSize.sixteenths = sixteenths + rhs.sixteenths;

   // If sixteenths is greater than an inch, carry 1 to inches.
   if (totalSize.sixteenths >= 16) {
      totalSize.inches += 1;
      totalSize.sixteenths -= 16;
   }

   return totalSize;
}

// New: Overloaded + operator adding integers.
InchSize InchSize::operator+(int sixteenthsOfInch) {
   InchSize totalSize;

   totalSize.inches = inches;
   totalSize.sixteenths = sixteenths + sixteenthsOfInch;

   // While sixteenths is greater than an inch, carry to inches.
   while (totalSize.sixteenths >= 16) {
      totalSize.inches += 1;
      totalSize.sixteenths -= 16;
   }

   return totalSize;
}

InchSize::InchSize(int wholeInches, int sixteenthsOfInch) {
   inches = wholeInches;
   sixteenths = sixteenthsOfInch;
}

void InchSize::Print() const {
   cout << inches << " " << sixteenths << "/16 inches" << endl;
}

int main() {
   InchSize size1(4, 13);
   InchSize size2(2, 14);
   InchSize sumSize;
   InchSize totalSize;

   sumSize = size1 + size2;
   totalSize = sumSize + 20;

   totalSize.Print();

   return 0;
}