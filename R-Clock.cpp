#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <chrono>
#include <vector>
#include <utility>
#include <iomanip>
#include <string.h>
#include <sstream>
#include <cmath>

#include "modelation.hpp"

using namespace std;

stringstream setTextLeftMargin(float SizeToBeHandled, int TextSize){
    SizeToBeHandled /= 2;
    SizeToBeHandled -= (TextSize / 1.5);
    stringstream TheStream;

    TheStream << setw(ceil(SizeToBeHandled)) << setfill(' ') << "";

    return TheStream;
}

stringstream setLeftMargin(float SizeToBeHandled, bool needBeSmall){
    stringstream TheStream;

    SizeToBeHandled /= 2;
    if(needBeSmall){
        SizeToBeHandled -= (15 * 1.5);
    }
    else{
        SizeToBeHandled -= (23 * 1.5);
    }
    TheStream << setw(ceil(SizeToBeHandled)) << setfill(' ') << "";

    return TheStream;
}

void printBlankSpace(int SizeToBeHandled){
    SizeToBeHandled = SizeToBeHandled / 2 - 3;

    cout << setw(SizeToBeHandled) << setfill('\n') << "";
}

pair<int,int> splitNumberIfGreaterThan10(int number){
    if(number >= 10){
        return make_pair(number / 10, number % 10);
    }
    else{
        return make_pair(0,number);
    }
}

void printOnScreen(vector<int> hourMinutesSeconds, stringstream LeftMargin){
    for(int i = 0; i < 5; i++){
        cout <<  LeftMargin.str().c_str();
        for(int j = 0; j < hourMinutesSeconds.size(); j++){
            for(int k = 0; k < 3; k++){
                cout << arrayOfDisplays[hourMinutesSeconds.at(j)][i][k];
            }
            cout << "  ";
        }
        cout << endl;
    }
}

int main(int argc, char **argv){
    struct winsize w;
    time_t now;
    struct tm *timer;
    pair<int,int> hour, minute, second;
    char dateBuffer[128];
    bool small = false;

    if(argc > 1){
        if(strcmp(argv[1],"-s") == 0){
            small = true;
        }
    }

    while(true){
        system("clear");

        ioctl(STDOUT_FILENO,TIOCGWINSZ,&w);
        printBlankSpace(w.ws_row);

        now = time(NULL);
        timer = localtime(&now);

        strftime(dateBuffer,127,"%A, %d %b %Y",timer);
        hour = splitNumberIfGreaterThan10(timer->tm_hour);
        minute = splitNumberIfGreaterThan10(timer->tm_min);
        second = splitNumberIfGreaterThan10(timer->tm_sec);

        if(small){
            printOnScreen({hour.first,hour.second,10,minute.first,minute.second}, setLeftMargin(w.ws_col,small));
        }
        else{
            printOnScreen({hour.first,hour.second,10,minute.first,minute.second,10,second.first,second.second}, setLeftMargin(w.ws_col,small));
        }
        cout << endl << setTextLeftMargin(w.ws_col,strlen(dateBuffer)).str().c_str() << "\033[94;1m" << dateBuffer << "\033[0m" << endl;

        sleep(1);
    }

    return 0;
}