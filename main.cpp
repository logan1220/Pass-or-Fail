#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
float quizaverage (int, int, int, int);
int finalaverage (float, int, int);

using namespace std;

int main(int argc, char *argv[])
{
    ifstream File;
    
    string Firstname;
    string Lastname;
    int q1, q2, q3, q4, q5, midterm, final, atten;
    float faverage, qaverage;
    char grade;
    
    File.open("bettergrades.txt");
    
    while (!File.eof())
    {
              File >> Firstname;
              File >> Lastname;
              File >> q1;
              File >> q2;
              File >> q3;
              File >> q4;
              File >> midterm;
              File >> final;
              File >> atten; 
                 
              qaverage = quizaverage(q1, q2, q3, q4);
              
              faverage = finalaverage(qaverage, midterm, final);
              
              if (faverage >= 90)
              {
                   grade = 'A';
              }
              else if (faverage >= 80)
              {
                   grade = 'B';
              }
              else if (faverage >=70)
              {
                   grade = 'C';
                   }
              else if (faverage >= 60)
              {
                   grade = 'D';
                   }
              else if (faverage >= 50)
              {
                   grade = 'F';
                   }
              
                  
              cout << Lastname << ", " << Firstname << "\tAverage: " << faverage  << " [" << grade << "] " << endl;
              
              if (atten < 29 || grade == 'D' || grade == 'F')
              {
                        cout << "This student did not pass!:(" <<endl <<endl;
                        }
              else if (atten > 30 || grade == 'A' || grade == 'B' || grade == 'C') 
              {
                  cout << "This student passed!:)" <<endl <<endl;
                  }
    }

  
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

float quizaverage (int q1, int q2, int q3, int q4)
{
    float qaverage = (q1 + q2 + q3 + q4) / 4.0;
    return qaverage;
}

int finalaverage (float quizaverage, int midterm, int final)
{
    float taverage = (quizaverage + midterm + final) / 3;
    return taverage;
}
    




