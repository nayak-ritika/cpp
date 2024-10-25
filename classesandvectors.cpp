#include <iostream>
#include <string>
#include <vector>

class Review{
    public:
        void SetRatingAndComment(int revRating, std::string revComment){
            rating = revRating;
            comment = revComment;
        }

        int GetRating() const {
            return rating;
        }

        std::string GetComment() const {
            return comment;
        }

    private:
        int rating = -1;
        std::string comment = "NoComment";
};

class Reviews{
    public:
        void InputReviews();
        void PrintCommentsForRating(int currRating) const;
        int GetAverageRating() const;

    private:
        std::vector<Review> reviewList;
};

void Reviews::InputReviews(){
    Review currReview;
    int currRating;
    std::string currComment;

    std::cin >> currRating;

    while(currRating >= 0){
        getline(std::cin, currComment);
        currReview.SetRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        std::cin >> currRating;

    }

}

void Reviews::PrintCommentsForRating(int currRating) const {
   Review currReview;
   unsigned int i;

   for (i = 0; i < reviewList.size(); ++i) {
      currReview = reviewList.at(i);
      if (currRating == currReview.GetRating()) {
        std::cout << currReview.GetComment() << std::endl;
      }
   }
}

int Reviews::GetAverageRating() const {
   int ratingsSum;
   unsigned int i;

   ratingsSum = 0;
   for (i = 0; i < reviewList.size(); ++i) {
      ratingsSum += reviewList.at(i).GetRating();
   }
   return (ratingsSum / reviewList.size());
} 


int main(){

    Review allReviews;
    int currRating;
    std::string currName;

    std::cout << "Type rating + comments. To end: -1" << std::endl;
    allReviews.InputReviews();

    std::cout << std::endl << "Average rating: ";
    std::cout << allReviews.GetAverageRating() << std::endl;

    std::cout << std::endl << "Type rating. To end: -1" << std::endl;
    std::cin >> currRating;

    while(currRating != -1){
        allReviews.PrintCommentsForRating(currRating);
        std::cin >> currRating;
    }

    return 0;
}