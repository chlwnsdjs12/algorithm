#include <iostream>
#include <vector>

using namespace std;

struct min_heap
{
    vector<int> arr;

    min_heap()
    {
        arr = vector<int>();
    }

    void add_num(int n)
    {
        arr.push_back(n);
        int current = arr.size()-1;    // 현재 탐색중인 노드
        while(current > 0)
        {
            int parent = (current - 1) / 2;
            // 자식 노드가 부모 노드보다 작다면
            if(arr[current] < arr[(parent)])
            {
                swap(arr[current], arr[parent]);
                current = parent;
            }
            else
            {
                break;
            }
        }
    }

    int delete_num()
    {
        int n = arr[0];
        arr[0] = arr[arr.size() - 1];
        arr.pop_back();
        int current = 0;                // 현재 탐색중이 노드
        while(true)
        {
            int child_1 = current * 2 + 1;    // 왼쪽 자식 노드
            int child_2 = current * 2 + 2;    // 오른쪽 자식 노드
            int small = current;

            // 부모 노드 > 왼쪽 자식 노드
            if(child_1 < arr.size() && arr[child_1] < arr[small])
            {
                small = child_1;
            }
            // 부모 노드 > 오른쪽 자식 노드
            if(child_2 < arr.size() && arr[child_2] < arr[small])
            {
                small = child_2;
            }
            // 부모 노드 <= 모든 자식 노드
            if(small == current)
            {
                break;
            }
            swap(arr[current], arr[small]);
            current = small;
        }

        return n;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int inputs;
    cin >> inputs;

    min_heap heap;

    for(int i=0; i<inputs; i++)
    {
        int n;
        cin >> n;

        if(n == 0 && heap.arr.size() == 0)
        {
            cout << "0\n";
        }
        else if(n == 0 && heap.arr.size() > 0)
        {
            cout << heap.delete_num() << "\n";
        }
        else
        {
            heap.add_num(n);
        }
    }
}