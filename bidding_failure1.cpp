# include <iostream>
# include <algorithm>
# include <string>

using namespace std;

//입찰자명 및 입찰액
struct bid_price{
    string bidder;
    size_t price;

};


int main() {
    // 입찰자 수 선정
    int bidder_number;
    cin >> bidder_number;

    bid_price arr[bidder_number];

    //입찰자 수에 따라 반복
    for (int i = 0; i < bidder_number; i++)
    {
//        string bidder;
//        int price;
//        cin >> bidder >> price;
//        arr[i].bidder = bidder;
//        arr[i].price = price;
        cin >> arr[i].bidder >> arr[i].price;

    };


    //최댓값을 찾기 위한 반복문
    auto maxBid = max_element(arr,arr+bidder_number,[](const bid_price& a,const bid_price& b) {
        return a.price < b.price ;
    });



    size_t maxPrice;
    maxPrice = maxBid -> price;

    int same_number = 0;
    for (int i = 0; i < bidder_number; i++){
        if (arr[i].price == maxPrice){
            same_number ++;
        };
    }


    string maxBidder;
    maxBidder = maxBid -> bidder;
    cout << maxBidder;

//
//    for (int i = 0; i < bidder_number; i++){
//        if (arr[i].price > maxprice) {
//            maxprice = arr[i].price;
//            maxbidder = *arr[i].bidder;
//        };
//
//    };



}
