# Dictionary Attack – Computer Programming I

Welcome to the **Dictionary Attack Project**. This project is a password cracker that encrypts weak passwords using SHA256. If the encrypted result matches the user's encrypted password, the system infers that the plaintext password is the weak password. This README provides details on how to use and compile the program, as well as an overview of its modular design and usage.

---

## Authors

- Gabriel Cesar Silvino Xavier

## Acknowledgements

- Prof. Daniel Saad Nogueira Nunes

---

## Modular Design

The project is divided into the following modules:

- **Input Module**: Reads the user file and the weak password file, storing the data in appropriate structures.
- **Output Module**: Produces the cracking report.
- **Cryptographic Module**: Applies the SHA256 hash function to strings.
- **Cracking Module**: Responsible for breaking the passwords.
- **Main Module**: Contains the `main` function and calls other modules to execute the program.

---

## Features

The paths for the input and output files must be passed as command-line arguments, as described in the Compilation and Execution section.

### Input Files:

1. **User File**:

   - Full name (up to 50 characters, spaces allowed)
   - Date of birth in the format DD/MM/YYYY (10 characters)
   - Username (up to 20 characters)
   - Encrypted password (SHA256, 64 characters)
   - Date of last password change in the format DD/MM/YYYY (10 characters)

   **Separator:** `---`

2. **Weak Passwords File**:

   - Weak passwords separated by lines (each password up to 32 characters)

### Output File:

The report contains:

- Username
- Plaintext password
- Full name
- Date of birth

**Separator:** `---`

---

## Compilation and Execution

To compile and run the program, follow these steps:

1. **Compile**:

   Run the following command to compile the project:

   ```bash
   make
   ```

2. **Run**:

   Execute the program using:

   ```bash
   ./bin/main parameter01 parameter02 parameter03
   ```

   - `parameter01`: Absolute path to the user file.
   - `parameter02`: Absolute path to the weak passwords file.
   - `parameter03`: Absolute path to the report output file.
