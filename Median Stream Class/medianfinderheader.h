using namespace std;
#include <vector>
class MedianFinder {
private:
   
    int insert_pos(int num);
    int insert_pos_binary(vector<int> y,int start, int end, int num);
public:
    vector <int> med_array;
   
    MedianFinder();
    void addNum(int num);
    double findMedian();
    vector<int> get_array();
    void print_array();
};