#include <stdio.h>
#include <math.h>

int main() {
    double numbers[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int n = 5;
    double sum = 0.0, sum_squared_diff = 0.0, mean, variance, std_deviation;
    
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    
    mean = sum / n;
    
    for (int i = 0; i < n; i++) {
        sum_squared_diff += (numbers[i] - mean) * (numbers[i] - mean);
    }
    variance = sum_squared_diff / n;
    
    std_deviation = sqrt(variance);
    
    printf("Результаты:\n");
    printf("а) n = %d\n", n);
    printf("б) x̄ = %.6f\n", mean);
    printf("в) σ² = %.6f\n", variance);
    printf("г) Δx = %.6f\n", std_deviation);
    
    return 0;
}
