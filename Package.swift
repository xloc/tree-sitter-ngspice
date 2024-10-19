// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterNgspice",
    products: [
        .library(name: "TreeSitterNgspice", targets: ["TreeSitterNgspice"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterNgspice",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterNgspiceTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterNgspice",
            ],
            path: "bindings/swift/TreeSitterNgspiceTests"
        )
    ],
    cLanguageStandard: .c11
)
