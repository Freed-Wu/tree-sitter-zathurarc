import XCTest
import SwiftTreeSitter
import TreeSitterZathurarc

final class TreeSitterZathurarcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_zathurarc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Zathurarc grammar")
    }
}
