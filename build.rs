extern crate bindgen;
extern crate cc;

use std::path::PathBuf;

fn main() {
    let bindings = bindgen::Builder::default()
        .clang_arg("-std=c++11")
        .clang_arg("-Ivendor/ChromaSDK/inc")
        .enable_cxx_namespaces()
        .header("src/lib.hpp")
        .allowlist_recursively(true)
        .allowlist_function("Load")
        .allowlist_function("ChromaSDK.+")
        .allowlist_var("ERROR_.+")
        .allowlist_var("ChromaSDK.+")
        .allowlist_type("ChromaSDK.+")
        .generate()
        .expect("unable to generate bindings");

    cc::Build::new()
        .include("vendor/ChromaSDK/inc")
        .file("src/lib.cpp")
        //.flag("-std=c++11")
        .compile("steam");

    let out_path = PathBuf::from(std::env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("unable to write bindings");
}
