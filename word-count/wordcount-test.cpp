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
  for (string word : words){
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
    words.push_back(word);
      }
    infile.close();
  }

return words;
}

map<string, int> get_word_count(const std::vector<string>& words) {
  map<string, int> word_count{};

  for (string word :words){
    auto search = word_count.find(word);
    if (search == word_count.end()){
      word_count[word] = 1; //not found -add word with count of 1
    } else {
      word_count[word] += 1; //found - increment count for word
    }
    }

  return word_count;
}
