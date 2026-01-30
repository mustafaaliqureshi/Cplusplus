#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

// Fake SHA-256 (for simplicity, not real crypto)
std::string fakeHash(const std::string& data) {
    unsigned int hash = 0;
    for (char c : data) {
        hash = (hash * 31) + c; // Simple hash-like function
    }
    std::stringstream ss;
    ss << std::hex << hash; // Convert to hex
    return ss.str();
}

class Block {
public:
    std::string prevHash;
    std::vector<std::string> transactions;
    int nonce;
    std::string hash;

    Block(std::string prevHash, std::vector<std::string> transactions) 
        : prevHash(prevHash), transactions(transactions), nonce(0) {}

    void mineBlock(int difficulty) {
        std::string target(difficulty, '0');
        do {
            nonce++;
            hash = fakeHash(prevHash + std::to_string(nonce));
        } while (hash.substr(0, difficulty) != target);
        std::cout << "Block mined: " << hash << std::endl;
    }
};

int main() {
    Block genesis("0", {"Alice pays Bob 5 BTC", "Bob pays Charlie 3 BTC"});
    std::cout << "Mining genesis block..." << std::endl;
    genesis.mineBlock(2); // Mine with 2 leading zeros (easy)

    Block secondBlock(genesis.hash, {"Charlie pays Dave 1 BTC"});
    std::cout << "\nMining second block..." << std::endl;
    secondBlock.mineBlock(2);

    return 0;
}