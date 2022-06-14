#include <bits/stdc++.h>
 
using namespace std;
 
void stale_flippant() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
struct Rectangle{
    long long x1, y1, x2, y2;
 
    long long area()
    {   
        // cout << (x2-x1)*(y2-y1) << '\n';
        return (x2-x1)*(y2-y1);
    }
 
    bool intersect(Rectangle other)
    {
        long long xSide = max(min(x2, other.x2) - max(x1, other.x1), 0LL);
        long long ySide = max(min(y2, other.y2) - max(y1, other.y1), 0LL);
 
        // cout << xSide << ' ' << ySide << '\n';
        return xSide * ySide;
    }
 
    Rectangle getIntersection(Rectangle other)
    {
        if (intersect(other))
        {
            Rectangle rect;
            rect.x1 = max(x1, other.x1);
            rect.x2 = min(x2, other.x2);
            rect.y1 = max(y1, other.y1);
            rect.y2 = min(y2, other.y2);
 
            return rect;
        }
 
        return Rectangle();
    }
};
 
int main()
{   
    stale_flippant();
 
    Rectangle a, b, c;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
 
 
    Rectangle r1 = a.getIntersection(b);
    Rectangle r2 = a.getIntersection(c);
    Rectangle r3 = r1.getIntersection(r2);
    cout << ((r1.area() + r2.area() - r3.area() < a.area()) ? "YES\n" : "NO\n") ;
    return 0;
}