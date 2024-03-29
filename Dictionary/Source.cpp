#include <iostream>
#include <vector>
#include<algorithm>
#include"Word.h"
#include<string>


using namespace std;

void AddNewWord(vector<Word>* dictionary);
void PrintWords(vector<Word>& dictionary);
void PrintWord(vector<Word>& dictionary,std::string key);
void SortWord(vector<Word>& dictionary);
void findWord(vector<Word>& dictionary, std::string key);
void PrintMenu();

int main()
{
   vector<Word> dictionary;
   int choose;
   std::string search;
   std::string searchWord;
   do {
      PrintMenu();
      std::cin >> choose;
      switch (choose)
      {
      case 1:
         AddNewWord(&dictionary);
         break;
      case 2:
         SortWord(dictionary);
         PrintWords(dictionary);
         break;

      case 3:
         std::cout << "What word do you want to find? Enter: ";
         std::getline(std::cin, search);
        findWord(dictionary, search);
         std::cout << searchWord;
         break;
      case 4:
         std::cout << "Thank you, have a great day";
         exit(0);
      default:
         std::cout << "Invalid input" << std::endl;
         break;
      }
   } while (choose != 4);
   return 0;
}


void AddNewWord(vector<Word>* dictionary)
{
   std::cin.ignore(32767, '\n');
   std::cout << "Enter word :";
   std::string word;
   std::getline(std::cin, word);

   std::cout << "Enter meaning:";
   std::string meaning;
   std::getline(std::cin, meaning);

   std::cout << "Enter synonym :";
   std::string synonym;
   std::getline(std::cin, synonym);

   std::cout << "Enter antonym :";
   std::string antonym;
   std::getline(std::cin, antonym);


   std::cout << "Enter example_sentence :";
   std::string example_sentence;
   std::getline(std::cin, example_sentence);


   dictionary->push_back(Word(word, meaning, synonym, antonym, example_sentence));
}

void PrintWords(vector<Word>& dictionary)
{
  
   for (const auto& Word : dictionary)
   {
      std::cout << "These word is " << Word.getWord() << "." << std::endl;
      std::cout <<"The meaning is "<< Word.getMeaning() << "." << std::endl;
      std::cout << "Synonym is "<< Word.getSynonym() << "." << std::endl;
      std::cout << "Antonym is " << Word.getAntonym() << "." << std::endl;
      std::cout << "Example_sentence is " << Word.getExample_sentence() << "." << std::endl;
   }
}


void SortWord(vector<Word>& dictionary)
{
   std::sort(dictionary.begin(), dictionary.end());
}
void PrintMenu()
{
   std::cout << "1.	Add a word, meaning, synonym,antonym and example_sentence\n2.	Print an alphabetical list of the words sorted by word\n3.	Quit" << std::endl;

}

void findWord(vector<Word>& dictionary, std::string key)
{
 
   SortWord(dictionary);

   int nub = std::find(dictionary.begin(), dictionary.end(), key) != dictionary.end();

   if (std::find(dictionary.begin(), dictionary.end(), key)!=dictionary.end())
   {
      dictionary[nub];
   }
   else
   {
      std::cout << "This word does not exist." << std::endl;
   }
  

}
