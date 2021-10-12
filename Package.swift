// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "NiwapiLogic",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "NiwapiLogic",
            targets: ["NiwapiLogic"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "NiwapiLogic",
            path: "./NiwapiLogic.xcframework"
        ),
    ]
)
