package tree_sitter_zathurarc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-zathurarc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_zathurarc.Language())
	if language == nil {
		t.Errorf("Error loading Zathurarc grammar")
	}
}
