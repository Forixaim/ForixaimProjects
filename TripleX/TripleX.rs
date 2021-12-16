fn main() {
    let mut input = String::new();
    println!("Hello, world!\n");
    let b1 = std::io::stdin().read_line(&mut input).unwrap();
    println!("\n{}",input);
    println!("{}",b1);
    print!("The great lord Matthew have no knowledge of Rust, go figure it out yourselves");
}
