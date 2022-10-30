// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include "operating_system.h"

class Android : public OS {
public:
    Android():OS()
    {}
    Android(string Name, string Version, string Creator) :OS(Name, Version, Creator)
    {}
    string Operation() const override {
        return "start OS(" + Name + " " + Version + "). Check Google Play!";
    }
    ~Android() = default;

};
