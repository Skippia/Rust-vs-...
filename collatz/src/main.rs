use std::time::Instant;

fn collatz(n: u64) -> u64{
    let mut collatz_number= n.clone();
    let mut itterrations = 0u64;
    while collatz_number > 1 {
        if collatz_number % 2 == 0 {
            collatz_number /= 2;
        } else {
            collatz_number = collatz_number * 3 + 1;
        }
        itterrations += 1;
    }
    return itterrations
}


fn main() {
    let start = Instant::now();

    let start_from = 2;
    let end_at = 10000002;
    let mut total_iterations = 0u64;
    for i in start_from..end_at{
        total_iterations+=1;
        if collatz(i) == 0 {
            break
        }
    }

    let duration = start.elapsed();

    print!("Total iterations {:?} ", total_iterations);
    print!(" Time elapsed: {:?} \n", duration);

}
