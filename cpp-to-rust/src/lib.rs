extern crate libc;

extern {
    fn triple_input(input: libc::c_int) -> libc::c_int;
}

#[no_mangle]
pub extern fn double_input(input: i32) -> i32 {
    unsafe { triple_input(input) }
}
