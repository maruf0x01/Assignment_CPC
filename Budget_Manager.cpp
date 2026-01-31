#include<bits/stdc++.h>
using namespace std;

void processTransaction(int& current_balance, int amount, bool is_fee = false) {
    if(is_fee)
    {
        if(current_balance - amount < 0)
        {
            cout << "Insufficient Funds" << endl;
            return;
        }
        current_balance -= amount;
    }
    else
    {
        current_balance += amount;
    }
}

int main()
{
    int balance = 500;
    processTransaction(balance, 200);
    cout << "Balance after adding money: " << balance << endl;
    processTransaction(balance, 300, true);
    cout << "Balance after paying fee: " << balance << endl;
    processTransaction(balance, 600, true);
    cout << "Balance after failed fee attempt: " << balance << endl;
    return 0;
}