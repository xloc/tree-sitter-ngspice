package tree_sitter_ngspice_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ngspice "www.github.com/xloc/tree-sitter-ngspice/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ngspice.Language())
	if language == nil {
		t.Errorf("Error loading Ngspice grammar")
	}
}
