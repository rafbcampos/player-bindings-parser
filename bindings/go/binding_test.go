package tree_sitter_player_bindings_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-player_bindings"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_player_bindings.Language())
	if language == nil {
		t.Errorf("Error loading PlayerBindings grammar")
	}
}
