import XCTest
import SwiftTreeSitter
import TreeSitterNgspice

final class TreeSitterNgspiceTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ngspice())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ngspice grammar")
    }
}
