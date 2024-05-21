#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;

    int minx=INT_MAX,miny=INT_MAX,maxx=INT_MIN,maxy=INT_MIN;
    while(n--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        maxx=max(maxx,x1);
        minx=min(minx,x2);

        maxy=max(maxy,y1);
        miny=min(miny,y2);
    }
    return abs(minx-maxx)*abs(miny-maxy);
    return 0;
}
