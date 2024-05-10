package tree_sitter_balafon_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-balafon"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_balafon.Language())
	if language == nil {
		t.Errorf("Error loading Balafon grammar")
	}
}
