#include <iostream>
#include <string>

std::string generatePassword(int length)
{
    char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '\'', '£', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', '{', ']', '}', ';', ':', '"', '@', '#', '~', ',', '<', '.', '>', '/', '?'};

    int counter = 0;
    std::string password = "";

    while (counter < length)
    {
        int percentageProgress = ((double)counter / (double)length * 100.0) + 1.0;
        if (percentageProgress % 1 == 0)
        {
            std::cout << percentageProgress << " complete." << std::endl;
        }
        // password.append(characters[Math.round(random.nextInt(characters.length))]); // in case it doesn't work
        password += characters[rand() % strlen(characters)];
        counter++;
    }

    return password;
}

int main(int argc, char const *argv[])
{
    std::cout << "Enter number of characters: ";
    int numberOfCharacters;
    std::cin >> numberOfCharacters;
    return 0;
}

// public static void main(String[] args) {
//     System.out.print("Enter number of characters: ");
//     Scanner scanner = new Scanner(System.in);
//     int numberOfCharacters = scanner.nextInt();

//     final String[] characters = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "!", "\"", "£", "$", "%", "^", "&", "*", "(", ")", "-", "_", "=", "+", "[", "{", "]", "}", ";", ":", "'", "@", "#", "~", ",", "<", ".", ">", "/", "?"};

//     System.out.println("Generating random password...");
//     final String password = generatePassword(characters, numberOfCharacters);

//     System.out.println("Saving password to file");
//     try {
//         FileWriter myWriter = new FileWriter("password.txt");
//         myWriter.write(password);
//         myWriter.close();
//         System.out.println("Password has been saved to file.");
//     } catch (IOException e) {
//         System.out.println("An error occurred.");
//         e.printStackTrace();
//     }
// }