ass Student{
  int scores[SCORE];
  
  void input(){
    int *pointer=&scores[0];
    int cnt= SCORE;
    while(cnt){
        cin>>*pointer;
        cnt--;
        pointer++;
    };
  }
  int calculateTotalScore(){
    int *pointer = &scores[0];
    int cnt= SCORE;
    int sum=0;
    while(cnt){
        sum+=*pointer;
        cnt--;
        pointer++;
    }
    return sum;
  }

};