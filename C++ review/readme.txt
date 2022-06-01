use g++ file 
this file should contain a main function 
then run executable to see output with
./a.exe

the make file is structure in this way 
(RuleName): (neededRule or neededfile) <-this rule needs to be compiled
    what runs when (RuleName) is called after make
(neededRule):  neededFile.cpp
    g++ neededFile.cpp -o neededFileEX
run: (neededRule)
    ./neededFileEX
see GNUmakefile for an example