package tree_sitter_x12_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_x12 "github.com/hugginsio/tree-sitter-x12/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_x12.Language())
	if language == nil {
		t.Errorf("Error loading X12 grammar")
	}
}
