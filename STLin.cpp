#include <iostream>
// #include <array>
#include <vector>
// #include <deque>
// # include <list>
// #include <stack>
// #include <queue>
// #include <set>
// # include <map>
#include<algorithm>

using namespace std;

int main()
{
    // int basic[3] = {1, 2, 3};

    // array<int, 5> a = {8, 10, 17, 1, 3};

    // int size = a.size();

    // for (int s = 0; s < size; s++)
    // {
    //     cout << a[s] << endl;
    // }

    // cout << "Element at 2nd index is " << a.at(2) << endl;
    // cout << "Empty or not " << a.empty() << endl;
    // cout << "first element" << a.front() << endl;
    // cout << "last element" << a.back() << endl;



    // ***** Vectors

    // vector<int> v;
    // vector<int> a(5,1);
    // vector <int> last(a);
    // cout<<"print a"<<endl;

    // for(int i :last)
    // {
    //     cout<<i<<" ";
    // }

    // cout<<"capacity: "<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"capacity: "<<v.capacity()<<endl;
    
    // v.push_back(2);
    // cout<<"capacity: "<<v.capacity()<<endl;
    
    // v.push_back(3);
    // cout<<"capacity: "<<v.capacity()<<endl;
    // cout<<"size: "<<v.size()<<endl;

    // cout<<"Element at 2nd index"<<v.at(2)<<endl;
    
    // cout<<"front"<<v.front()<<endl;
    // cout<<"back"<<v.back()<<endl;

    // cout<<"before pop"<<endl;
    // for(int i:v)
    // {
    //     cout<<i<<" ";

    // }cout<<endl;

    // v.pop_back();
    // cout<<"after pop"<<endl;
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"Befor clear size"<<v.size()<<endl;
    // v.clear();
    // cout<<"After clear size"<<v.size()<<endl;



    // ************** Deque

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);

    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // // d.pop_back();
    // cout<<endl;
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }

    // cout<<"Print first index elements"<<d.at(1)<<endl;

    // cout<<"front"<<d.front()<<endl;
    // cout<<"back"<<d.back()<<endl;

    // cout<<"Empty or not"<<d.empty()<<endl; 
    // cout<<"Before erase"<<d.size()<<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout<<"after erase"<<d.size()<<endl;
    // for(int i:d)
    // {
    //     cout<<i<<endl;
    // }

    // *********** List

    // list <int> l;  // list is basically a doubly linked list
    // l.push_back(1);
    // list <int> n(5,100);

    // l.push_front(2);

    // for(int i: l)
    // {
    //     cout<<i<<" ";
    // }

    // cout<<endl;
    // l.erase(l.begin());
    // cout<<"after erase"<<endl;
    // for(int i:l)
    // {
    //     cout<<i<<" ";
    // }


    // ****************** Stack

    // stack<string> s;
    // s.push("love");
    // s.push("babbar");
    // s.push("kumar");

    // cout<<"Top element "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element "<<s.top()<<endl;

    // *********** queue

    // queue<string> q;
    // q.push("love");
    // q.push("babbar");
    // q.push("kumar");

    // cout<<"First Element "<<q.front()<<endl;
    // q.pop();
    // cout<<"fist element "<<q.front()<<endl;

    // ********************* priority queue
    // priority_queue <int> maxi; // max heap

    // priority_queue<int, vector<int>, greater<int>> mini;
    // // min heap


    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(0);

    // int  n = maxi.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;


    // mini.push(3);
    // mini.push(4);
    // mini.push(1);
    // mini.push(0);
    // mini.push(5);
    // int n1 = mini.size();
    // for (int i = 0; i < n1; i++)
    // {
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }cout<<endl;


    // **************** Set
    // set <int> s;
    // s.insert(5);
    // s.insert(6);
    // s.insert(7);
    // s.insert(5);
    // s.insert(4);
    // s.insert(5);
    // s.insert(1);
    // s.insert(1);

    // for(auto i:s)
    // {
    //     cout<<i<<endl;
    // }cout<<endl;

    // // set<int>;
    // auto it = s.begin();
    // it++;

    // s.erase(7);
    // for(auto i:s)
    // {
    //     cout<<i<<endl;
    // }

    // cout<<endl;
    // cout<<endl;
    // cout<<endl;
    // auto a = s.end();
    // a--;
    // cout<<*a<<endl;




    // **************** Map

    // map <int, string> m;
    // m[1] = "babar";
    // m[2] = "love";
    // m[13] = "kumar";

    // m.insert({5, "bhees"});
    // cout<<"before erase"<<endl;
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // cout<<"finding 13"<<m.count(13)<<endl;

    // m.erase(13);

    // cout<<"after erase"<<endl;
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // auto it = m.find(5);
    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout<<(*i).first<<endl;
    // }
    
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout<<"finding 6"<<binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"lower bound"<< lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"upper bound"<< upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;


    int a = 3;
    int b = 5;
    cout<<"max "<< max(a,b);
    cout<<"min "<< min(a,b);
    swap(a, b);
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<"string "<<s<<endl;
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate"<<endl;

    for(int i:v)
    {
        cout<< i<<" "<<endl;
    }

    





    return 0;
}

































// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> a;
//     a.push_back(1);
//     a.push_back(1);
//     a.push_back(1);
//     a.push_back(1);
//     a.push_back(1);
//     a.push_back(1);
//     a.push_back(1);

//     // for(auto it : a){
//     //     cout<<it<<" ";
//     // }
//     for(auto it = a.begin(); it != a.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
//     return 0;
// }


