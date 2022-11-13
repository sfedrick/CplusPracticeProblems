using namespace std;
#include <vector>
class MedianFinder {
private:
    vector<int> array = {};
public:
    MedianFinder();
    void addNum(int num);
    double findMedian();
    vector<int> get_array();
    void print_array();
};