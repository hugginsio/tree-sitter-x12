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
    source_file: ($) => repeat($.segment),

    segment_header: ($) => /[A-Z][A-Z0-9]{1,2}/,
    element_separator: ($) => "*",
    component_element_separator: ($) => ">",
    segment_separator: ($) => seq("~", optional("\n")),

    numeric: ($) => /[0-9\.]+/,
    // NOTE(hugginsio): this might not be all supported special characters
    alphanumeric: ($) => /[A-Za-z0-9!@#$%&(),-_\.\s]+/,

    segment: ($) =>
      seq(
        $.segment_header,
        $.element_separator,
        repeat1(choice($.element_separator, $.numeric, $.alphanumeric)),
        optional($.component_element_separator),
        $.segment_separator,
      ),
  },
});
