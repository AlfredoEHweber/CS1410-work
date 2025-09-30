#include <iostream>
using namespace std;

enum class BillKind {
    ONE, FIVE, TEN, TWENTY
};

struct CashInOneBillKind{
    BillKind kind;
    int count;
};

struct Cash {
    CashInOneBillKind ones;
    CashInOneBillKind fives;
    CashInOneBillKind tens;
    CashInOneBillKind twenties;
};
int main(){
    Cash inWallet{
        {}
    }
    return 0;
}