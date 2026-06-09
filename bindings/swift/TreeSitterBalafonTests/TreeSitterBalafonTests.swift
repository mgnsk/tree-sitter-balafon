import XCTest
import SwiftTreeSitter
import TreeSitterBalafon

final class TreeSitterBalafonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_balafon())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Balafon grammar")
    }
}
