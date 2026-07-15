{
  pkgs ? import <nixpkgs> { },
}:

with pkgs;
mkShell {
  name = "tree-sitter-zathurarc";
  buildInputs = [
    tree-sitter
    bun
    cargo
    uv
  ];
}
