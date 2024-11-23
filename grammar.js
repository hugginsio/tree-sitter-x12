/**
 * @file X12 EDI grammar for the tree-sitter parsing library
 * @author Kyle Huggins <kyle@huggins.io>
 * @license bsd-3-clause
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "x12",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => "hello",
  },
});
