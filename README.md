<b>Custom Language String Validator</b>

## Introduction

This repository contains a collection of programs designed to validate user-input strings based on a custom-defined language, resembling the behavior found in other programming languages. The programs implement a finite state machine approach, where each character of the input string is carefully evaluated based on the specified language rules and constraints.

## Features

- Custom Language Validation: The programs determine whether an input string adheres to the defined language rules, distinguishing between valid and invalid strings.
- Finite State Machine: The validation process relies on state transitions, wherein each character moves the program from one state to another, reflecting the language's syntax and semantics.
- Efficient String Evaluation: By utilizing a finite state machine, the programs efficiently process each character, swiftly identifying any deviations from the language rules.
- Error Handling: If an input string fails to meet the language requirements at any point, the programs halt and indicate the string's invalidity. In some cases, an infinite state may be reached for non-compliant strings.

## Usage
To use the programs, follow these steps:
- Open the program file in Visual Studio Code.
- Modify the custom-defined language rules in the program if needed.
- Run the program and provide an input string when prompted.
- The program will process the input string and display whether it is valid or not according to the custom language.

## Examples
Here are some examples of strings and their validation outcomes:

- Valid String: example123: This string satisfies the language rules and will be classified as valid.
- Invalid String: invalid!@#: Special characters are not allowed in the language, making this string invalid.
- Infinite State: 123456789: This string cannot proceed to any other state, leading to an infinite state due to the absence of language-compliant characters.

## Contributing
We welcome contributions to enhance this repository. If you wish to contribute, please follow the guidelines outlined in CONTRIBUTING.md, and feel free to submit pull requests.

## License
No license is specified for this repository. All rights reserved to the owner.

## Contact
If you have any questions, suggestions, or feedback, please feel free to contact me at mfaique122@gmail.com or via my GitHub profile. I value your input and am happy to hear from you!
