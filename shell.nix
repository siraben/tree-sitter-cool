{ sources ? import ./nix/sources.nix { }
, pkgs ? import sources.nixpkgs { }}:
with pkgs;

let
  emscripten = (import sources.emscripten-old { }).emscripten;
in

mkShell {
  packages = [ tree-sitter emscripten ];
}
