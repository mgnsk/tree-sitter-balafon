{
  description = "Flake to build the tree-sitter-balafon grammar using nixpkgs' build-grammar";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
        buildGrammar = import "${nixpkgs}/pkgs/by-name/tr/tree-sitter/grammars/build-grammar.nix" {
          stdenv = pkgs.stdenv;
          nodejs = pkgs.nodejs;
          tree-sitter = pkgs.tree-sitter;
          jq = pkgs.jq;
          lib = pkgs.lib;
        };
        treeSitterBalafon = buildGrammar {
          language = "balafon";
          version = "0.1.0";
          src = ./.;
        };
      in {
        packages = {
          default = treeSitterBalafon;
          treeSitterBalafon = treeSitterBalafon;
        };
        defaultPackage = treeSitterBalafon;
      }
    );
}
