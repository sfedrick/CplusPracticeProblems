using namespace std;
#include <vector>
class MedianFinder {
private:
    vector<int> med_array = {};
    int insert_pos(int num);
public:
    MedianFinder();
    void addNum(int num);
    double findMedian();
    vector<int> get_array();
    void print_array();
};