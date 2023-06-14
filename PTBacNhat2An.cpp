#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float a[n];
	for(int i = 0; i < n; i++)
	{
		float a1, b1, c1;
	    float a2, b2, c2; 
	
	    cin >> a1;
	    cin >> b1;
	    cin >> c1;
	    cin >> a2;
	    cin >> b2;
	    cin >> c2;
	
	    float D = a1 * b2 - a2 * b1; 
	
	    if (D == 0 && (a1 * c2 - a2 * c1 == 0)) {
	        cout << "Many solutions" << endl;
	    } else if (D == 0) {
	        cout << "No solution" << endl;
	    } else {
	        float Dx = c1 * b2 - c2 * b1; 
	        float Dy = a1 * c2 - a2 * c1; 
	
	        float x = Dx / D; 
	        float y = Dy / D; 
	
	        printf("%.6f %.6f\n", x, y);
	    }
	}
    

    return 0;
}

