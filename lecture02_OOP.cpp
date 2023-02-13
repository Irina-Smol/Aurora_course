#include <iostream>
#include <cstring>

using namespace std;

class computer_screen {
public:
   computer_screen(string, long, int, int);
   void show_screen(void);
private:
   string type;
   long colors;
   int x_resolution;
   int y_resolution;
};

computer_screen::computer_screen(string type, long colors, int x_res, int y_res) {
  computer_screen::type.clear();
  computer_screen::type += type;
  computer_screen::colors = colors;
  computer_screen::x_resolution = x_res;
  computer_screen::y_resolution = y_res;
}

void computer_screen::show_screen(void) {
  cout << "Тип экрана: " << type << endl;
  cout << "Цветов: " << colors << endl;
  cout << "Разрешение: " << x_resolution << " на " << y_resolution << endl;
}

class mother_board {
public:
  mother_board(int, int, int);
  void show_mother_board(void);
private:
  int processor;
  int speed;
  int RAM;
};

mother_board::mother_board(int processor, int speed, int RAM) {
  mother_board::processor = processor;
  mother_board::speed = speed;
  mother_board::RAM = RAM;
}

void mother_board::show_mother_board(void) {
  cout << "Процессор: " << processor << endl;
  cout << "Частота: " << speed << "МГц" << endl;
  cout << "ОЗУ: " << RAM << " МВайт" << endl;
}

class computer : public computer_screen, public mother_board {
public:
  computer(string, int, float, string, long, int, int, int, int, int);
  void show_computer (void);
private:
  string name;
  int hard_disk;
  float floppy;
};

computer::computer(string name, int hard_disk, float floppy, string screen,
                   long colors, int x_res, int y_res, int processor,
		   int speed, int RAM) : computer_screen(screen, colors,
		   x_res, y_res), mother_board(processor, speed, RAM) {
  computer::name.clear();
  computer::name += name;
  computer::hard_disk = hard_disk;
  computer::floppy = floppy;
}

void computer::show_computer(void) {
  cout << "Тип: " << name << endl;
  cout << "Жесткий диск: " << hard_disk << "МВайт" << endl;
  cout << "Гибкий диск: " << floppy << "МВайт" << endl;
  show_mother_board();
  show_screen();
}

int main(void) {
  computer my_pc("Compaq", 212, 1.44, "SVGA", 16000000, 640, 480, 486, 66, 8);
  my_pc.show_computer();
  return 1;
}
