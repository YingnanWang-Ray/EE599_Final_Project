#include "solution.h"
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

MaxHeap::MaxHeap(std::vector<int> input){
    std::make_heap(input.begin(),input.end());
    data_ = input;
}

int MaxHeap::GetParentIndex(int i){
    if(i == 0){
        return INT32_MIN;
    }
    else{
        return (i - 1) / 2;
    }
}

int MaxHeap::GetLeftIndex(int i){
    if ((unsigned)((2 * i) + 1) >= data_.size()) {
        return INT32_MIN;
    }
    return (2 * i) + 1;
}

int MaxHeap::GetRightIndex(int i){
    if ((unsigned)((2 * i) + 2) >= data_.size()) {
        return INT32_MIN;
    }
    return (2 * i) + 2;
}

int MaxHeap::GetSmallestChildIndex(int i){
    if(((unsigned)(2 * i) + 1) >= data_.size()||((unsigned)(2 * i) + 2) >= data_.size()){
        return INT32_MIN;
    }else if(GetLeft(i) > GetRight(i)){
        return GetRightIndex(i);
    }else if(GetLeft(i) < GetRight(i)){
        return GetLeftIndex(i);
    }
}

int MaxHeap::GetLargestChildIndex(int i){
    if((unsigned)((2 * i) + 1) >= data_.size()||((unsigned)(2 * i) + 2) >= data_.size()){
        return INT32_MIN;
    }else if(GetLeft(i) > GetRight(i)){
        return GetLeftIndex(i);
    }else if(GetLeft(i) < GetRight(i)){
        return GetRightIndex(i);
    }
}

int MaxHeap::GetLeft(int i){
    if ((unsigned)((2 * i) + 1) >= data_.size()) {
        return INT32_MIN;
    }
    return data_[(2 * i) + 1];
}

int MaxHeap::GetRight(int i){
    if ((unsigned)((2 * i) + 2) >= data_.size()) {
        return INT32_MIN;
    }
    return data_[(2 * i) + 2];
}

int MaxHeap::GetParent(int i){
    if(i == 0){
        return INT32_MIN;
    }
    else{
        return data_[(i - 1) / 2];
    }
}

int MaxHeap::top(){
    if (data_.size() == 0) {
        return INT32_MAX;
    } else {
        return data_[0];
    }
}

void MaxHeap::push(int input){
    data_.push_back(input);
    TrickleUp(data_.size() - 1);
} 

void MaxHeap::pop(){
    std::swap(data_[0], data_[data_.size() - 1]);
    data_.pop_back();
    TrickleDown(0);
}

void MaxHeap::TrickleUp(int i){
    while (i != 0 && GetParent(i) < data_[i]) {
        std::swap(data_[i], data_[GetParentIndex(i)]);
        i = GetParentIndex(i);
    }
}

void MaxHeap::TrickleDown(int i){
    while((unsigned)((2 * i) + 1) < data_.size()||((unsigned)(2 * i) + 2) < data_.size()){
        int temp = GetLargestChildIndex(i);
        std::swap(data_[i], data_[temp]);
        i = temp;
    }
}

