#pragma once
#include <vector>
#include <utility>

// Сортировка шейкером: пузырёк в двух направлениях
template <typename T>
void shaker_sort(std::vector<T>& arr)
{
    int left = 0;
    int right = (int)arr.size() - 1;
    bool swapped = true;

    while (swapped && left < right)
    {
        swapped = false;

        // слева направо
        for (int i = left; i < right; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        right--;

        // справа налево
        for (int i = right; i > left; i--)
        {
            if (arr[i - 1] > arr[i])
            {
                std::swap(arr[i - 1], arr[i]);
                swapped = true;
            }
        }
        left++;
    }
}
