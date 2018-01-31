#include <iostream>

using namespace std;

const int height = 20;
const int width = 20;
void display()
{
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      if (y == 0) {
        std::cout << "#";
      }
      else if (x == 0) {
        std::cout << "#";
      }
      else if (y == height -1) {
        std::cout << "#";
      }
      else if (x == width -1) {
        std::cout << "#";
      }else{
        std::cout << " ";
      }
    }
    std::cout << '\n';
  }
}
int main()
{
    display();
    return 0;
}
