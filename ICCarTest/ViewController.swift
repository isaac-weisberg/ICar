//
//  ViewController.swift
//  ICCarTest
//
//  Created by a.vaysberg on 11/29/22.
//

import Cocoa
import ICar

class ViewController: NSViewController {
    var runtime: ICRuntime!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let carLength = 4.2
        let wheelbase = 2.4
        let wheelLongtitudionalOffset = wheelbase / 2
        
        let carWidth = 1.625
        let wheelLateralDistance = carWidth - 15
        let wheelLateralOffset = wheelLateralDistance / 2
        
        runtime = ICRuntime(
            player1: ICCar(
                position: Vector2D(
                    x: 0,
                    y: 0
                ),
                wheelCircumference: 50,
                heading: .pi / 2,
                fl_wheel: ICWheel(
                    position: Vector2D(
                        x: -wheelLateralOffset,
                        y: wheelLongtitudionalOffset
                    ),
                    rpm: 60
                ),
                fr_wheel: ICWheel(
                    position: Vector2D(
                        x: wheelLateralOffset,
                        y: wheelLongtitudionalOffset
                    ),
                    rpm: 60
                ),
                rl_wheel: ICWheel(
                    position: Vector2D(
                        x: -wheelLateralOffset,
                        y: -wheelLongtitudionalOffset
                    ),
                    rpm: 60
                ),
                rr_wheel: ICWheel(
                    position: Vector2D(
                        x: wheelLateralOffset,
                        y: -wheelLongtitudionalOffset
                    ),
                    rpm: 60
                )
            )
        )
        
        
        print(runtime.player1.position.f)
        
        let deltatime = 0.016
        let tickCount = 3
        
        (0..<tickCount).forEach { tick in
            icruntime_simulate(&runtime, deltatime)
            print(runtime.player1.position.f)
        }
    }
}

extension NumberFormatter {
    static let icarDoubleFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        
        formatter.maximumFractionDigits = 2
        formatter.minimumFractionDigits = 2
        
        return formatter
    }()
}

extension Double {
    var f: String {
        NumberFormatter.icarDoubleFormatter.string(from: NSNumber(floatLiteral: self)) ?? "\(self)"
    }
}

extension ICar.Vector2D {
    var f: String {
        return "Vector2D(x: \(x.f), y: \(y.f))"
    }
}
