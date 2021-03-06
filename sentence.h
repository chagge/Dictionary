#ifndef SENTENCE_H
  #define SENTENCE_H

#include "element.h"

class Sentence : public Element
{
  public:
    Sentence(string s);
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
    ~Sentence();
  private:
    string base;
    string basecheck;
    string compare;
    set<string> temp;
    vector<string> vcomplete;
    vector<string> vcheck;
    vector<int> hamming;
    set<pair<int, string> > checksort;
    int count;
};//Sentence

#endif
