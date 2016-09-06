//
//  main.cpp
//  ChessTarea
//
//  Created by Esteban Torres Alarcon on 8/31/16.
//  Copyright © 2016 CeroUno. All rights reserved.
// 	This program will tell you all the posible moves for your knight anywhere on the board.

#include <iostream>
using namespace std;


int main() {
    int iColumn;
    int iRow;
    
    
    
    cout<<"Choose your coordinates for your knight"<<endl;
    cout<<"";
    cin>> iColumn;
    cout<<"";
    cin>> iRow;
    cout<<"MOVES:"<<endl;
    
    
        if (iColumn == 1 && iRow == 1) {
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 1 && iRow == 2) {
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 1 && iRow == 3)||((iColumn == 1 && iRow == 4))||((iColumn == 1 && iRow == 5 ))||(iColumn == 1 && iRow == 6)) {
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 1 && iRow == 7) {
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 1 && iRow == 8) {
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            }
        if (iColumn == 2 && iRow == 1) {
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 2 && iRow == 2) {
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 2 && iRow == 3)||((iColumn == 2 && iRow == 4))||((iColumn == 2 && iRow == 5 ))||(iColumn == 2 && iRow == 6)) {
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 2 && iRow == 7) {
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 2 && iRow == 8) {
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 3 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 3 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 3 && iRow == 3)||((iColumn == 3 && iRow == 4))||((iColumn == 3 && iRow == 5 ))||(iColumn == 3 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 3 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 3 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 4 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 4 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 4 && iRow == 3)||((iColumn == 4 && iRow == 4))||((iColumn == 4 && iRow == 5 ))||(iColumn == 4 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 4 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 4 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 5 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 5 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 5 && iRow == 3)||((iColumn == 5 && iRow == 4))||((iColumn == 5 && iRow == 5 ))||(iColumn == 5 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 5 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 5 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 6 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
        } else {
        if (iColumn == 6 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
        } else {
        if ((iColumn == 6 && iRow == 3)||((iColumn == 6 && iRow == 4))||((iColumn == 6 && iRow == 5 ))||(iColumn == 6 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 6 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 6 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 7 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
        } else {
        if (iColumn == 7 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
        } else {
        if ((iColumn == 7 && iRow == 3)||((iColumn == 7 && iRow == 4))||((iColumn == 7 && iRow == 5 ))||(iColumn == 7 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow + 2<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 7 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 7 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn + 1<<" "<<iRow - 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 8 && iRow == 1) {
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
        } else {
        if (iColumn == 8 && iRow == 2) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
        } else {
        if ((iColumn == 8 && iRow == 3)||((iColumn == 8 && iRow == 4))||((iColumn == 8 && iRow == 5 ))||(iColumn == 8 && iRow == 6)) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow + 2<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 8 && iRow == 7) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 2<<" "<<iRow + 1<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        } else {
        if (iColumn == 8 && iRow == 8) {
            cout<<iColumn - 2<<" "<<iRow - 1<<endl;
            cout<<iColumn - 1<<" "<<iRow - 2<<endl;
        }
        
        
        return 0;
        }}}}}}}}}}}}}}}}}}}}
        }}}}}}}}}}}}}}}}}}}
