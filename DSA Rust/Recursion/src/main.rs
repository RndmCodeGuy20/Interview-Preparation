mod lecture_1;
mod lecture_2;

use crate::lecture_1::re_one;
use crate::lecture_2::re_two;

fn main() {
    // re_two::sum_one_n_parameterized(3, 0);
    // let sum: i32 = re_two::sum_one_n_functional(3);
    // println!("functional : {sum}");

    // print!("factorial : {}", re_two::factorial(5));

    let array = [1, 2, 3, 4, 5];
    re_two::reverse_array(*array, 0, 5);
    print!("{array}");
}