#include <iostream>

class RunnerInfo{
    public:
        void SetTime(int timeRunSecs);
        void SetDist(double distRunMiles);
        double GetSpeedMph();

    private:
        int timeRun;
        double distRun;

};

void RunnerInfo::SetTime(int timeRunSecs){
    timeRun = timeRunSecs;
}

void RunnerInfo::SetDist(double distRunMiles){
    distRun = distRunMiles;
}

double RunnerInfo::GetSpeedMph(){
    return distRun / (timeRun / 3600.0);
}

int main(){
    RunnerInfo runner1;
    RunnerInfo runner2;

    runner1.SetTime(360);
    runner1.SetDist(1.2);

    runner2.SetTime(200);
    runner2.SetDist(0.5);

    std::cout << "Runner1's speed in Mph: " << runner1.GetSpeedMph() << std::endl;
    std::cout << "Runner2's speed in Mph: " << runner2.GetSpeedMph() << std::endl;

    return 0;
}

