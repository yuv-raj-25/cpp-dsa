#include <vector>

using namespace std;

tuple<int, int> find_ideal_placement(vector<vector<int>>& room, int new_flower_pot) {
  for (int row_index = room.size() - 1; row_index >= 0; row_index--) {
    for (int column_index = 0; column_index < room[row_index].size(); column_index++) {
      if (room[row_index][column_index] >= new_flower_pot) {
        return {row_index, column_index};
      }
    }
  }
  return {-1, -1};
}

int main() {
  // Test case 1:
  vector<vector<int>> room1 = {{1, 2, 3, 4, 5},
                               {6, 8, 9, 10, 11},
                               {12, 13, 14, 15, 16}};
  int new_flower_pot1 = 7;

  tuple<int, int> ideal_placement1 = find_ideal_placement(room1, new_flower_pot1);

  if (ideal_placement1 != make_tuple(1, 1)) {
    cout << "Test case 1 failed!" << endl;
    return 1;
  }

  // Test case 2:
  vector<vector<int>> room2 = {{1, 3, 4},
                               {7, 8, 9},
                               {11, 13, 15}};
  int new_flower_pot2 = 14;

  tuple<int, int> ideal_placement2 = find_ideal_placement(room2, new_flower_pot2);

  if (ideal_placement2 != make_tuple(2, 2)) {
    cout << "Test case 2 failed!" << endl;
    return 1;
  }

  // Test case 3:
  vector<vector<int>> room3 = {{1, 3, 4},
                               {7, 8, 9},
                               {11, 13, 15}};
  int new_flower_pot3 = 16;

  tuple<int, int> ideal_placement3 = find_ideal_placement(room3, new_flower_pot3);

  if (ideal_placement3 != make_tuple(-1, -1)) {
    cout << "Test case 3 failed!" << endl;
    return 1;
  }

  cout << "All test cases passed!" << endl;
  return 0;
}