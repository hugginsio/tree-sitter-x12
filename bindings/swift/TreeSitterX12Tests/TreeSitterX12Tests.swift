import XCTest
import SwiftTreeSitter
import TreeSitterX12

final class TreeSitterX12Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_x12())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading X12 grammar")
    }
}
