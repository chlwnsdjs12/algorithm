#include <iostream>
#include <vector>

using namespace std;

struct max_heap
{
    vector<int> arr;
    
    max_heap()
    {
        arr = vector<int>();
    }

    void add_num(int n)
    {
        arr.push_back(n);
        int current_node = arr.size()-1;
        while(current_node != 0)
        {
            int parent = (current_node - 1) / 2;
            if(arr[current_node] > arr[parent])
            {
                swap(arr[current_node], arr[parent]);
                current_node = parent;
            }
            else
            {
                break;
            }
        }
    }

    int delete_num()
    {
        int output = arr[0];
        arr[0] = arr[arr.size()-1];
        arr.pop_back();
        int current_node = 0;

        while(true)
        {
            int left_child = current_node * 2 + 1;
            int right_child = current_node * 2 + 2;
            int big = current_node;

            if(left_child < arr.size() && arr[big] < arr[left_child])
            {
                big = left_child;
            }
            if(right_child < arr.size() && arr[big] < arr[right_child])
            {
                big = right_child;
            }
            if(big == current_node)
            {
                break;
            }
            swap(arr[current_node], arr[big]);
            current_node = big;
        }

        return output;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    max_heap heap;

    for(int t=0; t<testcase; t++)
    {
        int n;
        cin >> n;

        if(n == 0 && heap.arr.size() != 0)
        {
            cout << heap.delete_num() << "\n";
        }
        else if(n == 0 && heap.arr.size() == 0)
        {
            cout << "0\n";
        }
        else
        {
            heap.add_num(n);
        }
    }
}