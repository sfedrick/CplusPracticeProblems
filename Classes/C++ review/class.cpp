#include "classheader.h"
      void Student::set_age(int a){
         age = a;
      }
      void Student::set_standard(int s){
         standard = s;
      }
     void Student::set_first_name(string fname){
         first_name = fname;
      }
      void Student::set_last_name(string lname){
         last_name = lname;
      }

      int Student::get_age(){
         return age;
      }
      int Student::get_standard(){
         return standard;
      }
      string Student::get_last_name(){
         return last_name;
      }
      string Student::get_first_name(){
         return first_name;
      }
      string Student::to_string(){
         stringstream s;
         s<<age<<","<<first_name<<","<<last_name<<","<<standard;
         return s.str();
      }

