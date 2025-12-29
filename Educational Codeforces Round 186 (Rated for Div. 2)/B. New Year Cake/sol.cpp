#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int maxLayers = 0;
        long long a, b;
        cin >> a >> b;
        for (int x = 0; x < 30; x++) {
            long long whiteA = 0;
            long long darkA = 0;
            long long whiteB = 0;
            long long darkB = 0;
            for (int i = 0; i < x; i++) {
                long long layerSize = (1LL << i);
                if (i % 2 == 0) {
                    whiteA += layerSize;
                    darkB += layerSize;
                }
                else {
                    whiteB += layerSize;
                    darkA += layerSize;
                }
            }
            bool candocaseA = (whiteA <= a && darkA <= b);
            bool candocaseB = (whiteB <= a && darkB <= b);
            if (candocaseA || candocaseB) {
                maxLayers = x; 
            }
            else {
                break;
            }
        }
        cout << maxLayers << endl;
    }
    return 0;
}