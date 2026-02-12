#include <stdio.h>
//判断x是否是2的幂次方
//不能用循环，不能用math.h
int is_power_of_two(int x){
	if(x <= 0) return 0;
	return (x&(x-1)) == 0;
}
int main() {
    int test_cases[] = {1, 2, 3, 4, 8, 15, 16, 1024, -1, 0};

    for (int i = 0; i < 10; i++) {
        int val = test_cases[i];
        if (is_power_of_two(val)) {
            printf("✅ %d is a power of 2\n", val);
        } else {
            printf("❌ %d is NOT a power of 2\n", val);
        }
    }
    return 0;
}
