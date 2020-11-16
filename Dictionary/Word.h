#pragma once
#include<iostream>

class Word
{
private:
   std::string word;
   std::string meaning;
   std::string synonym;
   std::string antonym;
   std::string example_sentence;

public:
   Word();
   Word(std::string word, std::string meaning, std::string synonym, std::string antonym, std::string example_sentence);
   void setData(std::string word, std::string meaning, std::string synonym, std::string antonym, std::string example_sentence);
   std::string getWord() const;
   std::string getMeaning() const;
   std::string getSynonym() const;
   std::string getAntonym() const;
   std::string getExample_sentence() const;

   friend bool operator< (const Word& word1, const Word& word2);
   friend bool operator== (const Word& word1, const Word& word2);

};