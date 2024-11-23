// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterX12",
    products: [
        .library(name: "TreeSitterX12", targets: ["TreeSitterX12"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterX12",
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
            name: "TreeSitterX12Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterX12",
            ],
            path: "bindings/swift/TreeSitterX12Tests"
        )
    ],
    cLanguageStandard: .c11
)
