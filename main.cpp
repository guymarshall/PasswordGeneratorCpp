#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    return 0;
}

// public static String generatePassword(String[] characters, int number) {
//     int counter = 0;
//     StringBuilder password = new StringBuilder();

//     Random random = new Random();

//     while (counter < number) {
//         //percentage print out
//         double percentageProgress = ((double)counter / (double)number * 100.0) + 1.0;
//         if (percentageProgress % 1 == 0) {
//             System.out.printf("%d%% complete.\n", (int)percentageProgress);
//         }
//         password.append(characters[Math.round(random.nextInt(characters.length))]);
//         counter++;
//     }

//     return password.toString();
// }

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