// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "arduino.h"

#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
    UNREFERENCED_PARAMETER(argc);
    UNREFERENCED_PARAMETER(argv);
    return RunArduinoSketch();
}

// Check build output (/W4) as well as log ("Output" tab below).
void setup()
{
    // Call/test degree() and radians() global functions
    float deg(85.0f);
    deg = ::degrees(::radians(deg));
    Log("CHECK: %s | ::degrees() and ::radians()\n", (deg > 84.9 && deg < 85.1) ? "Pass" : "FAILED");

    // Test binary.h inclusion from arduino-sdk
    uint8_t byte = B10101010;
    Log("CHECK: %s | \"B\" prefix for byte constants\n", (byte = 0xAA) ? "Pass" : "FAILED");

    // Test #define constrain()
    int x = 257;
    Log("CHECK: %s | ::constrain()\n", (constrain(constrain(x, 0, 256), 0, 255) == 255) ? "Pass" : "FAILED");

    // Test ::isAlphaNumeric()
    Log("CHECK: %s | ::isAlphaNumeric()\n", isAlphaNumeric('c') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isAlphaNumeric()\n", isAlphaNumeric('!') ? "FAILED" : "Pass");

    // Test ::isAlpha()
    Log("CHECK: %s | ::isAlpha()\n", isAlpha('c') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isAlpha()\n", isAlpha('7') ? "FAILED" : "Pass");

    // Test ::isAscii()
    Log("CHECK: %s | ::isAscii()\n", isAscii('!') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isAscii()\n", isAscii(0x0100) ? "FAILED" : "Pass");

    // Test ::isWhitespace()
    Log("CHECK: %s | ::isWhitespace()\n", isWhitespace('\t') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isWhitespace()\n", isWhitespace('c') ? "FAILED" : "Pass");

    // Test ::isControl()
    Log("CHECK: %s | ::isControl()\n", isControl('\n') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isControl()\n", isControl(' ') ? "FAILED" : "Pass");

    // Test ::isDigit()
    Log("CHECK: %s | ::isDigit()\n", isDigit('7') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isDigit()\n", isDigit('c') ? "FAILED" : "Pass");

    // Test ::isGraph()
    Log("CHECK: %s | ::isGraph()\n", isGraph('c') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isGraph()\n", isGraph(' ') ? "FAILED" : "Pass");

    // Test ::isLowerCase()
    Log("CHECK: %s | ::isLowerCase()\n", isLowerCase('c') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isLowerCase()\n", isLowerCase('C') ? "FAILED" : "Pass");

    // Test ::isPrintable()
    Log("CHECK: %s | ::isPrintable()\n", isPrintable('c') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isPrintable()\n", isPrintable('\n') ? "FAILED" : "Pass");

    // Test ::isPunct()
    Log("CHECK: %s | ::isPunct()\n", isPunct(',') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isPunct()\n", isPunct('c') ? "FAILED" : "Pass");

    // Test ::isSpace()
    Log("CHECK: %s | ::isSpace()\n", isSpace(' ') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isSpace()\n", isSpace('c') ? "FAILED" : "Pass");

    // Test ::isUpperCase()
    Log("CHECK: %s | ::isUpperCase()\n", isUpperCase('C') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isUpperCase()\n", isUpperCase('c') ? "FAILED" : "Pass");

    // Test ::isHexadecimalDigit()
    Log("CHECK: %s | ::isHexadecimalDigit()\n", isHexadecimalDigit('F') ? "Pass" : "FAILED");
    Log("CHECK: %s | ::isHexadecimalDigit()\n", isHexadecimalDigit('G') ? "FAILED" : "Pass");

    // Test ::toAscii()
    //Log("CHECK: %s | ::toAscii()\n", toAscii('\n') ? "Pass" : "FAILED");

    // Test ::toLowerCase()
    Log("CHECK: %s | ::toLowerCase()\n", (toLowerCase('C') == 'c') ? "Pass" : "FAILED");

    // Test ::toUpperCase()
    Log("CHECK: %s | ::toUpperCase()\n", (toUpperCase('c') == 'C') ? "Pass" : "FAILED");

    // Call/test ...
    // next test here
}

void loop()
{
    _exit_arduino_loop();
}
