#include <iostream>
#include "fstream"
#include <cassert>
#include "Solver.h"
#include "RandomWay.h"

int main() {
    std::fstream cin;
    std::string metric, algorithm;
    try {
        cin.open("settings.txt");
        cin >> algorithm >> metric;
        cin.close();
    } catch (std::exception e) {
        std::cerr << e.what();
        cin.close();
    }
    std::cout << "Metric: " << metric << "\nAlgorithm: " << algorithm << std::endl;
    size_t n, k;
    n = k = 0;
    std::vector<Point> points;
    try {
        cin.open("test.txt");
        cin >> n >> k;
        for(size_t i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            points.emplace_back(x, y);
        }
        cin.close();
    } catch (std::exception e) {
        std::cerr << e.what();
        cin.close();
    }
    assert(n >= 0);
    assert(k >= 0);
    Solver solver(points);
    solver.solve(metric, algorithm, k);
    solver.print();
    system("pause");
    return 0;
}