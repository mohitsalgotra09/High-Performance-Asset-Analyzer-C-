#include <iostream>
#include <vector>
#include <queue>

struct Asset {
    std::string name; double vol;
    bool operator>(const Asset& other) const { return vol > other.vol; }
};

int main() {
    std::priority_queue<Asset, std::vector<Asset>, std::greater<Asset>> topK;
    std::vector<Asset> data = {{"USD", 0.5}, {"BTC", 12.4}, {"ETH", 8.2}, {"GOLD", 1.1}};

    for (auto& a : data) {
        topK.push(a);
        if (topK.size() > 2) topK.pop(); 
    }
    
    std::cout << "Top Market Volatility Assets identified." << std::endl;
    return 0;
}
