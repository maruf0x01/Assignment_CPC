#include<bits/stdc++.h>
using namespace std;

void takeDamage(int& health, int damage)
{
    health -= damage;
}

int main()
{
    int playerHP = 100;
    takeDamage(playerHP, 30);
    takeDamage(playerHP, 20);
    cout << "Final HP: " << playerHP << endl;
    return 0;
}