#pragma once
#include <vector>

// Сортировка вставкой с бинарным поиском места вставки
template <typename T>
void binary_insertion_sort(std::vector<T>& arr)
{
    for (int i = 1; i < (int)arr.size(); i++)
    {
        T key = arr[i];

        // бинарный поиск позиции в отсортированной части [0, i)
        int left = 0;
        int right = i;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] > key)
                right = mid;
            else
                left = mid + 1;
        }

        // сдвиг элементов вправо и вставка
        for (int j = i; j > left; j--)
            arr[j] = arr[j - 1];

        arr[left] = key;
    }
}
