#include <iostream>
#include <string>
using namespace std;

class toDo {
  string name;
  bool done[3];
  string disc;
  string dead;
public:
  toDo(string nam, string dis, string line)
  {
    name = nam;
    disc = dis;
    dead = line;
    done[0] = false; done[1] = false; done[2] = false;
  }

  string getName(){return name;}
  string getDisc(){return disc;}
  string getDeadline(){return dead;}

  bool getdone(int index){
    return done[index];
  }

  void setdone(int index){
    bool temp = done[index];
    if(temp){
      done[index] = false;
    } else {
      done[index] = true;
    }
    cout << done[index] << endl;
  }

};

int main(){
  toDo  test("test", "just a test", "a test");
  test.setdone(1);
  cout << test.getdone(1) << endl;
  test.setdone(1);
  cout << test.getName() << endl;
}
