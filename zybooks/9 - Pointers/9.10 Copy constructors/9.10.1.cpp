// Write a copy constructor for CarCounter that assigns origCarCounter.carCount to the 
// constructed object's carCount. Sample output for the given program:
// Cars counted: 5


#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      CarCounter(const CarCounter& origCarCounter);
      void SetCarCount(const int count) {
          carCount = count;
      }
      int GetCarCount() const {
          return carCount;
      }
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
   return;
}

// FIXME add copy constructor

/* Your solution goes here  */
CarCounter::CarCounter(const CarCounter& origCarCounter){ // copy constructor & needed and new orig parameter
   carCount = origCarCounter.carCount;                    // set origCarCounter to copy constructor's carCount
   return;                                                // constructors use a blank return
}

void CountPrinter(CarCounter carCntr) {
   cout << "Cars counted: " << carCntr.GetCarCount();
   return;
}

int main() {
   CarCounter parkingLot;
   parkingLot.SetCarCount(5);
   CountPrinter(parkingLot);

   return 0;
}
