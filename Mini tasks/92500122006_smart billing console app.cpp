#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    float price, total = 0, gst, finalAmount;
    int qty;
   cout << "===== SMART BILLING SYSTEM =====\n";
    cout << "Enter number of items: ";
    cin >> n;
  for (int i = 1; i <= n; i++)
    {
        cout << "\nItem " << i << " price: ";
        cin >> price;
        cout << "Item " << i << " quantity: ";
        cin >> qty;
 total = total + (price * qty);
    }
  gst = total * 0.18;        // 18% GST
    finalAmount = total + gst;
  cout << "\n-------------------------------";
    cout << "\nTotal Amount : Rs. " << fixed << setprecision(2) << total;
    cout << "\nGST (18%)    : Rs. " << gst;
    cout << "\n-------------------------------";
    cout << "\nFinal Bill   : Rs. " << finalAmount;
    cout << "\n-------------------------------";

    return 0;
}

