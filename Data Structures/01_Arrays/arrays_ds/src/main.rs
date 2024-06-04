/*
    Arrays - DS
    https://www.hackerrank.com/challenges/arrays-ds/problem
*/

fn reverse_array(a: &[i32]) -> Vec<i32> {
    let len = a.len();
    let mut reverse = vec![0; len];
    for i in 0..len {
        let idx = len - i - 1;
        reverse[idx] = a[i];
    }

    reverse
}

fn main() {
    let arr: Vec<i32> = vec![1, 2, 3, 4];

    let res = reverse_array(&arr);

    for i in 0..res.len() {
        print!("{} ", res[i]);
    }
    println!();
}
