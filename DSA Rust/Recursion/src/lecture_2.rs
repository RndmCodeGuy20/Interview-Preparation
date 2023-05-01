pub mod re_two {
    use std::mem::swap;

    pub fn sum_one_n_parameterized(n: i32, sum: i32) {
        if n == 0 {
            println!("parameterized : {sum}");
            return;
        }
        sum_one_n_parameterized(n - 1, sum + n)
    }

    pub fn sum_one_n_functional(n: i32) -> i32 {
        if n == 0 {
            return 0;
        }

        return n + sum_one_n_functional(n - 1);
    }

    pub fn factorial(n: i32) -> i32 {
        if n == 0 {
            return 1;
        }

        n * factorial(n - 1)
    }

    pub fn reverse_array(array: &i32, left: i32, right: i32) {
        if left >= right {
            return;
        }

        swap(array[left], array[right]);

        reverse_array(array, left + 1, right - 1);
    }
}