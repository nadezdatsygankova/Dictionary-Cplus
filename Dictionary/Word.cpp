#include "Word.h"
#include <iostream>
#include<algorithm>

Word::Word()
{
   this->word = "";
   this->meaning = "";
   this->synonym = "";
   this->antonym = "";
   this->example_sentence = "";
}

Word::Word(std::string word, std::string meaning, std::string synonym, std::string antonym, std::string example_sentence)
{
   this->word = word;
   this->meaning = meaning;
   this->synonym = synonym;
   this->antonym = antonym;
   this->example_sentence = example_sentence;
}

void Word::setData(std::string word, std::string meaning, std::string synonym, std::string antonym, std::string example_sentence)
{
   this->word = word;
   this->meaning = meaning;
   this->synonym = synonym;
   this->antonym = antonym;
   this->example_sentence = example_sentence;
}

std::string Word::getWord() const
{
   return word;
}
std::string Word::getMeaning() const
{
   return meaning;
}
std::string Word::getSynonym() const
{
   return synonym;
}
std::string Word::getAntonym() const
{
   return antonym;
}
std::string Word::getExample_sentence() const
{
   return example_sentence;
}

bool operator< (const Word& word1, const Word& word2)
{
   return (word1.word < word2.word);
}

bool operator== (const Word& word1, const Word& word2)
{
   return (word1.word == word2.word);
}
