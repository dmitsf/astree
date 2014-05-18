#pragma once

#include <string>

using std::string;

class Some {
  public:
    static const int NOT_AN_IDENTIFIER = -1;

    Some();
    Some(int some_id, string const &name);

    int ID() const;
    string const &Name() const;

    void ResetID();
    void ResetID(int some_id);

    void ChangeName(string const &name);

    void SomeChanges(int some_id, string const &name);

  private:
    int mID;
    string mName;
};
