#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000000
int k;
vector<int>a, b, c;
vector<vector<int>>multiply(vector<vector<int>>A, vector<vector<int>>B) {
   // To Store We are creating a new Vector:
   vector<vector<int>>C(k + 1, vector<int>(k + 1));
   // Logic to multiply Two matrices
   for (int i = 1; i <= k; i++) {
      for (int j = 1; j <= k; j++) {
         for (int x = 1; x <= k; x++) {
            C[i][j] = (C[i][j] + (A[i][x] * B[x][j] % mod) % mod);
         }
      }
   }
   return C;
}

// Fast Power Calculation:
vector<vector<int>>power(vector<vector<int>>A, int p) {
   if (p == 1) {
      return A;
   }
   if (p & 1) {
      return multiply(A, power(A, p - 1));
   }
   vector<vector<int>>X = power(A, p / 2);
   return multiply(X, X);
}

int compute(int n) {
   // Base Case:
   if (n == 0) {
      return 0;
   }

   if (n <= k) {
      return b[n - 1];
      // Matrix Transformation is of 1 based indexing and b vector is of 0 based indexing:
   }

   // Trasnform F1 i.e b vector to 1 based indexing:
   vector<int>F1(k + 1);
   for (int i = 1; i <= k; i++) {
      F1[i] = b[i - 1];
   }

   // Transformation Matrix:
   vector<vector<int>>T(k + 1, vector<int>(k + 1));

   for (int i = 1; i <= k; i++) {
      for (int j = 1; j <= k; j++) {
         if (i < k) {
            if (j == i + 1) {
               // Diagonal:
               T[i][j] = 1;
            } else {
               T[i][j] = 0;
            }

         } else { //When i==k i.e. coefficient:
            // Put the coefficients in the reverse order:
            T[i][j] = c[k - j];
         }
      }
   }
   T = power(T, n - 1);

   // F(n): Matrix Calculate: F(n) matrix ke last me hain:

   int result = 0;
   for (int i = 1; i <= k; i++) {
      result = (result + (T[1][i] * F1[i]) % mod) % mod;
   }

   return  result;

}
int32_t main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t, n;
   cin >> t;
   while (t--) {
      cin >> k;
      // Vector F1:
      for (int i = 0; i < k; i++) {
         int x;
         cin >> x;
         b.push_back(x);
      }

      // Coefficients
      for (int i = 0; i < k; i++) {
         int x;
         cin >> x;
         c.push_back(x);
      }

      // the value of n:
      cin >> n;
      cout << compute(n) << endl;
      b.clear();
      c.clear();
   }
   return 0;
}
