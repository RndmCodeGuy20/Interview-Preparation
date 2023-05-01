pub mod re_one {
    pub fn print_name_five_times(n: i32) {
        if n == 0 {
            return;
        }
        println!("{n} Shantanu Mane");
        print_name_five_times(n - 1);
    }

    pub fn print_one_to_n(n: i32) {
        if n == 0 {
            return;
        }
        print_one_to_n(n - 1);
        print!("{n}, ");
    }

    pub fn print_n_to_one(n: i32) {
        if n == 0 {
            return;
        }
        print!("{n}, ");
        print_n_to_one(n - 1);
    }

    pub fn back_print_one_to_n(n: i32) {
        if n == 0 { return; }
        back_print_one_to_n(n - 1);
        println!("{n}");
    }
}