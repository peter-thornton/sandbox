/*
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[]) {
  std::string filename;

  std::cout << "enter file name" << std::endl;
  std::cin >>  filename;




  //std::cout <<  " hello " << name << std::endl;
}


*/
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> load_words (string filename);
map<string, int> get_word_count (const vector<string>& words);

int main () {
  cout <<"The Word Counter program\n\n";

  string filename = "testwords.txt";
  auto words = load_words(filename);

  cout << words.size() << " WORDS: ";
  for (strubg word : words){
    cout << word << ' ';
  }
  cout << endl << endl;

  auto word_count = get_word_count(words);

  cout << word_count.size() << " UNIQUE WORDS: ";
  for (auto pair : word_count){
    cout << pair.first << ' ';
  }
  cout << endl << endl;

  cout << "COUNT PER WORD: ";
  for (auto pair : word_count){
      cout << pair.first << '=' << pair.second << ' ';
  }
  cout << endl << endl;
}

vector<string> load_words (string filename){
  vector<string> words;
  ifstream infile(filename);

  if (infile){
    string word;
    while(infile >> word){

      string new_word = "";

    }

  }
}
